hora = float(input("Que horas sao?: "))

if hora > 5 and hora < 12:
    print("Bom dia")
elif hora < 18:
    print("Boa tarde")
else:
    print("Boa noite")