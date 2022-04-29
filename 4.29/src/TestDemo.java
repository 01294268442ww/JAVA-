import java.util.Scanner;
public class TestDemo {
    public static int factorial(int n) {
        if(n==1) {
            return 1;
        }else {
            return n*factorial(n-1);
        }
    }
    public static void main(String[] args) {
        int sum=factorial(5);
        System.out.println(sum);
    }
    public static int add(int n) {
        if(n==1) {
            return 1;
        }else {
            return n+add(n-1);
        }
    }
    public static void main6(String[] args) {
        int sum=add(5);
        System.out.println(sum);
    }
    public static void print(int n) {
        if(n>9) {
            print(n/10);
        }
        System.out.println(n%10);
    }
    public static void main4(String[] args) {
        print(987);

    }
    public static int fib2(int n) {
        if(n==1||n==2) {
            return 1;
        }else {
            return fib2(n-1)+fib2(n-2);
        }
    }
    public static void main3(String[] args) {
        int m=fib2(6);
        System.out.println(m);
    }
    public static int fac(int n) {
        if(n<10) {
            return n;
        }else {
            return n%10+fac(n/10);
        }
    }
    public static void main2(String[] args) {
        int m=fac(9);
        System.out.println(m);
    }
    public static int fib(int n) {
        if(n <= 0) {
            return -1;
        }
        if(n == 1 || n == 2) {
            return 1;
        }
        int f1 = 1;
        int f2 = 1;
        int f3 = -1;
        for (int i = 3; i <= n; i++) {
            f3 = f1+f2;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
    public static void main1(String[] args) {
        Scanner scan=new Scanner(System.in);
        while(scan.hasNext()) {
            int n=scan.nextInt();
            int m=fib(n);
            System.out.println(m);
        }
    }
}
