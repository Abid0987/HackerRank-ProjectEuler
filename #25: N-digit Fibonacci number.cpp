### This code using Python

##

def cnt(num):
    return len(str(num))

f1 = 1
f2 = 1
f3 = f1 + f2
cntf3 = cnt(f3)

x=3
b = [0,1]

while cntf3 != 5000:
    x+=1
    f1 = f2
    f2 = f3
    f3 = f1 + f2
    cntf2 = cntf3
    cntf3 = len(str(f3))
    if(cntf3>cntf2):
        b.append(x)

    

t = int(input())
for i in range(t):
    j = int(input())
    print(b[j])

      
      ##
