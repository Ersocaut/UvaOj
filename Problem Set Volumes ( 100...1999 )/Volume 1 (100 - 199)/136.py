def ugly(n):
    if (n == 2 or n == 3 or n == 5):
        return True
    elif (n%2 == 0):
        return ugly(n/2)
    elif (n%3 == 0):
        return ugly(n/3)
    elif (n%5 == 0):
        return ugly(n/5)
    else:
        return False

def main():
    li = [0 for i in range(1500)]
    n = 1
    c = 0
    while (li[1499] == 0):
        if (ugly(n)):
            li[c] = n
            c += 1
        n += 1
    print(li[1499])
main()
