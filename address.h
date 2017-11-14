#ifndef ADDRESS_H
#define ADDRESS_H
#include <qdom.h>
#include <qtextstream.h>
#include <qstring.h>

class Address
{
public:
    QString street,
        city,
        pobox;

        Address( QString iStreet = "", QString iCity = "", QString iPobox = "" );
        Address( const QDomElement &e );

        QDomElement createXMLNode( QDomDocument &d );
};

#endif // ADDRESS_H
