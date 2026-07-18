import java.util.ArrayList;

class Arraylist{
	public static void main(String args[]){
		ArrayList<Integer> arraylist = new ArrayList<>();
		arraylist.add(85);
		arraylist.add(75);
		arraylist.add(90);
		
		System.out.println("Size of array : "+arraylist.size());
		
		for(Integer list:arraylist){
			System.out.println("Array : "+list);
		}
		
		System.out.println("Array value at : "+arraylist.get(2));
	}
}
