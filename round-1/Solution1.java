public class Solution1 {
    public static void main(String[] args) {
        for (int i = 0; i < 10000000; i++) {
            final String s1 = "abacate" + i;
            final String s2 = "palmeiras" + i;

            int x = 0;
            StringBuilder result = new StringBuilder(100);

            if (s1.length() < s2.length()) {
                while (x < s1.length()) {
                    result.append(s1.charAt(x));
                    result.append(s2.charAt(x));
                    x++;
                }
                result.append(s2, x, s2.length());
            } else {
                while (x < s2.length()) {
                    result.append(s1.charAt(x));
                    result.append(s2.charAt(x));
                    x++;
                }
                result.append(s1, x, s1.length());
            }
        }
    }
}
