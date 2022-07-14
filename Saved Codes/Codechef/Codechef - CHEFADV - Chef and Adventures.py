
def main(N, M, X, Y):
    if ((N - 1) % X == 0 and (M - 1) % Y == 0):
        a = 'Chefirnemo'
    elif (N >= 2 and M >= 2 and (N - 2) % X == 0 and (M - 2) % Y == 0):
        a = 'Chefirnemo'
    else:
        a = 'Pofik'
    return a

if __name__ == '__main__':
    TC = int(input())
    for tc in range(0, TC):
        N, M, X, Y = [int(i) for i in input().split()]
        print(main(N, M, X, Y))
