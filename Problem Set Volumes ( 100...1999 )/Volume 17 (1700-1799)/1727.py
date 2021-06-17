from sys import stdin

def co(mo,da):
    week = ["SUN","MON","TUE","WED","THU","FRI","SAT"]
    month = {"JAN":31,"FEB":28,"MAR":31,"APR":30,"MAY":31,"JUN":30,"JUL":31,"AUG":31,"SEP":30,"OCT":31,"NOV":30,"DEC":31}
    a = week.index(da)
    w = 0
    for i in range(month[mo]):
        if ( (a + i)%7 == 5 or (a + i)%7 == 6 ):
            w += 1
    print(w)
def main():
    for i in range(int(stdin.readline().strip())):
        inp = [str(i) for i in stdin.readline().strip().split()]
        co(inp[0], inp[1])
main()
