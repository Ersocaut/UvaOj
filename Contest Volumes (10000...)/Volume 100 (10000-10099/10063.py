from sys import stdin
def main():
    global case
    global sols
    case = str(stdin.readline().strip())
    while case != "":
        sols = []
        Perm("",0)
        print("")
        case = str(stdin.readline().strip())

def Perm(new,i):
    global case
    if len(new) == len(case):
            print(new)
    else:
        for j in case:
            if j not in new:
                S = new[:i] + j + new[i:]
                Perm(S,i+1)
main()
