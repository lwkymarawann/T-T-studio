QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../../CS112-Winter2023-2024-Assignemnt3-LibraryAndExample (1)/CS112-Winter2023-2024-Assignemnt3-LibraryAndExample/Image_Class.h \
    ../../CS112-Winter2023-2024-Assignemnt3-LibraryAndExample (1)/CS112-Winter2023-2024-Assignemnt3-LibraryAndExample/stb_image.h \
    ../../CS112-Winter2023-2024-Assignemnt3-LibraryAndExample (1)/CS112-Winter2023-2024-Assignemnt3-LibraryAndExample/stb_image_write.h \
    Imagecropwidget.h \
    mainwindow.h \
    stripedframewidget.h

FORMS += \
    mainwindow.ui \
    mainwindowFixBackground.ui \
    mainwindow_copy.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pics.qrc

DISTFILES += \
    Photoshop icon.jpeg \
    Photoshop icon.jpeg \
    background 4k.jpeg \
    background 4k.jpeg \
    cairo uni logo.jpeg \
    cairo uni logo.jpeg



