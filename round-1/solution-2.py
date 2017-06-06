for i in range(10000000):
    s1 = 'abacate' + str(i)
    s2 = 'palmeiras' + str(i)
    result = ''
    x = 0
    if len(s1) < len(s2):
        while x < len(s1):
            result += s1[x]
            result += s2[x]
            x += 1
        result += s2[x:]
    else:
        while x < len(s2):
            result += s1[x]
            result += s2[x]
            x += 1
        result += s1[x:]
