

void verifier()
{
    string tmp="",tmp2="";
    int tmp_size;
    bool correct = true;
    g_size=generator_polynomial.size();
    s_m_size=sent_message.size();
    for (int i=0;i<s_m_size;++i)
    {
        tmp_size=tmp.size();
        if (tmp_size < g_size)
            tmp+=sent_message[i];
        tmp_size=tmp.size();
        if (tmp_size==g_size)
            tmp=xor1(tmp,generator_polynomial);
    }
    tmp_size=tmp.size();
    for (int i=0;i<tmp_size;++i)
        if(tmp[i]!='0')
            correct=false;
    if (correct)
        cout<<"correct_message";
    else
        cout<<"wrong_message";

}



