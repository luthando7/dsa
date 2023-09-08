

struct address_s
{
    char *street;
    char *city;
    char *region;
    char *country;
    char *postal_code;
};

static void print_address(struct address_s *adress_info);

static void print_an_address(void)
{
    struct address_s address;

    address.street = "12345 23rd Ave Kg";
    address.city = "Johannesburg";
    address.region = "Mogale City";
    address.postal_code = "1234";

    print_address(&address);
}