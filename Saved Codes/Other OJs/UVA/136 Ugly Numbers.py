if __name__ == '__main__':
    num = [1]
    c2 = c3 = c5 = 0
    count = 1
    while count!=1500:
        next = min(2 * num[c2], 3 * num[c3], 5 * num[c5])
        num.append(next)
        count += 1
        if next == 2 * num[c2]: c2 += 1
        if next == 3 * num[c3]: c3 += 1
        if next == 5 * num[c5]: c5 += 1
        if count == 1500 : break
    print(f"The 1500'th ugly number is {num[1499]}.")
