class Minimum{
	public static void main(String args[]){
		int array[] ={45,32,43,11,65,43,5};
		int min = array[0];
		for(int i=0;i<array.length;i++){
			if(array[i]<min){
				min = array[i];
			}
		}
		System.out.println("Minimum = "+min);
	}
}