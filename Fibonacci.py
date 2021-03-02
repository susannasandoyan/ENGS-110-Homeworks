age =int(input("Please type your age: "))
f1 = 0
f2 = 1
sum = 0
while (f2 <= age): #Finding the sum of all Fibonacci number less the the inserted age
	sum = sum + f2
	a = f2
	f2 = f1 + f2
	f1 = f2
print("sum =", sum)

for i in range(2,age): #Determining weather the number is prume or not
	if (age % i == 0):
		print (age, "is not a prime number")
		break
	else:
		print(age, "is a prime number")
		break

binary = str() #Finding the reverse of the banniry representation of the number of the age
while (age != 0):
	binary = binary + str(age % 2)
	age = int(age / 2)

c = str()
b = int(binary)
while ( b != 0): #Making the reverse of the binary
	a = b % 10
	b = b // 10
	c = str(c) + str(a)
print(c)
