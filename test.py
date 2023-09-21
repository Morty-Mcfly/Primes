from ctypes import *
import datetime
PrimelibDLL = CDLL("x64\\Debug\\Primes.dll")



def isPrime(n):
	# Corner case
	if (n <= 1):
		return False

	# Check from 2 to n-1

	for i in range(2,int(n/2)):
		if (n % i == 0):
			return False

	return True

datetime.datetime.now()
now = datetime.datetime.now()
p = PrimelibDLL.primeTest()
C_time = datetime.datetime.now() - now

now = datetime.datetime.now()
p=False
for i in range (PrimelibDLL.test_size()):
	p = isPrime(i)
py_time = datetime.datetime.now() - now

print(PrimelibDLL.test_size())
print(C_time)
print(py_time)
print(py_time/C_time)

