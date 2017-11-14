# Qt-C-Write-and-Read-XML-Using-DOM
The Target of this simple program is to  take a Contact record and write it as XML file and also to read the xml file.

DOM documents are normally created by parsers to represent XML from an input stream,
but DOM can also generate XML structures as output. It is preferable to generate XML through an 
API rather than by printing formatted strings because DOM generation guarantees that the resulting
document will be parsable again. 

This program has two header files.
<ul>
<li>writexml.h</li>
<dl>This is used to generate xml document to file. It will get contact details from contact.h file and put it in xml file format </dl>
<li>readxml.h</li>
<dl>Used to read the xml document we generated so far.</dl>
</ul>

<h3>Note</h3>
<p>This program is written to beginners to show how to write and read xml using DOM in Qt C++. it doesn't consider 
memory management,and other programming issues. If you want detailed knowledge about DOM xml parser 
I suggest you to read the Qt Dom documentaiotn.
</p>
<h3>how to execute</h3>
<p>
<ul>
<li>Open the project in Qt environement.</li>
<li>Compile the program. If you don't modify it, it is error free.</li>
<li>First Uncomment //int i = xml_write(); and run the main part. it will generate <b>text.xml</b>file.</li>
<li>then after generating the xml file, comment the xml_write and uncomment the readxmldoc to read the xml file.</li>
<li>run the program to see the contents of the xml file again</li>
</ul>

<b>if this program helps you glad to see your comments.</b>
<b>if you have any question or need help in C++ with Qt contact me. I am glad to help</b>

