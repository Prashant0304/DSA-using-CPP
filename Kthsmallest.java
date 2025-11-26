class Kthsmallest{
	public static void main(String args[]){
	int a[] ={32,54,6,7,9,8,34,56,6,4,2,31};
	for(int i=0;i<a.length-1;i++){
		for(int j=0;j<a.length-1-i;j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				}
			}
		}
		for(int numbers : a){
		System.out.println(numbers);
		}
		int k = 4;
		System.out.println(k + " th smallest element in an array "+a[k-1]);
	}
}