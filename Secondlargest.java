class Secondlargest{
	public static void main(String args[]){
		int numbers[] ={12,43,55,123,434,56};
		int max = Integer.MIN_VALUE;
		int secondLargest = Integer.MIN_VALUE;
		for(int value:numbers){
			if(value > max){
				secondLargest = max;
				max = value;
			}
			else if(secondLargest > max && value != max){
				secondLargest = max;
			}
		}
		System.out.println("Second Largest : "+secondLargest);
	}
}