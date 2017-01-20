find . -type f -name "*.sh" -exec basename *.sh \; | cut -d . -f 1
