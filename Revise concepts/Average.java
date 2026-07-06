class Average{
	public static void main(String args[]){
	int[] numbers ={10, 20, 30, 40, 50};
	float sum = 0;
	
	for(int i=0;i<numbers.length;i++){
		 sum =numbers[i]+sum;		
	}
	float avg = sum/numbers.length; 
	System.out.println("Average : "+avg);
	}
}