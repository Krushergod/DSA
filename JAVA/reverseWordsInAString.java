class Solution {
    public static String reverseWords(String s) {
    StringBuilder res = new StringBuilder();
    for (int start = s.length() - 1; start >= 0; start--) {
        if (s.charAt(start) == ' ') continue;
        int end = start;
        while (start >= 0 && s.charAt(start) != ' ') start--;
        res.append(s.substring(start + 1, end + 1)).append(" ");
    }
    return res.toString().trim();
}
}
