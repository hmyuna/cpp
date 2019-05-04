
struct Queue
{
	int l, r;
	int q[MAXN];
	queue() : l(1), r(0) {}
	inline void pop()
	{
		l++;
	}
	inline void push(int a)
	{
		q[++r & (MAXN - 1)] = a;
	}
	inline int front()
	{
		return q[l & (MAXN - 1)];
	}
	inline bool empty()
	{
		return l <= r;
	}
} q;