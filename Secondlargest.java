class Secondlargest{
	public static void main(String args[]){
	int numbers[] = {2,4,5,6,7,890};
	int max = Integer.MIN_VALUE;
	int secondLarge = Integer.MIN_VALUE;
	for(int value : numbers){
	if(value > max){
	   secondLarge = max;
	   max = value;
	   }
	   else if(secondLarge > max && value != max)
	   secondLarge = value;
	}
	 System.out.println("Second large "+secondLarge);
	}
}