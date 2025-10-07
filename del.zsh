#!/bin/zsh

# Function to delete files based on pattern in current directory
delete_files() {
    pattern=$1
    for f in *; do
        if [[ -f "$f" ]]; then
            case $pattern in
                "extensionless")
                    [[ "$f" != *.* ]] && echo "Deleting $f" && rm -f "$f"
                    ;;
                "exe")
                    [[ "$f" == *.exe ]] && echo "Deleting $f" && rm -f "$f"
                    ;;
                "out")
                    [[ "$f" == *.out ]] && echo "Deleting $f" && rm -f "$f"
                    ;;
            esac
        fi
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
    # Default: delete extensionless files
    delete_files "extensionless"
fi

echo "Operation completed!"
