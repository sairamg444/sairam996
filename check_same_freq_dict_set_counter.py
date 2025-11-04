from collections import Counter
s='xyyz'
f=Counter(s)
vals=list(f.values())
print(all(x==vals[0] for x in vals) or all(x+1==vals[0] for x in vals))