class SelectionsortTrace{
	public static void main(String args[]){
		int a[] ={21,32,4,554,656,78,1,98,43,22};
		for(int i=0;i<a.length-1;i++){
			int minIndex = i;
			for(int j=i+1;j<a.length;j++){
				if(a[j] < a[minIndex]){
					minIndex=j;
			}
		}
			int temp = a[minIndex];
			a[minIndex] = a[i];
			a[i] = temp;
			
			System.out.print("Pass"+(i+1)+":");
			for(int num:a){
				System.out.print(num+" ");
			}
			System.out.println();
		}
	}
}