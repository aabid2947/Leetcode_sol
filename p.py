first = "tarantula"
second = ""
for i in range(len(first)-1,-1,-1):
  print(i)
  second = first[i] + second
  print(second)
print(second)