import math

print("Defina os seguintes valores de ax**2+bx+c")
a = int(input("Digite o valor 'A':"))
b = int(input("Digite o valor 'B':"))
c = int(input("Digite o valor 'C':"))
f = math.pow(b,2)-4*a*c

if (f>=0):
  w = math.sqrt(f)
  q =(2*a)
  x=(-b+w)/q
  y=(-b-w)/q
  print("As duas possíveis respostas são:", x, "e",  y)
else:
  print("O delta é:", f)
  print("Como o delta é negativo, não há uma resposta")
