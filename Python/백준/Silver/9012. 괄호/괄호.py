def check(e):

  stack = []
  for c in e:
    if(c == '('):
      stack.append('(')
    else:
      if( c == ')'):
        if(len(stack) <= 0):
          return "NO"
        else:
          stack.pop()
  if(len(stack) >= 1):
    return "NO"
  return "YES"

n = int(input())
for i in range(n): 
  a = input() 
  print(check(a))
