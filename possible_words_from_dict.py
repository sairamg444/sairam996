def possible_words(l,word):
    for i in l:
        flag=0
        for j in i:
            if j not in word:
                flag=1
                break
        if flag==0:
            print(i)
l=['go','bat','me','eat','goal','boy','run']
word=['e','o','b','a','m','g','l']
possible_words(l,word)