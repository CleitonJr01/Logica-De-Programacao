M = int(input("Qual a ordem da matriz?: "))

mat:[[int]] =[[0 for x in range(M)]for x in range(M)]

for i in range(0,M):
    for j in range(0,M):
        mat[i][j] = int(input(f"ELEMENTO [{i},{j}]: "))

print("DIAGONAL PRINCIPAL: ")
for i in range(0,M):
    for j in range(0,M):
        if i == j:
            print(f"{mat[i][j]} ", end=" ")

contador = 0
for i in range(0,M):
    for j in range(0,M):
        if mat[i][j] < 0:
            contador = contador + 1
print()
print(f"QUANTIDADE DE NEGATIVOS: {contador}")
