try:
    num=int(input("enter the numerator value:"))
    den=int(input("enter the denominator value:"))

    result=num/den

    print("Result:",result)

except ZeroDivisionError:
    print("error: cannot divide value with zero")
except ValueError:
    print("Error: please enter valid integers")
finally:
    print("execute successfully:")


print(np._version)

