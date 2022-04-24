import java.util.Scanner;
public class TestDemo {
    public static void main(String[] args) {
        int count=0;
        for(int i=1;i<=100;i++) {
            if(i%10==9) {
                count++;
            }
            if(i/10==9) {
                count++;
            }
        }
        System.out.println("1~100有"+count+"个9");
    }
    public static boolean primeNum(int n) {
        for(int i=2;i<Math.sqrt(n);i++) {
            if(n%i==0) {
                return false;
            }
        }
        return true;
    }

    public static void main3(String[] args) {
        Scanner scan=new Scanner(System.in);
        while(scan.hasNext()) {
            int n=scan.nextInt();
            System.out.println(primeNum(n));
            }
        }
    public static void main2(String[] args) {
        for(int i=1;i<=100;i++) {
            if(primeNum(i)) {
                System.out.print(i+" ");
            }
        }
    }
    public static void main1(String[] args) {
        Scanner scan=new Scanner(System.in);
        while(scan.hasNext()) {
            int n=scan.nextInt();
            for(int i=1;i<=n;i++) {
                for(int j=1;j<=n;j++) {
                    if(j==i||j==n-i+1) {
                        System.out.print("*");
                    }else {
                        System.out.print(" ");
                    }
                }
                System.out.println();
            }

        }
    }
}
