#!/bin/zsh

# Function to delete files based on pattern recursively (excluding hidden folders/files)
delete_files() {
    pattern=$1
    # Find all regular (non-hidden) files recursively, excluding hidden dirs
    find . -type f ! -path '*/.*' | while read -r f; do
        filename=${f##*/}  # Extract filename (without path)
        case $pattern in
            "all")
                if [[ "$filename" != *.* ]]; then
                    echo "Deleting $f"
                    rm -f "$f"
                elif [[ "$filename" == *.exe || "$filename" == *.out ]]; then
                    echo "Deleting $f"
                    rm -f "$f"
                fi
                ;;
            "extensionless")
                if [[ "$filename" != *.* ]]; then
                    echo "Deleting $f"
                    rm -f "$f"
                fi
                ;;
            "exe")
                if [[ "$filename" == *.exe ]]; then
                    echo "Deleting $f"
                    rm -f "$f"
                fi
                ;;
            "out")
                if [[ "$filename" == *.out ]]; then
                    echo "Deleting $f"
                    rm -f "$f"
                fi
                ;;
        esac
    done
}

# Check for -o option
if [[ $1 == "-o" ]]; then
    echo "Choose file type to delete:"
    echo "1) extensionless files"
    echo "2) .exe files"
    echo "3) .out files"
    read -r choice
    case $choice in
        1) delete_files "extensionless" ;;
        2) delete_files "exe" ;;
        3) delete_files "out" ;;
        *) echo "Invalid choice. Exiting." ;;
    esac
else
    # Default: delete extensionless, .exe, and .out files
    delete_files "all"
fi

echo "Operation completed!"
