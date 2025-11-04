from collections import Counter
words=['cat','dog','tac','god','act']
temp=[''.join(sorted(i)) for i in words]
freq=Counter(temp)
print(max(freq.values()))