const solvehacky = (str1,str2)=>str1.split('').map((c,i)=>c+(str2[i]||'')).join('')+str2.slice(str1.length);

for (var i=10000000; i--;) {
   let str1 = 'ABCDEFH' + i
   let str2 = '123456789' + i
   let result = solvehacky(str1,str2)
 }
