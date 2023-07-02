 int input;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int x;
        cin >> x;
        que.push(x);
    }

    while (!que.empty())
    {
        cout << que.front() << endl;
        que.pop();
    }