par = 0
impar = 0
positivo = 0
negativo = 0
entrada = []
def verificar(entrada):
    global par 
    global impar 
    global positivo 
    global negativo 
    if entrada < 0:
        negativo+=1
    else :
        positivo+=1
    if entrada % 2:
        impar+=1
    else:
        par+=1

for i in range(0,5):
    entrada.append(int(input()))
    verificar(entrada[i])
print(f'{par} valor(es) par(es)\n{impar} valor(es) impar(es)\n{positivo} valor(es) positivo(s)\n{negativo} valor(es) negativo(s)')
