import java.util.LinkedList;

class Linkedlist{
	public static void main(String args[]){
		LinkedList<Integer> linkedlist = new LinkedList<>();
		linkedlist.add(84);
		linkedlist.add(87);
		linkedlist.add(65);
		linkedlist.add(54);
		
	
		for(Integer list:linkedlist){
			System.out.println("LinkedList values : "+list);
		}
		
		linkedlist.addFirst(100);
		
		linkedlist.addLast(500);
		
		for(Integer list:linkedlist){
			System.out.println("updated LinkedList values : "+list);
		}
		System.out.println("LinkedList first value : "+linkedlist.getFirst());
		System.out.println("LinkedList values : "+linkedlist.get(8));//outofcound exception
		
	}
}