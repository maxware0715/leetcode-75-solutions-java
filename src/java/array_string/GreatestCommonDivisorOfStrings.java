package array_string;

public class GreatestCommonDivisorOfStrings {

    public int gcd(int x, int y) {
        if (y == 0) {
            return x;
        } else {
            return gcd(y, x % y);
        }    
    }
    
    public String gcdOfStrings(String str1, String str2) {
        // Check if they have non-zero GCD string.
        if (!(str1 + str2).equals(str2 + str1)) {
            return "";
        }
        
        // Get the GCD of the two lengths.
        int gcdLength = gcd(str1.length(), str2.length());
        return str1.substring(0, gcdLength);
    }

    public static void main(String[] args) {
        GreatestCommonDivisorOfStrings solution = new GreatestCommonDivisorOfStrings();

        assert solution.gcdOfStrings("ABCABC", "ABC").equals("ABC") : "Test case 1 failed";
        assert solution.gcdOfStrings("ABABAB", "ABAB").equals("AB") : "Test case 2 failed";
        assert solution.gcdOfStrings("LEET", "CODE").equals("") : "Test case 3 failed";

        System.out.println("All tests passed!");
    }
}
