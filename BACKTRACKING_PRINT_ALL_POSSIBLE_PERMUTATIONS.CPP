//PRINT PERMUTATIONS
#include <iostream>
using namespace std;
void permutations(char *in,int i){
    //base case
    if(in[i] == '\0'){
        cout<<in<<endl;
        return;
        //string ended
    }
    //recursive case
    for(int j=i;in[j] != '\0';j++){
        swap(in[j],in[i]);
        permutations(in,i+1);
        swap(in[j],in[i]);
    }
}
int main()
{
    char in[]="abc";
    permutations(in,0);
    return 0;
}
 
