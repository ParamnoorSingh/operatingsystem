echo "enter the string"
read str
echo "length: ${#str}"
substr = "${str:2:6}"
echo "Specified substring:- $substr"