t=( [1,2],[3,4],(5,6) )
flat=tuple(x for part in t for x in (part if isinstance(part,tuple) else tuple(part)))
print(flat)