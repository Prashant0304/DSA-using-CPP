class WordCount{
	public static void main(String args[]){
		String str = "I love myself";
		int count=1;
		for(int i=0;i<str.length();i++){
			
			if (str == null || str.trim().isEmpty()) {
				count = 0;
				break;
			}
			if(str.charAt(i)==' '){
				count++;
			}
		}
		System.out.println("Word count :"+count);
	}
}