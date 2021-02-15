TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CXXFLAGS += -ggdb
SOURCES += \
    main.cpp

HEADERS += \
    http_request.h \
    profile.h \
    stats.h \
    test_runner.h
