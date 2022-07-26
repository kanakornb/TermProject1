
void bubbleSort1(char *a[100][100],int n){
int i,j,sorted,move;
// how may pair to compare?
  move = 0;
  for(j=1;j<=n-6;j+=3){
    sorted = 0;
    for(i=1;i<=n-6;i+=3){
      if(a[i][j]>a[i+1][j]){
          swap(a[i][j],a[i+1][j]);
          swap(a[i][j+1],a[i+1][j+1]);
          swap(a[i][j+2],a[i+1][j+2]);
          move++;
          sorted = 1;
      }
    }
    if(sorted == 0) break;
    }
  }
void bubbleSort2(char a[],int n){
int i,j,sorted,move;
// how may pair to compare?
  move = 0;
  for(j=2;j<=n;j+=3){
    sorted = 0;
    for(i=2;i<=n;i+=3){
      if(a[i]>a[i+3]){
          swap(a[i],a[i+3]);
          swap(a[i-1],a[i+2]);
          swap(a[i+1],a[i+4]);
          move++;
          sorted = 1;
      }
    }
    if(sorted == 0) break;
    }
  }
void bubbleSort3(char a[],int n){
int i,j,sorted,move;
// how may pair to compare?
  move = 0;
  for(j=3;j<=n;j+=3){
    sorted = 0;
    for(i=3;i<=n;i+=3){
      if(a[i]>a[i+3]){
          swap(a[i],a[i+3]);
          swap(a[i-1],a[i+2]);
          swap(a[i-2],a[i+1]);
          move++;
          sorted = 1;
      }
    }
    if(sorted == 0) break;
    }
  }
inline void swap(char &a,char &b){
    char keep;
    keep = a;
    a = b;
    b = keep;
}