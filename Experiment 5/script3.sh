echo "enter filename"
read filename
echo "enter the word whose line you want to delete"
read word
grep -v $word $filename > sample2.txt