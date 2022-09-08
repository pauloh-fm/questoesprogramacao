cont = 0
ent = int(input())
while cont < 6:
    if ent % 2:
        print(ent)
        ent+=2
        cont+=1
    else:
        ent+=1