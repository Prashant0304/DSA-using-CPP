class Pattern{
	
	public static void main(String args[]){
		int n=5;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n-1;j++){
			System.out.print(n);
			}
			System.out.println();
		}
		System.out.println("Pattern 1 Completes");
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n-1;j++){
			System.out.print(i);
			}
			System.out.println();
		}
		System.out.println("Pattern 2 Completes");
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n-1;j++){
				System.out.print(j);
			}
			System.out.println();
		}
		System.out.println("Pattern 3 Completes");
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				System.out.print(n-(i+1-1));
			}
			System.out.println();
		}
		System.out.println("Pattern 4 Completes");
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n-1;j++){
				System.out.print(i+(j-1+1));
			}
			System.out.println();
		}
		
	}
}