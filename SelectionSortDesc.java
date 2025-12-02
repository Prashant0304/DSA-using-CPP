class SelectionSortDesc{
	public static void main(String args[]){
		int a[] = {1,3,45,654,98,45,32,54,88};
		for(int i=0;i<a.length-1;i++){
			int maxIndex = i;
			for(int j=i+1;j<a.length;j++){
				if(a[j] > a[maxIndex]){
					maxIndex =j;
				}
			}
			int temp = a[maxIndex];
			a[maxIndex] =a[i];
			a[i] = temp;
			System.out.print("Pass "+(i+1)+":");
			for(int num:a){
				System.out.print(num +" ");
			}
			System.out.println();
		}
	}
}