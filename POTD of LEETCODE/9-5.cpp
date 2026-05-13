 vector<vector<int>> nums = {
         {1, 2, 3, 4},
         {16, 1, 2, 5},
         {15, 8, 3, 6},
         {14, 7, 4, 7},
         {13, 6, 5, 8},
         {12, 11, 10, 9}};

     int m = nums.size();
     int n = nums[0].size();

     int layers = min(m / 2, n / 2);
     for(auto x : nums)
     {
          for(auto x2 : x)
          {
               cout << x2 << "  " ; 
          }
          cout << endl ; 
     }
     cout << "\n\nAfther changing  : " << endl ; 

     for (int layer = 0; layer < layers; layer++)
     {
          vector<int> arr;

          int top = layer;
          int bottom = m - layer - 1;
          int left = layer;
          int right = n - layer - 1;

          // first row
          for (int j = left; j <= right; j++)
          {
               arr.push_back(nums[top][j]);
          }

          // last right coloumn
          for (int i = top + 1; i < bottom; i++)
          {
               arr.push_back(nums[i][right]);
          }

          // last row
          for (int j = right ; j >= left; j--)
          {
               arr.push_back(nums[bottom][j]);
          }
          // first coloumn
          for (int i =bottom-1; i > top; i--)
          {
               arr.push_back(nums[i][left]);
          }

          int rotate = 1 % arr.size();
          for (int k = 0; k < rotate; k++)
          {
               int first = arr[0];
               for (int i = 0; i < arr.size() - 1; i++)
               {
                    arr[i] = arr[i + 1];
               }
               arr[arr.size() - 1] = first;
          }

          int idx = 0 ; 
          // insert element
          for (int j = left; j <= right; j++)
          {
               nums[top][j] = arr[idx++] ; 
          }

           for (int i = top + 1; i < bottom; i++)
          {
               nums[i][right] = arr[idx++];
          }

          // last row
          for (int j = right; j >= left; j--)
          {
              nums[bottom][j] = arr[idx++];
          }
          // first coloumn
          for (int i = bottom-1 ; i > top ;  i--)
          {
               nums[i][left] = arr[idx++];
          }
     }

    for(auto x : nums)
     {
          for(auto x2 : x)
          {
               cout << x2 << "  " ; 
          }
          cout << endl ; 
     }