#include <gtest/gtest.h>

#include "../src/leghosszabb.c"

#include "../../tools.cpp"

VideoData v1 = {1000, 15.2, 0};
VideoData v2 = {5125, 11.5, 1};
VideoData v3 = {50, 14.2, 1};
VideoData v4 = {0, 15.6, 0};
VideoData v5 = {51, 9, 1};
VideoData v6 = {5125, 4.4, 1};
VideoData v7 = {500, 20.5, 0};
VideoData v8 = {1400, 12.5, 1};
VideoData v9 = {1720, 14.8, 1};
VideoData v10 = {2000, 15.15, 0};
VideoData v11 = {1000000, 25.2, 0};
VideoData v12 = {632, 11, 0};
VideoData v13 = {0, 0.15, 1};
VideoData v14 = {10, 0.66, 0};

TEST(Struktura, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData v = {3, 5, 7};
    int* res = (int*) &v;
    ASSERT_EQ(*res, 3);

    bool ok = false;

    res++;
    res++;
    if (*res == 7) ok = true;
    if (!ok) {
        res++;
        if (*res == 7) ok = true;
    }

    if (!ok) {
        res++;
        if (*res == 7) ok = true;
    }

    ASSERT_EQ(ok, true);
}

TEST(Eredmeny, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v1, &v2, &v3, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, &v3);
}

TEST(Eredmeny, 02) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v4, &v1, &v7, &v5, &v2, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, &v2);
}

TEST(Eredmeny, 03) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v14, &v7, &v4, &v1, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, nullptr);
}

TEST(Eredmeny, 04) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v3, &v4, &v13, &v9, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, &v9);
}

TEST(Eredmeny, 05) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v2, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, &v2);
}

TEST(Eredmeny, 06) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v12, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, nullptr);
}

TEST(Eredmeny, 07) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9, &v10, &v11, &v12, &v13, &v14, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, &v9);
}

TEST(Eredmeny, 08) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v13, &v14, &v12, &v11, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, &v13);
}

TEST(Eredmeny, 09) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {&v14, &v12, &v13, &v11, NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, &v13);
}

TEST(Eredmeny, 10) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    VideoData* VideoDatak[] = {NULL};
    VideoData* res = max(VideoDatak);
    ASSERT_EQ(res, nullptr);
}

TEST(Fajlmeret, 01) { // NOLINT(cert-err58-cpp) suppress for initialization static field in generated class
    checkFileSize("leghosszabb", "leghosszabb.c", 123);
}
