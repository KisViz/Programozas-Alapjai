void primszamGenerator (int tomb [], int hany){
    int szaml = 0;
    int i = 1;
    while (1){
        i++;
        int db = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j  == 0) {
                db++;
            }
        }
        if (szaml != hany && db == 2) {
            tomb[szaml] = i;
            szaml++;
        } else if (szaml == hany){
            break;
        }
    }
    /*for (int j = 0; j < 5; ++j) {
        printf("%d ", tomb[j]);
    }*/
}