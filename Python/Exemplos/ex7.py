i : int
soma : int
N = int(input("Quantos numeros vao ser digitados: "))

soma = 0
for i in range(0,N):
    x = int(input("Digite um numero: "))
    soma = soma + x

print(f"SOMA = {soma}")

