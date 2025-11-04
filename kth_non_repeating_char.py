from collections import OrderedDict
test='geeksforgeeks'
od=OrderedDict()
for c in test:
    od[c]=od.get(c,0)+1
print([k for k,v in od.items() if v==1][1])