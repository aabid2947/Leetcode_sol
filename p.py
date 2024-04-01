h = "aba"
s = set(h)
sf ="aabid"
for i in s:
    print(i)
    print(h.count(i))
    print(sf.count(i))
    if h.count(i) > sf.count(i) or i not in sf:
        print(False)