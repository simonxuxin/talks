struct object {
    char* name;
    int size;
};

int main()
{
    struct object *o = (struct object *)malloc(sizeof(struct object));
}
