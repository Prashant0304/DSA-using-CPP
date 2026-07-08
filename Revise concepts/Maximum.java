class Maximum{
	public static void main(String args[]){
	int array[]={78,25,10,11,5,95};
	int max = array[0];
	for(int i=0;i<array.length;i++){
		if(array[i]>max){
		  max = array[i];
		}
	}
	System.out.println("Maximum : "+max);
	} 
}