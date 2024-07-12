valores_input = input()
valor = valores_input.split()

for i in range(0,3):
    valor[i] = float(valor[i])

print("TRIANGULO: {:.3f}".format((valor[0]*valor[2])/2))
print("CIRCULO: {:.3f}".format(3.14159*valor[2]**2))
print("TRAPEZIO: {:.3f}".format(((valor[0]+valor[1])*valor[2])/2))
print("QUADRADO: {:.3f}".format(valor[1]**2))
print("RETANGULO: {:.3f}".format(valor[0]*valor[1]))
