TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    common/printarray.c \
    common/randomfill.c \
    sort/bubblesort.c \
    sort/insertsort.c \
    common/copyarray.c \
    sort/testsort.c

HEADERS += \
    sort.h \
    common.h
