void kodol(char str[]) {
    int i = 0;
    int start = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (int j = start; j < start + (i-1-start+1)/2; j++) {
                int hatulrol = (i-1) - j + start;

                char tmp = str[j];
                str[j] = str[hatulrol];
                str[hatulrol] = tmp;
            }

            start = i+1;
        }

        if (str[i] == '\0') {
            break;
        }

        i++;
    }
}

void dekodol(char str[]) {
    kodol(str);
}