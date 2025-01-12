typedef struct {
    char fajta[128];
    int orokzold;
    int magassag;
}Fa;

int orokzold (Fa fa1, Fa fa2){
    if (fa2.magassag > fa1.magassag) {
        return fa2.orokzold;
    } else {
        return fa1.orokzold;
    }
}