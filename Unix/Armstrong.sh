echo -n -r "Enter A Number: " n
arm=0
temp=$n
while [ "$n" -ne 0 ]
 do
	r=$((n % 10))
	arm=$((arm + r * r * r))
	n=$((n / 10))
done
echo $arm
if [ $arm -eq "$temp" ]; then
	echo "Armstrong"
else
	echo "Not Armstrong"
fi