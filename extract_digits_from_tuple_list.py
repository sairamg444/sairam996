tlist=[(12,34),(5,67),(890,)]
res=[int(d) for tpl in tlist for num in tpl for d in str(num)]
print(res)