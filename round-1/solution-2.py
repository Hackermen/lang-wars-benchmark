for i in range(10000000):
    i_str = str(i)
    s1 = 'abacate' + i_str
    s2 = 'palmeiras' + i_str
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
