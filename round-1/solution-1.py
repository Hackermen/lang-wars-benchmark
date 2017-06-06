from itertools import chain, zip_longest

for i in range(10000000):
    s1 = 'abacate' + str(i)
    s2 = 'palmeiras' + str(i)
    result = ''.join(chain(*zip_longest(s1, s2, fillvalue='')))  # the one-liner
