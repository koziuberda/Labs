x = float(input())
y = float(input())

if (x*x + y*y <=1):
    if(abs(y)>=x):
        print("Yep! I found your point here!")
    else:
        print("I didn't find your point")
else:
    print("I didn't find your point")
    