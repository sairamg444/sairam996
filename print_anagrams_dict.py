test_list=['cat','dog','tac','god','act']
temp_dict={}
for word in test_list:
    key=''.join(sorted(word))
    temp_dict.setdefault(key,[]).append(word)
print(list(temp_dict.values()))