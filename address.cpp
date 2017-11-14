#include "address.h"

Address::Address(QString iStreet, QString iCity, QString iPobox)
{
    street = iStreet;
    city = iCity;
    pobox = iPobox;

}

Address::Address(const QDomElement &e)
{
   street =  e.attribute("street","");
   city = e.attribute("city","");
   pobox = e.attribute("pobox","");
}

QDomElement Address::createXMLNode(QDomDocument &d)
{
    QDomElement ad = d.createElement("address");

    ad.setAttribute("street",street);
    ad.setAttribute("city",city);
    ad.setAttribute("pobox",pobox);

    return ad;

}
