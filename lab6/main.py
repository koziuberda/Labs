def h(a,b):
    return a/(1+b*b) + b/(1+a*a) - (a-b)**3
def F(s,t):
    return h(s,t) + max( h(s-t,s*t)**2 , h(s-t,s+t)**4 ) + h(1,1)
s, t = int(input()), int(input()) 
print(F(s,t))