class Chaine{
    private:
    char* string;
    int size;

    public:
    Chaine();
    ~Chaine();
    unsigned int getSize();
    char* getString();
    void addString(char* str);
    void replaceString(char* str);
};
