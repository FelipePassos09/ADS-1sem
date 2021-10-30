

list = []
tot = 0

while True:
    list.append(int(input("informe um valor")))
    
    tot += 1
    
    if tot >= 3:
        break
    
print(list)