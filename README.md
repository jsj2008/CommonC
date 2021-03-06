CommonC
=======

The CommonC framework contains a collection of utilities for C programs. This is a separation from the [Common](https://github.com/ScrimpyCat/Common) project.


The feature set so far includes:

* Platform and hardware feature detection.
* Common compiler extensions.
* Memory allocator - To conveniently select allocators, reference counted memory, a stack based allocator, and exposes them for use in CoreFoundation (CFAllocatorRef). _Note: this is in need to a rewrite as it's just a very simply interface._
* Logging - a simple logging interface that supports different system logging mechanisms (such as ASL), and ability to add custom format specifiers or other filtering behaviours.
* Assertions - convenient assert and log on failure.
* System information - query some basic system/process information.
* File system - a portable file system interface with convenient path manipulation.
* Vector and matrix maths - SIMD optimized when supported.
* Random distributions - convenient distribution choices.
* Bit manipulation
* Data - a generic data container.
* Maps - different map implementations such as generic hashmap and dictionary interfaces.
* Collections - different collection implementations such as arrays, linked lists, or generic collection and ordered collection interfaces.
* Strings - optimized immutable strings for UTF-8 and ASCII encodings. Avoids allocations where possible with tagged variants or temporary strings.
* Enumerators - simple enumerating interfaces for maps, collections, and strings.
* Queues - single threaded and lock-free (many producer-consumer) concurrent FIFO queues.
* Garbage Collectors - for safe memory reclamation in lock-free algorithms.
* Unique IDs - for obtaining and managing IDs.


## Build

This project is intended to be compiled with clang using C11 with extensions.

### Mac/iOS

Use the xcode project.

### Linux

Use meson to generate the build:
```bash
mkdir build && CC=clang meson build
```

## Configuration

A list of globally defineable options to change the behaviour of the library (requires recompilation). For more details of each see their file reference.

* `CC_CONSECUTIVE_ID_GENERATOR_STRICT_COMPLIANCE` - ConsecutiveIDGenerator.c (disable some optimisation)
* `CC_CONCURRENT_INDEX_MAP_STRICT_COMPLIANCE` - ConcurrentIndexMap.c (disable some optimisation)
* `CC_STRING_TAGGED_NUL_CHAR_ALWAYS_0` - CCString.c (disable some optimisation)
* `CC_STRING_TAGGED_HASH_CACHE` - CCString.c (disable some optimisation)
* `CC_NO_ASSERT` - Assertion.c (remove all assertions)
* `CC_EXCLUDE_ASL_LOGGER` - Logging.c (exclude system logger)
* `CC_EXCLUDE_OSL_LOGGER` - Logging.c (exclude system logger)
* `CC_EXCLUDE_SYSLOG_LOGGER` - Logging.c (exclude system logger)
* `CC_ALLOCATORS_MAX` - Allocator.c (increase max allocator list size)
