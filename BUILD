# Testing build with bazel.

cc_library(
    name = "lib",
    srcs = ["lib.cc"],
    hdrs = ["lib.h"],
)

cc_test(
    name = "lib_test",
    srcs = ["lib_test.cc"],
    deps = [
        ":lib",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":lib"],
)
