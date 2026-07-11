class ReverseArray{
	public static void main(String args[]){
		int[] array={20,30,40,50,60,70};
		int right=array.length-1;
		int left=0;
		while(left<right){
			int temp = array[right];
			array[right] = array[left];
			array[left] = temp;
			left++;
			right--;
		}
		for(int i=0;i<array.length;i++){
			System.out.print(" "+array[i]);
		}
	}
}