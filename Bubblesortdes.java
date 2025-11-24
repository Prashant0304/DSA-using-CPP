class Bubblesortdes {
	public static void main(String args[]){
	int a[] ={56,85,65,47,4,26,9,74,2121,824};
	for(int i=0 ;i<a.length-1 ;i++){
	  for(int j=0 ; j<a.length-1-i;j++){
			if(a[j]<a[j+1]){
				int temp =a[j];
				a[j] = a[j+1];
				a[j+1] =temp;
				}
			}
		}
		System.out.println("Decending order :");
		for(int number : a){
		 System.out.println(number);
		}
	
	}
}