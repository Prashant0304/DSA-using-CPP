public class Swap {

    public static void swap(int a,int b){
        int temp=a;
        a=b;
        b=temp;
        System.out.println("a= " + a + " b= "+b);
    }
    public static void swapWithoutThird(int a, int b){
        a=a-b;
        b=b+a;
        a=b-a;
        System.out.println("a= " + a + " b= "+b);
    }

    public static void swapWithXor(int a, int b){
        a=a^b;
        b=a^b;
        a=a^b;
        System.out.println("a= " + a + " b= "+b);
    }


    public static void main(String args[]){
        swap(10,20);
        swapWithoutThird(23,56);
        swapWithXor(78,20);
    }
}
