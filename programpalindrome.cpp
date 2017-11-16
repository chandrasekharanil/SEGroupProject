import java.util.*;
import java.io.*;
public class palindromeTest {

    public static void main(String[]args)throws IOException {
    Scanner in = new Scanner(new FileReader("words.txt"));
    PrintWriter out = new PrintWriter(new FileWriter("palindromes.txt"));
    String []phrase = new String[100];
    String []palindromes = new String[50];/*initialisation*/
    String p;
    String s="END";
    while (phrase!=s){
    p =isPalindrome(phrase); /*program palindrome*/
    }
    out.printf("\nThe palindromes are :%s\n ",p); /* to print palindrome*/
    in.close();
    out.close();
    }
 public static boolean isPalindrome(String phrase) {    /*palindrome logic*/
    int left  = 0;
    int right = phrase.length() -1;

    while (left < right) {
        if (phrase.charAt(left) != phrase.charAt(right)) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}



}
