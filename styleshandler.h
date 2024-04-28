#ifndef STYLESHANDLER_H
#define STYLESHANDLER_H

#include <QString>
#include <QApplication>
#include <QFile>
#include <QStyleFactory>
#include <QStyle>
#include <QWidget>

class StylesHandler
{
public:
    StylesHandler();

    static QString getButtonStyles();
};

#endif // STYLESHANDLER_H
