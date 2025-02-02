M = int(input("Quantas linhas?: "))
N = int(input("Quantas colunas?: "))

mat: [[int]] = [[0 for x in range(N)]for x in range(M)]

for i in range(0,M):
    for j in range(0,N):
        mat[i][j] = int(input(f"ELEMENTO [{i},{j}]: "))

print()
print("MATRIZ DIGITADA")

for i in range(0,M):
    for j in range(0,N):
        print(f"{mat[i][j]} ", end="")
    print()