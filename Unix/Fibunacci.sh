read -p "Enter the number of terms: " N
a=0
b=1   
echo "The Fibonacci series upto $N terms is : "
for (( i=0; i<N; i++ ))
do
    echo -n "$a "
    fn=$((a + b))
    a=$b
    b=$fn
done