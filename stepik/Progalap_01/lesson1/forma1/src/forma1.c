float futamhossz(float korido, int korokSzama, float boxkiallasHossza, int boxkiallasokSzama) {
    float palyanToltottIdo = korokSzama * korido; // a palyan eltoltott ido
    float boxbanToltottIdo = boxkiallasokSzama * boxkiallasHossza; // az osszes boxkiallassal eltoltott ido
    float osszesIdo = palyanToltottIdo + boxbanToltottIdo; // a palyan es a boxban eltoltott teljes idotartam
    float idoPercben = osszesIdo/60;
    return idoPercben;
}