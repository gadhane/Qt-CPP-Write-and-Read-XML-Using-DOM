#include <QCoreApplication>
#include <QtXml>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "contact.h"

QDomElement contactToNodes(QDomDocument &, const Contact &);



int xml_write(){
    //Step 1: Create the xml document

    QDomDocument doc;
    //Step2 : Create the root Elemenet = > adbook
    QDomElement root = doc.createElement("adbook");
    doc.appendChild(root);

    Contact c;
    //==========================
    c.name = "Gereziher";
    c.eMail = "gw@gmail.com";
    c.phone = "+25131 123 4567";


    root.appendChild(contactToNodes(doc, c));

    //===============================
    c.name = "Haftom";
    c.eMail = "Haftom@gmail.com";
    c.phone = "251943771651";
    root.appendChild(contactToNodes(doc, c));

    //===============================
    c.name = "Tesfu";
    c.eMail = "tes@gmail.com";
    c.phone = "251943773651";

    root.appendChild(contactToNodes(doc, c));

    QFile file("D:/QT_Projects/Writing_and_Reading_Xml_Dom/text.xml");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug()<<"could not open file for Writing";
        return -1;
    }
    else
    {
        QTextStream ts(&file);
        ts<<doc.toString();
        file.close();
        qDebug()<<"Finished";
    }
    return 0;
}
QDomElement contactToNodes(QDomDocument &d, const Contact &c)
{
    QDomElement cn = d.createElement("contact");

    cn.setAttribute("name", c.name);
    cn.setAttribute("phone", c.phone);
    cn.setAttribute("email",c.eMail);

    return cn;
}
