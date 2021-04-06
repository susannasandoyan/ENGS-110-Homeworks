def FibSum(age):
	f1 = 0
	f2 = 1
	sum = 0
	while (f2 <= age): #Finding the sum of all Fibonacci number less the the inserted age
		sum = sum + f2
		a = f2
		f2 = f1 + f2
		f1 = a
	print("sum =", sum)

def Prime(age):
	for i in range(2,age-1): #Determining weather the number is prume or not
		if (age % i == 0):
			print (age, "is not a prime number")
			break	
	else:
		print(age, "is a prime number")
	
def Binary(age):
	binary = str() #Finding the reverse of the binary representation of the number of the age
	while (age != 0):
		binary = binary + str(age % 2)
		age = int(age / 2)

	x = ''
	c = len(binary)
	while c > 0:
		x += str(int(binary) % 10)
		binary =int(binary) / 10
		c -=1
	print(x)
def main():
	while (True):
		X = int(input("Type your age: "))
		if(FibSum(X) != 1):
			Prime(X)
			Binary(X)
			break
main()
