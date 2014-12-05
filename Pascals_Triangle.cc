
class Solution {
	public:
		std::vector<std::vector<int> > generate (int numRows) {
			std::vector<std::vector<int> > triangle;
				if (numRows == 0)
				    return triangle;
				for (int i=0; i< numRows; ++i) {
					  std::vector<int> row;
					  for (int j=0; j<=i; ++j) {
					      if (j==0 || j==i)
									  row.push_back(1);
								else {
								    row.push_back(triangle[i-1][j-1]+triangle[i-1][j]);
								}
					  }
						triangle.push_back(row);
				}

				return triangle;
		}
};

