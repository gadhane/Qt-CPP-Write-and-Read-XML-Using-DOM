#include <QCoreApplication>
#include <QtXml>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "contact.h"

int readxmldoc(){

    //an empty document is instantiated and file content is assigned
    QDomDocument doc;
    //check if we can open the file for reading
    QFile file("D:/QT_Projects/Writing_and_Reading_Xml_Dom/text.xml");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() <<"Could not read file";
        return -1;
    }
    //check if we can load the xml doc to memory
    else{
        if(!doc.setContent(&file)){
            qDebug()<<"Could not read xml document";
            file.close();
            return -2;
        }
        file.close();
    }
    //find the root element
    QDomElement root = doc.documentElement();
    if(root.tagName() != "adbook"){
        qDebug()<<"Could not find root tag";
        return -3;
    }
    //Each element is checked, if it is a contact,
    // the attributes of it are analysed, otherwise it is ignored

    QDomNode n = root.firstChild();
    while( !n.isNull() )
    {
        QDomElement e = n.toElement();
        if( !e.isNull() )
        {
            if( e.tagName() == "contact" )
            {
                Contact c;

                c.name = e.attribute( "name", "" );
                c.phone = e.attribute( "phone", "" );
                c.eMail = e.attribute( "email", "" );

                qDebug()<<"Contact Information";
                qDebug()<<c.name<<" "<<c.phone<<" "<<c.eMail;
            }
        }

        n = n.nextSibling();
    }
    return 0;
}
