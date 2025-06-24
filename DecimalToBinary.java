public class DecimalToBinary {

    public static void decTobin(int n){
        int[] bin = new int[100];
        int i=0;
        while(n>0){
            bin[i] = n%2;
            n=n/2;
            i++;
        }
        for (int j=i-1;j>=0;j--)
            System.out.print(bin[j]);
    }

    public static void decTobinbit(int n){
        for(int i=31;i>=0;i++){
            int k= n >> 1;
            if( (k&1) >0){
                System.out.print("1");
            }else{
                System.out.print("0");
            }
        }
    }
    public static void main(String args[]){
        int n=32;
        System.out.println("Decimal value = "+n);
        System.out.print("Binary value = ");
        decTobin(n);
        decTobinbit(n);
    }
}
