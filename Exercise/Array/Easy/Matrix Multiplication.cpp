vector<vector<int>> multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
{
    int R1, C1, R2, C2;
    R1 = A.size();
    C1 = A[0].size();
    R2 = B.size();
    C2 = B[0].size();
    
    if (C1 != R2)
        return {}; // TODO: Using this, function return -1 why?
        
    // Remember if A is R1 * C1 and B is R2 * C2 then resultant matrix will be R1 * C2
    vector<vector<int>> result(R1, vector<int>(C2, 0));
    for (int i = 0; i < R1; i++) // Loop run from 0 to R1
    {
        for (int j = 0; j < C2; j++) // Loop run from 0 to C2
        {
            result[i][j] = 0;
            for (int k = 0; k < R2; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    return result;
}