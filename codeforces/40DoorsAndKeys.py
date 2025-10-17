for _ in range(int(input())):
  word = input()
  if word.find('G') > word.find('g') and word.find('B') > word.find('b') and word.find('R') > word.find('r'):
    print("YES")
  else:
    print("NO")
