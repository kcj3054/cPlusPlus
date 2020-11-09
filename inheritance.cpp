//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//class Image {
//public:
//	operator string() {
//		return "����";
//	}
//};
//
//class Message {
//public:
//	Message(int sendTime, string sendName)
//	{
//		this->sendTime = sendTime;
//		this->sendName = sendName;
//	}
//	int GetSendTime() const { return sendTime; }
//	string GetSendName() const { return sendName; }
//private:
//	int sendTime;
//	string sendName;
//};
//class TextMessage : public Message
//{
//public: //TextMessage�����ڸ� �������� �θ�Ŭ������ Message(sendTime, sendName) �����ڸ� ������ ȣ���� �Ѵ� 
//	TextMessage(int sendTime, string sendName, string text) : Message(sendTime, sendName)
//	{
//		this->text = text;
//	}
//	string GetText() const { return text; }
//
//private:
//	string text;
//};
//
//class ImageMessage : public Message
//{
//public:
//	ImageMessage(int sendTime, string sendName, Image *image) : Message(sendTime, sendName)
//	{
//		this->image = image; //������ ��ü�� �޾ƿͼ� ���� ���縦 ���ش� 
//	}
//
//	Image *GetImage() const { return image; }
//private:
//	Image *image;
//};
//
//int main()
//{
//
//
//	Image *p_bodyImage = new Image();
//	TextMessage *hello = new TextMessage(10, "����", "����");
//	ImageMessage *body = new ImageMessage(10, "����", p_bodyImage);
//
//	cout << "���� ��� : " << hello->GetSendName() << endl;
//	cout << "���� �ð� : " << hello->GetSendTime() << endl;
//	cout << "���� ���� : " << hello->GetText() << endl;
//
//	cout << "==================" << endl;
//	cout << "���� ��� : " << body->GetSendName() << endl;
//	cout << "���� �ð� : " << body->GetSendTime() << endl;
//	cout << "���� ���� : " << (string)*body->GetImage() << endl;
//	delete hello;
//	delete body;
//	delete p_bodyImage;
//
//}
//
///*
//
//ex :
//Base *b = new Derived();
//b->print();
//������ Base������ �ڽİ�ü�� ����Ű�� �ִ� ������b
//���⼭ �ڽ��� ��� �ڽ��� ����Ű�� �ִ��� �ָ��� �� ���� �����ϱ�  �ڽ��� ������ �ݹ� �� �� �����ϱ�
//�ڽ��� ������ Base class�� print�� ����Ѵ�
//�������ε� !!  b�� ȭ��ǥ�� ������� ����ų� ���ε�
//c++�� �ƹ��͵� ���������� �������ε��� �߻��Ѵ�
//*/