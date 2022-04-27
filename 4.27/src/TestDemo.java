import javax.security.sasl.SaslClient;
import java.util.Scanner;
public class TestDemo {
    public static int factorial(int n) {
        int sum=1;
        for(int i=1;i<=n;i++) {
            sum*=i;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        while(scan.hasNext()) {
            int n=scan.nextInt();
            int fac=factorial(n);
            System.out.println(fac);
        }
    }
    public static int findMax(int x,int y) {
        return x>y?x:y;
    }
    public static double findMax(double x,double y) {
        return x>y?x:y;
    }
    public static double findMax(double x,double y,int z) {
        double bigger=findMax(x,y);
        return bigger>z?bigger:z;
    }
    public static void main4(String[] args) {
        int a=9;
        int b=8;
        double c=9.8;
        double d=7.2;
        int m=findMax(a,b);
        System.out.println(m);
        double n=findMax(c,d);
        System.out.println(n);
        double q=findMax(c,d,10);
        System.out.println(q);
    }
    public static int findSingleDog(int[] arr) {
        int ret=0;
        for(int i=0;i<arr.length;i++) {
            ret^=arr[i];
        }
        return ret;
    }
    public static void main3(String[] args) {
        int[] arr=new int[]{1,1,2,2,5,5,7,7,8};
        int diff=findSingleDog(arr);
        System.out.println(diff);
    }
    public static void main2(String[] args) {
        Scanner scan=new Scanner(System.in);
        while(scan.hasNext()) {
            int sum = 0;
            int n=scan.nextInt();
            for (int i = 1; i <= n; i++) {
                sum += factorial(i);
            }
            System.out.println(sum);
        }
    }
    public static int add(int x,int y) {
        return x+y;
    }
    public static double add(double x,double y,double z) {
        return x+y+z;
    }
    public static void main1(String[] args) {
        int a=10;
        int b=30;
        double c=3.4;
        double d=2.3;
        double e=9.8;
        int sum1=add(a,b);
        System.out.println(sum1);
        double sum2=add(c,d,e);
        System.out.println(sum2);
    }
}
