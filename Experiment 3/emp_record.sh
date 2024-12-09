echo "enter employee id"
read id
echo "eployee id is: " $id
echo "enter employee name"
read name
echo "employee name is: " $name
echo "enter basic salary"
read salary
echo "basic salary of employee is: " $salary
echo "enter HRA"
read HRA
echo "HRA is: " $HRA
echo "enter DA"
read DA
echo "DA is: " $DA
echo "gross salary is: " $((salary+HRA+DA))