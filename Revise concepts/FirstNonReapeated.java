import java.util.LinkedHashMap;
import java.util.Map;
class FirstNonReapeated{
	public static void main(String args[]){
		String str="Prashant";
		LinkedHashMap<Character,Integer> map = new LinkedHashMap<>();
		for(int i=0;i<str.length();i++){
			char c = str.charAt(i);
			map.put(c,map.getOrDefault(c,0)+1);
		}
		
		for(Map.Entry<Character,Integer>entry : map.entrySet()){
			if(entry.getValue()==1)
			{
				System.out.println("First Non-repeated character : "+entry.getKey());
				return;
			}
		}
		System.out.println("No non-repeated character!");
	}
}