cc_library(
    name="lib",
    hdrs=glob(["*.h"]),
    srcs=glob(["*.cpp"]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "unit_test",
    srcs = glob(["test/*.cpp"]),
    deps = [
            ":lib",
            "@googletest//:gtest_main",
    ],
)
