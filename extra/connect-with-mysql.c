// example mysql connection taken from https://textsegment.com/mysql-c-api/

#include <my_global.h>
#include <mysql.h>

int main(int argc, char *argv[]){
    
    MYSQL *con;
    MYSQL_ROW row;
    MYSQL_RES *result;
    int number_of_rows;
    char file_name[200];
    FILE *photo;
    long photo_size;
    con = mysql_init(NULL);

    if( mysql_real_connect(con, "127.0.0.1", "USERS_DB_OWNER", "1234", "USERS_DB", 3306, NULL, 0) == NULL)
    {
        printf("The authentication failed with the following message:\n");
        printf("%s\n", mysql_error(con));
        exit(1);
    }

    if(mysql_query(con, "SELECT ID, LOGIN, PASSWORD, PHOTO FROM USERS_TBL") !=0)
    {
        printf("Query failed  with the following message:\n");
        printf("%s\n", mysql_error(con));
        exit(1);
    }

    result = mysql_store_result(con);

    printf("Number of rows: %ld\n", (long) mysql_num_rows(result));

    while((row = mysql_fetch_row(result)) != NULL)
    {
        printf("ID: %s\n", row[0]);
        printf("LOGIN: %s\n", row[1]);
        printf("PASSWORD: %s\n", row[2]);

    photo_size = mysql_fetch_lengths(result)[3];

    if(photo_size > 0)
    {
        sprintf(file_name, "./%s.jpg", row[1]);
        photo = fopen(file_name, "wb");
        fwrite(row[3], photo_size, 1, photo);
        fclose(photo);
        printf("The user's photo is saved to : %s\n", file_name);
    }
    else
    {
        printf("The user has no photo\n");
    }

    printf("\n");
    }

    mysql_close(con);
}