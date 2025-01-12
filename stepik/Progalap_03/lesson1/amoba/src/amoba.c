int tictactoe(char str[]) {
    int options[8][3] = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8},
            {0, 3, 6},
            {1, 4, 7},
            {2, 5, 8},
            {0, 4, 8},
            {2, 4, 6}
    };
    int nyerok = 8;

    for (int i = 0; i < nyerok; i++) {
        int o1 = options[i][0];
        int o2 = options[i][1];
        int o3 = options[i][2];

        if (str[o1] == str[o2] && str[o1] == str[o3] && str[o1] != 'B') {
            if (str[o1] == 'X') {
                return 1;
            } else {
                return 2;
            }
        }
    }

    return 0;
}