	:qage=input(int("Please enter your age"))
f1=0
f2=1
sum=1
while (f2<=age)
	sum=sum+f2
	temp=f1+f2
	f1=f2
	f2=temp
	print (temp)
print (sum) 
