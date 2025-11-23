class Bubblesort{
	public static void main(String argas[]){
		 int a[] ={100,4,6,2,1,76,98};
		 for(int i=0 ;i < a.length-1 ;i++){
			 for(int j=0;j<a.length-1-i;j++){
				 if(a[j] > a[j+1]){
					 int temp = a[j];
					 a[j] = a[j+1];
					 a[j+1] = temp;
				 }
			 }
		 }
		 System.out.println("Ascending order :");
		 for(int number : a){
			 System.out.println(number);
		 }
	}
}