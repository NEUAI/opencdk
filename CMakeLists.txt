cmake_minimum_required(VERSION 3.20)
project(opencdk)

set(CMAKE_CXX_STANDARD 20)

set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 8)
set(PROJECT_VERSION_PATCH 0)
set(PROJECT_VERSION_TWEAK 301)

include_directories(.)

add_executable(opencdk main.cpp java/lang/Object.cpp java/lang/Object.h opencdk.h opencdk.cpp java/lang/Boolean.cpp java/lang/Boolean.h java/io/Serializable.h java/lang/Comparable.h java/lang/Void.cpp java/lang/Void.h java/lang/Number.cpp java/lang/Number.h java/lang/Throwable.cpp java/lang/Throwable.h java/lang/Appendable.h java/lang/CharSequence.cpp java/lang/CharSequence.h java/lang/Byte.cpp java/lang/Byte.h java/lang/Short.cpp java/lang/Short.h java/lang/Integer.cpp java/lang/Integer.h java/lang/Long.cpp java/lang/Long.h java/lang/Math.cpp java/lang/Math.h java/lang/StrictMath.cpp java/lang/StrictMath.h java/lang/Float.cpp java/lang/Float.h java/lang/Double.cpp java/lang/Double.h java/lang/String.cpp java/lang/String.h java/lang/Exception.cpp java/lang/Exception.h java/lang/RuntimeException.cpp java/lang/RuntimeException.h java/lang/IndexOutOfBoundsException.cpp java/lang/IndexOutOfBoundsException.h java/lang/StringIndexOutOfBoundsException.cpp java/lang/StringIndexOutOfBoundsException.h)
