/*-------------------------------------------------------------------------


7.47��Ӧ�ÿ�������Ϊexplicit���������Է�ֹ������������ʽ������ת������һ��string����
ת����sales_data���󣬱�����ɲ���Ҫ��������󡣼���explicit��Ҫ����sales_data����ʱ
�����Ǳ�����ʾ��ȥ��������Ҫ����������ȥ������ʽ��ת����

7.48��
��1��.���ý���һ��C����ַ����βε�string���캯��������һ����ʱ��string����Ȼ�����string
��ĸ��ƹ��캯������null_isbn��ʼ��Ϊ�ø���ʱ����ĸ�����

��2��.ʹ��string�Ķ���null_isbnΪʵ�Σ�����Sales_item��Ĺ��캯������Sales_item����null1.

��3��.ʹ�ý���һ��C����ַ����βε�string��Ĺ��캯��������һ����ʱstring����Ȼ���������ʱ
������Ϊʵ�Σ�����Sales_item��Ĺ��캯��������Sales_item��Ķ���null.
���sales_data�Ĺ��캯��ʱexplicit����ô����������δ�������Ϊ������ͨ������


7.49�𣺣�a�����Խ�����ʽ�����͵�ת����b�����Խ�����ʽ����ת����c������

7.50��
class person
{
public:
person() = default;
person(string pName, string pAddress)
{
name = pName;
address = pAddress;
}
istream &read(istream &is, person &data)
{
is >> data.name >> data.address;
return is;
}

ostream &print(ostream &os, const person &data)
{
cout << data.name << ' ' << data.address;
return os;
}
private:
string name;
string address;
};
û�п�������Ϊexplicit�Ĺ��캯����


7.51�𣺼�����һ����������һ��vector<int>�����ʱ������ֻ����������һ��ʵ��42��ʱ��
��֪�����뷢��������������ʵ�ε��Ǳ���ʽ��ת��һ��vector������һ�����α���42.������
���б����vector����һ�������Ĺ��캯������Ϊexplicit����string��û�б�Ҫ����һ��������
���캯��Ϊexplicit�������Ϳ��԰�c�����ַ���ת����string����


--------------------------------------------------------------------------*/