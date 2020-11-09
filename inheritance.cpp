//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//class Image {
//public:
//	operator string() {
//		return "사진";
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
//public: //TextMessage생성자를 만났을때 부모클래스의 Message(sendTime, sendName) 생성자를 만나서 호출을 한다 
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
//		this->image = image; //포인터 자체를 받아와서 얕은 복사를 해준다 
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
//	TextMessage *hello = new TextMessage(10, "웅이", "하잇");
//	ImageMessage *body = new ImageMessage(10, "웅녀", p_bodyImage);
//
//	cout << "보낸 사람 : " << hello->GetSendName() << endl;
//	cout << "보낸 시간 : " << hello->GetSendTime() << endl;
//	cout << "보낸 내용 : " << hello->GetText() << endl;
//
//	cout << "==================" << endl;
//	cout << "보낸 사람 : " << body->GetSendName() << endl;
//	cout << "보낸 시간 : " << body->GetSendTime() << endl;
//	cout << "보낸 내용 : " << (string)*body->GetImage() << endl;
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
//형식은 Base이지만 자식객체를 가리키고 있는 포인터b
//여기서 자신이 어느 자식을 가리키고 있는지 애매해 질 수도 있으니깐  자신의 형식은 금방 알 수 있으니깐
//자신의 형식인 Base class의 print를 출력한다
//정적바인딩 !!  b의 화살표가 어느것을 가리킬까가 바인딩
//c++은 아무것도 하지않으면 정적바인딩이 발생한다
//*/