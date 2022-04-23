import java.util.Scanner;
public class TestDemo {
    public static void main(String[] args) {
        
    }
    public static void main1(String[] args) {
        int i=1;

        for(i=1;i <= 100;i++) {
            if(i%3!=0&&i%5!=0) {
                System.out.println(i);
            }else {
                continue;
            }
        }
    }
}
