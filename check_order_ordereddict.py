from collections import OrderedDict
def check_order(string,pattern):
    od=OrderedDict.fromkeys(string)
    ptr=0
    for key in od:
        if key==pattern[ptr]:
            ptr+=1
        if ptr==len(pattern):
            return True
    return False
print(check_order('engineers rock','er'))