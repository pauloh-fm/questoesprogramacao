#uri 1071
val = 0
enta = int(input())
entb = int(input())
if enta < entb: # tornando a entrada a sempre maior que b 
    val = entb
    entb = enta + 1 # como se trata de um intervalo aberto
    enta = val
    val = 0
while entb < enta: # como se trata de um intervalo aberto
    if entb % 2:
        val+=entb
        entb+=2
    else:
        entb+=1
print(val)
