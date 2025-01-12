double integral(double (*fuggveny)(double), int min, int max, int beosztasokSzama) {
    double sum = 0;
    double h = (double) (max-min) / beosztasokSzama;

    for(int i = 0; i < beosztasokSzama; i++) {
        double a = fuggveny(min+h*i);
        double c = fuggveny(min+h*(i+1));
        sum += (a+c)*h/2;
    }

    return sum;}