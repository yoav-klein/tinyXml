
struct XmlElement
{
  char *key;
  char *value;
};

struct XmlObject
{
  struct XmlElement[100] elements;  
};