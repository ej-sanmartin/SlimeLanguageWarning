load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# The current recommended practice to load gtest, which avoids depending on git.
http_archive(
    name = "com_google_googletest",
    sha256 = "199e68f9dff997b30d420bf23cd9a0d3f66bfee4460e2cd95084a2c45ee00f1a",
    strip_prefix = "googletest-5376968f6948923e2411081fd9372e71a59d8e77",
    urls = ["https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip"],
)