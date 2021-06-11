from sys import stdin

def main():
    for i in range(int(stdin.readline().strip())):
        n = sum([int(j) for j in stdin.readline().strip().split()])
        if (n%2 == 0):
            print("YES")
        else:
            print("NO")
main()
