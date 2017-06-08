for (let i = 10000000; i--;) {
    let s1 = 'abacate' + i;
    let s2 = 'palmeiras' + i;
    let result = '';
    let x = 0;
    if (s1.length < s2.length) {
        while (x < s1.length) {
            result += s1[x];
            result += s2[x];
            x += 1;
        }
        result += s2.substr(x);
    } else {
        while (x < s2.length) {
            result += s1[x];
            result += s2[x];
            x += 1;
        }
        result += s1.substr(x);
    }
}
