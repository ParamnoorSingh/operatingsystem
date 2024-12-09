echo "enter filename"
read $filename
echo "enter starting line"
read start
echo "enter ending line"
read end
sed -n "${start},${end}p" "$filename"