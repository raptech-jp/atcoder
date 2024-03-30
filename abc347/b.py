str = input()

substrings = set()
n = len(str)
for i in range(n):
    for j in range(i + 1, n + 1):
        substring = str[i:j]
        if substring:
            substrings.add(substring)
            
print(len(substrings))
