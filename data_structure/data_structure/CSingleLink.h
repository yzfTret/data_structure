template<class T>
struct Node
{
	Node();
	Node(T e,Node*next)
	{
		element = e;
		link = next;
	}

	T element;
	Node* link;
};


template <class T>
Class CSingleLink
{
public: 
	CSingleLink();
	virtual ~CSingleLink();

public:
	void addNode(const T &t);
	void addHead(const T &t);
public:
	int  m_listSize;
	Node<T>* m_pHead;
	Node<T>* m_pTail;
}

//������  ֻ��һ�� ���ݽṹ  ������ ���Ϲ��ܵ���