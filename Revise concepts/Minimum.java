class Minimum{
	public static void main(String args[]){
		int[] numbers={76,45,12,58};
		int min = numbers[0];
		int max = numbers[0];
		for(int i=0 ;i< numbers.length;i++){
			if(numbers[i]<min)
				min=numbers[i];
			
			if(numbers[i]>max)
				max=numbers[i];
		}
		System.out.println("Minimum : "+min);
		System.out.println("Maximum : "+max);
	}
}