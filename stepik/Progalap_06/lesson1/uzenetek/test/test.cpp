#include <gtest/gtest.h>

using namespace std;

#define main main_0
#include "../src/uzenetek.c"
#undef main

#include "../../tools.cpp"

struct fajl {
    string nev;
    string tartalom;
};

void createDir(string mappanev) {
    char command[1000];
    sprintf(command, "mkdir %s", mappanev.c_str());
    system(command);
}

void createFile(fajl& f) {
    FILE* ff = fopen(f.nev.c_str(), "w");
    fprintf(ff, "%s", f.tartalom.c_str());
    fclose(ff);
}

TEST(Teszt, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    createDir("jozska_uzenetei");
    fajl f1 {"jozska_uzenetei/mancika.txt", "hi\nhaho\nittvagy?\nHol vagy mar?\nirjaamaaaa\n"};
    fajl f2 {"jozska_uzenetei/julika.txt", "hi\nitt vagy?\nte sem irsz?\nde nemaaa\nbie\nvvvvvvvvv\n"};
    createFile(f1);
    createFile(f2);

    char str[100];
    IO("", legtobb("jozska_uzenetei"), str);
    ASSERT_STREQ(str, "A legtobb uzenetvaltas vele tortent: julika\n");
}

TEST(Teszt, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    createDir("marika_uzenetei");
    fajl f1 {"marika_uzenetei/gabor_aron", "nem mosogatnal el nekem mikozben ugyis otthon vagy es piros karikakat rajzolsz a plafonra egy zsirkretaval a letren allva?\nde\n"};
    fajl f2 {"marika_uzenetei/lajos_balazs", "ujujujujujuj\njaj ne\nnemar\nnem gondoltam\najajaj\nhoppa\n"};
    fajl f3 {"marika_uzenetei/kovacs_jozsef", "te vagy az?\nja nem.\n"};
    createFile(f1);
    createFile(f2);
    createFile(f3);

    char str[100];
    IO("", legtobb("marika_uzenetei"), str);
    ASSERT_STREQ(str, "A legtobb uzenetvaltas vele tortent: lajos_balazs\n");
}

TEST(Teszt, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    createDir("uzenetek");
    fajl f1 {"uzenetek/joco.hosszukiterjesztes", "vege\n"};
    createFile(f1);

    char str[100];
    IO("", legtobb("uzenetek"), str);
    ASSERT_STREQ(str, "A legtobb uzenetvaltas vele tortent: joco\n");
}

TEST(Teszt, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    createDir("en_uzeneteim");
    fajl f1 {"en_uzeneteim/zoli.uzenet", "haho\na\n"};
    fajl f2 {"en_uzeneteim/marika.uzenet", "vege\nmondom vege\nvege van\n"};
    fajl f3 {"en_uzeneteim/karoly.uzenet", "mi leszel ha nagy leszel?\ngyartulajdonos akarok lenni\nmilyen gyarad lesz?\nazt meg nem tudom, de jo lesz\n"};
    fajl f4 {"en_uzeneteim/tamas.uzenet", "melyik varosba szeretnel eljutni?\njo nekem itt\nakkor mit neznel meg?\negy bizonyos epuletbe, es azon belul is egy terembe szeretnek menni\nok\n"};
    fajl f5 {"en_uzeneteim/lea.uzenet", "locsolhatom en a viragokat?\nigen, de vigyazz, ne adj nekik tul sokat\nugyes vagy\nkertesz leszek\ndehogy leszel\nde\ninkabb legyel kiralyno\nnem\n"};
    fajl f9 {"en_uzeneteim/sajat_magam.uzenet", "akkor beszelek magammal\nhogy vagy?\njol!\nigen?\nigen\noke\nakkor jo\nrendben\nok\n"};
    fajl f7 {"en_uzeneteim/julika.uzenet", "hallod?\n\n\n\n\n\nazta\n\n\nures sorok\n\n\n\n\n\n\njo sok\n\n\njosok\n\n\nok\n\n\n\n"};
    fajl f6 {"en_uzeneteim/petike.uzenet", "elfogyott a penzem mert elkoltottem mindet amikor elkoltottem a penzemet es igy nem maradt mivel nincs tobb mar nekem belole sajnos ez van\n"};
    createFile(f1);
    createFile(f2);
    createFile(f3);
    createFile(f4);
    createFile(f5);
    createFile(f6);
    createFile(f9);
    createFile(f7);

    char str[100];
    IO("", legtobb("en_uzeneteim"), str);
    ASSERT_STREQ(str, "A legtobb uzenetvaltas vele tortent: sajat_magam\n");
}