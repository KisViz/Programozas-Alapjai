typedef struct {
    int pixelX;
    int pixelY;
    int kepatlo;
    int ar;
} Monitor;

Monitor monitorVasarlas (Monitor monitorok[], int meret) {
    Monitor legjobb = monitorok[0];

    for (int i = 0; i < meret; ++i) {
        if (monitorok[i].pixelX == 1920 && monitorok[i].pixelY == 1080) {
            if (monitorok[i].kepatlo > legjobb.kepatlo) {
                legjobb = monitorok[i];

            } else if (monitorok[i].kepatlo == legjobb.kepatlo) {

                if (monitorok[i].ar < legjobb.ar){
                    legjobb = monitorok[i];
                }
            }
        }
    }

    if (legjobb.pixelX != 1920 && legjobb.pixelY != 1080) {
        Monitor m = {0, 0, 0, 0};
        return m;
    } else {
        return legjobb;
    }


}