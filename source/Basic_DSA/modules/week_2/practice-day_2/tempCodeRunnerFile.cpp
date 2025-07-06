
bool check_are_2_linked_list_same(Node *head1, Node *head2)
{

    Node *current1 = head1;
    Node *current2 = head2;
    bool is_same = true;

    for (Node *i = head1; i->next != NULL; i = i->next)
    {
        for (Node *j = head2; j != NULL; j = j->next)
        {
            if (i->val != j->val)
            {
                is_same = false;
            }
        }
    }
    return is_same;
};