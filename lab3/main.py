eps = 10 ** (-5)
print("eps =", eps)
sum = 0
k = 0
x = float(input("Введите x: "))
current = 0

while k >= 0:
    from math import factorial, fabs
    previous = current
    current = (x**k)/(factorial(k))
    if fabs(current - previous) <= eps:
      print("Конец цикла")
      break
    sum += current
    k += 1

print("Сумма ряда равна", sum)
input("Press any key to continue")