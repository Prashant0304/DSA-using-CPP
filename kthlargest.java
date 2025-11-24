class Kthlargest{
	public static void main(String args[]){
		int a[] ={678,34,6,2342,6788,89,20};
		for(int i=0;i<a.length-1;i++){
			for(int j=0;j<a.length-1-i;j++){
			if(a[j]<a[j+1]){
			  int temp =a[j];
			  a[j] = a[j+1];
			  a[j+1] = temp;
			 }	
			}
		}
		for(int number : a){
			System.out.println(number);
		}
		int k =2;
		System.out.println(k +" Largest number is : "+a[k-1]);
	}
}