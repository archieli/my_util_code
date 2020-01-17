uint64_t ntohll(const uint64_t &ullIn)
{
    char* pVal = (char*)(&ullIn);
    if (1 != ntohs(1))  {
        uint64_t  ullOut  = (((uint64_t)(ntohl(*(uint32_t*)pVal))) 
                                       << (sizeof(uint32_t) * 8))
                                       + ntohl(*(uint32_t*)(pVal + sizeof(uint32_t)));
        return ullOut;
    }   else    {
        return ullIn;         
    }
}
