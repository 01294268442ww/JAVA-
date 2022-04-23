import java.util.Scanner;

public class TestDemo {
    public static boolean leapYear(int n) {
        if(n%100==0) {
            if(n%400==0) {
                return true;
            }else {
                return false;
            }
        }else {
            if(n%4==0) {
                return true;
            }else {
                return false;
            }
        }
    }
    public static void main(String[] args) {
        for(int i=1000;i<=2000;i++) {
            if(leapYear(i)) {
                System.out.print(i+" ");
            }
        }
    }

    public static void main4(String[] args) {
        Scanner scan=new Scanner(System.in);
        int m=27;
        int n=36;
        int t=0;
        while(n>0) {
            t=m%n;
            m=n;
            n=t;
        }
        System.out.println(m);
    }

    public static boolean narcissisticNumber(int n) {
        int m=0;
        int ret=n;
        int sum=0;
        while(n!=0) {
            m=n%10;
            sum+=Math.pow(m,3);
            n=n/10;
        }
        if(ret==sum) {
            return true;
        }
        return false;
    }
    public static void main3(String[] args) {
        Scanner scan=new Scanner(System.in);
        while(scan.hasNext()) {
            int n=scan.nextInt();
            boolean judge = narcissisticNumber(n);
            System.out.println(judge);
        }
    }
    public static void main2(String[] args) {
        int count=3;
        Scanner scan=new Scanner(System.in);
        String passWord="123456";
        while(count!=0) {
            System.out.println("请输入密码,你还有"+count+"次机会");
            String enteredPassword=scan.nextLine();
            if(passWord.equals(enteredPassword)) {
                System.out.println("密码正确，登陆成功");
                break;
            }
            System.out.println("密码错误，请重新输入");
            count--;
        }
        if(count==0) {
            System.out.println("您已连续三次输错密码，退出程序");
        }
    }

    public static void main1(String[] args) {
        Scanner scan=new Scanner(System.in);
        while(scan.hasNext()) {
             int n=scan.nextInt();
             for(int i=1;i<=n;i++) {
                 for(int j=1;j<=i;j++) {
                     System.out.print(i+"*"+j+"="+i*j+" ");
                 }
                 System.out.println();
             }
        }
    }
}
