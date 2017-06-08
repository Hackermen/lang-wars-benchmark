for (let i = 0; i < 10000000; i++) {
    let s1 = 'ABCDEFH' + i;
    let s2 = '123456789' + i;
    let result = '';
    let x = 0;
    let s1_len = s1.length;
    if (s1_len < s2.length) {
        while (x < s1_len) {
            result += s1[x] + s2[x];
            x += 1;
        }
        result += s2.substr(x);
    } else {
        while (x < s2.length) {
            result += s1[x] + s2[x];
            x += 1;
        }
        result += s1.substr(x);
    }

    if (i == 0) console.log(result);
}
