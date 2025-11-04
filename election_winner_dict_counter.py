from collections import Counter
votes=['john','johnny','jackie','johnny','john','jackie','jamie','jamie','john','johnny','jamie','johnny','john']
vote_count=Counter(votes)
mx=max(vote_count.values())
print(sorted([i for i in vote_count if vote_count[i]==mx])[0])