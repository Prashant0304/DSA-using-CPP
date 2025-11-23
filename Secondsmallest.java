class Secondsmallest{
	public static void main(String args[]){
		int numbers[] ={2,4,6,7,1,0,6};
		int min = Integer.MAX_VALUE;
		int secondSmall = Integer.MAX_VALUE;
		for(int value : numbers){
			if(value < min){ 
				secondSmall = min;
				min = value;
			}
			else if(value < secondSmall && value != min ) 
					secondSmall = value;
		}
		System.out.println("Second Smallest :"+secondSmall);
	}
	
}