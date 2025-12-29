from collections import Counter

s = input().strip()

# Count frequency of each character
freq = Counter(s)

# Sort by (-count, character) so that:
# 1. Higher counts come first
# 2. Alphabetical order breaks ties
sorted_items = sorted(freq.items(), key=lambda x: (-x[1], x[0]))

# Print top 3
for char, count in sorted_items[:3]:
    print(char, count)
