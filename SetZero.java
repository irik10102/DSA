import java.util.*;

class SetZero{

  int[][] matrix;
  int m,n;
  
  SetZero(int mi, int ni){
    this.m=mi;
    this.n=ni;
    
    matrix = new int[m][n];
    Scanner sc = new Scanner(System.in);
    
    for(int i=0; i<m; i++)
      for(int j=0; j<n; j++)
      {
        System.out.print("Enter integer for "+i+" row & "+j+" column :");
        matrix[i][j]=sc.nextInt();
       }
  }
    
  void operation(){
    boolean[][] prevZero = new boolean[m][n];
    
      
    for(int i=0; i<m; i++)
      for(int j=0; j<n; j++)
      {
        prevZero[i][j] = false;
        if(matrix[i][j] == 0)
          prevZero[i][j] = true;
      }
        
    for(int i=0; i<m; i++)
      for(int j=0; j<n;j++)
        if(matrix[i][j] == 0 && prevZero[i][j] == true)
        {
          int k=0;
            
          /*rows*/
          while(k<n)
            matrix[i][k++]=0;
              
          k=0;
              
          /*column*/
          while(k<m)
            matrix[k++][j]=0;
              
        }
          
  }
    
  void display(){
    for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
        System.out.print(matrix[i][j]+"  ");
      System.out.println("\n");
    }
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    System.out.print("Enter the number of rows: ");
    int m = sc.nextInt();
    
    System.out.print("\nEnter the number of columns: ");
    int n = sc.nextInt();
    
    SetZero obj = new SetZero(m,n);
    
    System.out.println("\nMatrix before Operation:-");
    obj.display();
    
    obj.operation();
    
    System.out.println("\nMatrix after Operation:-");
    obj.display();
  }
}
           
            
        
