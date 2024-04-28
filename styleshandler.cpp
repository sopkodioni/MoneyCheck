#include "styleshandler.h"
#include <QString>
#include <QApplication>
#include <QFile>
#include <QStyleFactory>
#include <QStyle>
#include <QWidget>

StylesHandler::StylesHandler() {}

QString StylesHandler::getButtonStyles(){
    return "QPushButton {"
               "background-color: qlineargradient(spread:pad, x1:0.0678539, y1:0.67, x2:0.051, y2:0, stop:0 rgba(198, 198, 198, 255), stop:1 rgba(255, 255, 255, 255));"
               "border-radius: 5px;"
               "border: 1px solid rgb(184, 184, 184);"
               "padding: 10px 0px;"
               "color: black;"
           "}"
           "QPushButton:hover {"
               "background-color: qlineargradient(spread:pad, x1:0.0903258, y1:0.505, x2:0.051, y2:0, stop:0 rgba(198, 198, 198, 255), stop:1 rgba(255, 255, 255, 255));"
           "}"
           "QPushButton:pressed {"
               "background-color: none;"
           "}"

           "QPushButton#revenuesButton {"
               "background-color: qlineargradient(spread:pad, x1:0.051, y1:0.720909, x2:0.051, y2:0, stop:0 rgba(193, 219, 196, 255), stop:1 rgba(255, 255, 255, 255));"
           "}"
           "QPushButton#revenuesButton:hover {"
               "background-color: qlineargradient(spread:pad, x1:0.051, y1:0.5, x2:0.051, y2:0, stop:0 rgba(193, 219, 196, 255), stop:1 rgba(255, 255, 255, 255));"
           "}"
           "QPushButton#revenuesButton:pressed {"
               "background-color: qlineargradient(spread:pad, x1:0.051, y1:0.96, x2:0.051, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(193, 219, 196, 255));"
           "}"

           "QPushButton#expenditureButton {"
               "background-color: qlineargradient(spread:pad, x1:0.051, y1:0.720909, x2:0.051, y2:0, stop:0 rgba(219, 193, 193, 255), stop:1 rgba(255, 255, 255, 255));"
           "}"
           "QPushButton#expenditureButton:hover {"
               "background-color: qlineargradient(spread:pad, x1:0.051, y1:0.5, x2:0.051, y2:0, stop:0 rgba(219, 193, 193, 255), stop:1 rgba(255, 255, 255, 255));"
           "}"
           "QPushButton#expenditureButton:pressed {"
               "background-color: qlineargradient(spread:pad, x1:0.051, y1:0.96, x2:0.051, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(219, 193, 193, 255));"
           "}";
}
