n = int(input())
i = 2
while(2**i-1 <=n):
    current_number = 2**i-1
    amount_of_divisors = 0
    for j in range(1, current_number+1):
        if current_number%j==0:
            amount_of_divisors+=1
    if amount_of_divisors == 2:
        print(current_number) 
    i+=1 