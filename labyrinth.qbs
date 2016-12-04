import qbs

CppApplication {
  type: "application" // To suppress bundle generation on Mac
  consoleApplication: true
  cpp.cxxFlags: [
    "-std=c++14",
  ]
  files: [
    "sources/abstractalgorithm.cpp",
    "sources/abstractalgorithm.hpp",
    "sources/abstractbinarytreealgorithm.cpp",
    "sources/abstractbinarytreealgorithm.hpp",
    "sources/cellflags.cpp",
    "sources/cellflags.hpp",
    "sources/kruskalsalgorithm.cpp",
    "sources/kruskalsalgorithm.hpp",
    "sources/labyrinth.cpp",
    "sources/labyrinth.hpp",
    "sources/labyrinthimplementation.cpp",
    "sources/labyrinthimplementation.hpp",
    "sources/main.cpp",
    "sources/northeastbinarytreealgorithm.cpp",
    "sources/northeastbinarytreealgorithm.hpp",
    "sources/northwestbinarytreealgorithm.cpp",
    "sources/northwestbinarytreealgorithm.hpp",
    "sources/southeastbinarytreealgorithm.cpp",
    "sources/southeastbinarytreealgorithm.hpp",
    "sources/southwestbinarytreealgorithm.cpp",
    "sources/southwestbinarytreealgorithm.hpp",
  ]

  Group {     // Properties for the produced executable
    fileTagsFilter: product.type
    qbs.install: true
  }
}

