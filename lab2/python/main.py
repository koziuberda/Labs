x = float(input())
y = float(input())
r1 = float(input())
r2 = float(input())

if ((x*x + y*y > r1*r1) & (x*x +y*y < r2*r2)):
    print("Yep! I found your point here!")
else:
    print("Maube later...")