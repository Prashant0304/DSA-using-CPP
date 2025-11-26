class Kthlargest{
	public static void main(String args[]){
			int a[] ={12,43,65,7,8,324};
			for(int i = 0;i<a.length-1;i++){
				for(int j = 0;j<a.length-1-i;j++){
					if(a[j]<a[j+1]){
						int temp = a[j];
						a[j] = a[j+1];
						a[j+1] = temp;
					}
				}
			} 
			for(int num : a){
				System.out.println(num);
			}
			int k = 3;
			System.out.println(k +"th largest number is " +a[k-1]);		
	}
}