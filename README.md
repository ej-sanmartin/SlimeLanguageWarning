# Slime Language Warning

# Background

Primary motivation was just setting up a familiar environment on my personal devices, which includes using Bazel, Googletest, and the absl library to make making in C++ easier for me.

Tacked on translating names to a Slime language, which comes from the [Sloomoo Institute](https://sloomooinstitute.com) which asks guests to replace all vowels of their name to "oo" on their name tags.

Was entertaining. Learned a lot. Will probs use this as my point of reference when setting up other C++ projects on my personal devices.

# Setup and Usage

## Clone & `cd` to project

```
git clone https://github.com/ej-sanmartin/SlimeLanguageWarning
cd SlimeLanguageWarning
```

## Run tests

```
bazel test --cxxopt=-std=c++14 --test_output=all //:lib_test
```

## Build

```
bazel build //:main
```

## Run

```
bazel-bin/main
```

## Tech

* C++
* [Bazel](https://bazel.build/)
* [Googletest](https://github.com/google/googletest)
* [Absl library](https://abseil.io/) (usage removed towards end, but keeping setup)