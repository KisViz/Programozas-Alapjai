void atallit(int* szam) {
    *szam*=*szam%2?2:1;
}

int oraatallitas  (int a, int b){

    if (a > b) {
        atallit(&a);
        return a;
    } else {
        atallit(&b);
        return b;
    }

}