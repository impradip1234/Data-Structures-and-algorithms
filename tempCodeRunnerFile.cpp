int getlenght(char name[]){
    int length=0;
    for(int i=0;i<100;i++){
        if(name[i]=='\0'){
            return i;
        }
    }
}