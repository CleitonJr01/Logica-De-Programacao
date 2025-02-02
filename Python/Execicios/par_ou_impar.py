sn : str = "s"
while sn == 's':
    x = int(input("Digite um valor: "))
    if x % 2 == 0:
        print("PAR")
    else:
        print("IMPAR")
    sn = input("Deseja continuar(s/n): ")