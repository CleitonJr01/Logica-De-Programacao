import math

a = float(input("Qual o valor de A: "))
b = float(input("Qual o valor de B: "))
c = float(input("Qual o valor de C: "))

delta = (b*b)-4*a*c
x1 = (-b + math.sqrt(delta)) / 2*a
x2 = (-b - math.sqrt(delta)) / 2*a

print(f"X1 = {x1}")
print(f"X2 = {x2}")

