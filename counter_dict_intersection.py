from collections import Counter
A='hello'
B='billion'
a,b=Counter(A),Counter(B)
print(sum((a-b).values())+sum((b-a).values()))