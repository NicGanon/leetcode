
 // Definition for an interval.
  struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
 };
 

vector<Interval>::iterator Partition(vector<Interval> &intervals,vector<Interval>::iterator start, vector<Interval>::iterator end);
void QuikSort(vector<Interval> &intervals,vector<Interval>::iterator start, vector<Interval>::iterator end);
void Sort(vector<Interval> &intervals);
vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> mergedIntervals;
        vector<Interval>::iterator it = intervals.begin();
        
        Sort(intervals);
        
        while (it != intervals.end()) {
            int start = it->start;
            int end   = it->end;
            
            while (it != intervals.end() && it->start <= end) {
                if (it->end > end)
                    end = it->end;
                ++it;
            }
            mergedIntervals.push_back(Interval(start,end));
        }
        
        return mergedIntervals;
    };
    
    void Sort(vector<Interval> &intervals)
    {
        QuikSort(intervals,intervals.begin(),intervals.end());
    };
    
    void QuikSort(vector<Interval> &intervals,vector<Interval>::iterator start, vector<Interval>::iterator end)
    {
				if (start == end)
						return;
        vector<Interval>::iterator mid = Partition(intervals,start,end);
        QuikSort(intervals,start,mid);
        QuikSort(intervals,mid+1,end);
    };

    vector<Interval>::iterator Partition(vector<Interval> &intervals,vector<Interval>::iterator start, vector<Interval>::iterator end)
    {
        vector<Interval>::iterator pivot = end-1;
        vector<Interval>::iterator i = start, j = start;
        while (j != end) {
            if (j->start < pivot->start) {
                std::swap(*i,*j);
                ++i;
            }
            ++j;
        }
        std::swap(*i,*pivot);
       print(intervals); 
        return i;
    };
    
