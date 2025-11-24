class Bubblesort{
	public static void main(String args[]){
		int a[] ={23,6,7,8443,3,56,78,99};
		for(int i=0;i<a.length-1;i++){
			for(int j=0;j<a.length-1-i;j++){
				if(a[j]> a[j+1]){
					int temp = a[j];
					a[j]= a[j+1];
					a[j+1] =temp;
				}
			}
		}
		System.out.println("Ascending Order : ");
		for(int numbers : a){
			System.out.println(numbers);
		}
	}
}
