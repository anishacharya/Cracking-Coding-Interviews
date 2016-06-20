struct Meeting {
	int start;
	int end;
	Meeting(int s, int e) {start=s; end=e;}
};

bool mysortfunc(Meeting a, Meeting b) { return a.end<b.end; }

int compute_min_confrooms(vector<Meeting>& meetings)
{
	// sort meetings w.r.t. their end times
	sort(meetings.begin(),meetings.end(),mysortfunc);

	int peak = 0;
	queue<Meeting> Q;
	Q.push(meetings[0]);
	for(int i=1; i<meetings.size(); i++) {
		while(!Q.empty() && Q.front().end < meetings[i].start) { Q.pop(); }
		Q.push(meetings[i]);
		peak = max(peak, (int)Q.size());
	}

	return peak;
}
