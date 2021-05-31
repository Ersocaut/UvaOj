from sys import stdin

def BuscaMenor(lista,buscar):
    if buscar in lista:
        new = buscar
        cont = lista.index(buscar)
        while new == buscar and cont != -1:
            if lista[cont] < buscar:
                new = lista[cont]
            cont-=1
    else:
        new = buscar
        cont = -1
        while new == buscar:
            if lista[cont] < buscar:
                new = lista[cont]
            cont -= 1
    return new

def BuscaMayor(lista,buscar):
    if buscar in lista:
        cont = lista.index(buscar)
        new = buscar
        while new == buscar and cont < len(lista):
            if lista[cont] > buscar:
                new = lista[cont]
            cont+=1
    else:
        cont = 0
        new = buscar
        while new == buscar:
            if lista[cont] > buscar:
                new = lista[cont]
            cont+=1
    return new

def compare(lista,buscar):
    if lista[0] >= buscar:
        cont = 0
        new = buscar
        while new == buscar:
            if lista[cont]>buscar:
                new = lista[cont]
            cont += 1
        print("X",new)
    elif lista[-1] <= buscar:
        new = buscar
        cont = -1
        while new == buscar:
            if lista[cont]<buscar:
                new = lista[cont]
            cont -=1
        print(new,"X")
    else:
        mayor = BuscaMayor(lista,buscar)
        menor = BuscaMenor(lista,buscar)
        print(menor,mayor)
        

def fila():
    lista = [int(i)for i in stdin.readline().strip().split()]
    return lista

def main():
    cases = int(stdin.readline().strip())
    lista = fila()
    cases = int(stdin.readline().strip())
    casos = fila()
    for i in casos:
        compare(lista,i)

main()
