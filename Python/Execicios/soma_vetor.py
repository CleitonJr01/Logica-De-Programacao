N = int(input("Quantos numeros vc vai digitar?: "))
vet:[float]=[0 for i in range(N)]

for i in range(0,N):
    vet[i] = float(input("Digite um valor: "))

print()
print("VALORES = ", end=" ")
for i in range(0,N):
    print(f"{vet[i]} ", end=" ")

soma = 0 
for i in range(0,N):
    soma = soma + vet[i]
print()
print(f"SOMA = {soma}")
media = soma/N
print(f"MEDIA = {media}")