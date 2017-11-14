#ifndef CONTACT_H
#define CONTACT_H

#include <qdom.h>
#include <qtextstream.h>
#include <qstring.h>

class Contact
{
public:
    QString name, eMail, phone;

        Contact( QString iName = "", QString iPhone = "", QString iEMail = "" );
        Contact( const QDomElement &e );

        QDomElement createXMLNode( QDomDocument &d );
};

#endif
