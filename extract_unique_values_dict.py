d={'a':[1,2,3],'b':[3,4,5],'c':[1,2,3]}
print(list(set(x for v in d.values() for x in v)))