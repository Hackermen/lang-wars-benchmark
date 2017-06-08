for i in range(10000000):
    str_i = str(i)
    s1 = 'ABCDEFH' + str_i
    s2 = '123456789' + str_i
    result = ''
    x = 0
    if len(s1) < len(s2):
        while x < len(s1):
            result += s1[x] + s2[x]
            x += 1
        result += s2[x:]
    else:
        while x < len(s2):
            result += s1[x] + s2[x]
            x += 1
        result += s1[x:]

    if i == 0: print(result)
