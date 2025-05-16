int rec(int s[], int i)
{

    if (s[i] == "\0")
    {
        return 0;
    }
    int count = rec(s, i + 1);
    return count++;
}