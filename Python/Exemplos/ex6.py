soma : int
x = int(input("Digite um numero: "))
soma = 0

while x != 0:
    soma = soma + x
    x = int(input("Digite outro numer: "))

print(f"SOMA = {soma}")