#include "contact.h"
Contact::Contact( QString iName, QString iPhone, QString iEMail )
{
    name = iName;
    phone = iPhone;
    eMail = iEMail;
}

Contact::Contact( const QDomElement &e )
{
    name = e.attribute( "name", "" );
    phone = e.attribute( "phone", "" );
    eMail = e.attribute( "email", "" );
}

QDomElement Contact::createXMLNode( QDomDocument &d )
{
    QDomElement cn = d.createElement( "contact" );

    cn.setAttribute( "name", name );
    cn.setAttribute( "phone", phone );
    cn.setAttribute( "email", eMail );

  return cn;
}
