N = int(input("QUantos numeros serao digitados: "))

vet: [float] = [0 for x in range(N)]

for i in range(0,N):
    vet[i]= float(input("Digite um valor: "))


menor = vet[0]
for i in range(0,N):
    if vet[i] < menor:
        menor = vet[i]

print(f"MENOR = {menor}")