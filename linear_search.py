def ls(arr,x):
    for i,v in enumerate(arr):
        if v==x:
            return i
    return -1
print(ls([5,6,7],6))