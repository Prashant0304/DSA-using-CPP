class Palindrome{
	public static void main(String args[]){
		String str = "abbcccbba";
		int right=str.length()-1;
		int left=0;
		boolean isPalindrome = true;
		while(left<right){
			if(str.charAt(left)!=str.charAt(right)){
				isPalindrome = false;
				break;
			}
			left++;
			right--;
		}
		
		if(isPalindrome){
			System.out.println(str +" is palindrome");
		}
		else{
			System.out.println(str +" is NOT palindrome");
		}
	}
}