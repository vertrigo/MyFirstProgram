struct info
{
	//char fam[20],name[20],group[5],phone[12];
	gcroot<System::String^> fam,name,group,phone;
    int year,rating;
};

struct node
{
    info fields;
    node *Next;
};

/*
class manage
{
	int m_count;
public:
	manage():m_count(0){};
	~manage();
	void setCount(int count) { m_count = count; };
	int getCount() const { return m_count; }

};
*/
class list
{
   node *Head, *Tail;
public:
   list::list():Head(NULL),Tail(NULL){};
   list::~list();
   //void sread(info &fields);
   node* getHead() const { return Head; }
   void Add(info *in);
   void Show();
};
list *work = new list;