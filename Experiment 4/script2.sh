if [ ! -f $1 ]
then echo "filename $1 doesnot exist"
exit 
else
tr '[a-z]' '[A-Z]' <$1
fi 