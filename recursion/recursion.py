def factorial(x):
    if x == 1:
        return 1
    else:
        smallerProblem = x - 1
        smallerResult = factorial(smallerProblem)
    return x * smallerResult

print("Factorial of 5: ", factorial(5))
print("Factorial of 7: ", factorial(7))