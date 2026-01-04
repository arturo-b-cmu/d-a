def factorial(x):
    if x == 1:
        return 1
    else:
        smallerProblem = x - 1
        smallerResult = factorial(smallerProblem)
    return x * smallerResult

print("Factorial of 5: ", factorial(5))
print("Factorial of 7: ", factorial(7))


def fib(y):
    if y == 0 or y == 1:
        return y
    else:
        return fib(y - 1) + fib(y - 2)

print("Fib of: ", fib(10))




def fib_1(n):
	if n == 0 or n == 1: 
		return n 
	else: 
		return fib_1(n - 1) + fib_1(n - 2) 

print("=========> Fibonacci of 5: ", fib(5))
