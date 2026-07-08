class MinMax{
	public static void main(String args[]){
		int array[]={78,4,1,5,2,74,98,154};
		int min = array[0];
		int max = array[0];
		
		for(int i=0;i<array.length;i++){
			if(array[i]<min)
			{
				min = array[i];
			}
			if(array[i]>max)
			{
				max = array[i];
			}
		}
		System.out.println("Minimum : "+min);
		System.out.println("Maximum : "+max);
	}
}