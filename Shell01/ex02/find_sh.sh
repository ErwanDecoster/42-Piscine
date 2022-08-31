find . -type f -name '*.sh' -print | awk -F "/" '{print $NF}' | sed 's/\.sh//'
