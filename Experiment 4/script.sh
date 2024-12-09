echo "enter file"
read filename
if test -f $filename
then echo "file exist and it is an ordinary file"
elif test -d $filename
then echo "directory file"
else
echo "not exist"
fi