# Basics

    Sqlite is at least something easy to use, and for its simple nature it will sufice to what we need

    SIMPLE BANKING! Just harnessing the power of SQL to do some simple calculations regarding my own money!

    V1 Is simple CLI, perhaps get some easy GUI later with raygui?


## Cheatsheet:

    sqlite3 *db; //GET BASIC CONNECTION OBJECTION!
    
    sqlite3_open(std::string db_file_name, &db);
    sqlite3_close(db); //REALLY IMPORTANT!

    sqlite3_exec(std::string sql, sqlite3 *db, int callback, 0, 0); // To be honest I am really limiting myself, I dont know exactly what the other 2 values "0" mean, but it works!
    //returns SQLITE_OK if ok 
    FOR CALLBACK:
    callback(void* data, int n_colunas, char **valores_celulas, char **nome_colunas)//

    for simple sql_query: sqlite3_exec(std::string sql, sqlite3 *db, 0, 0, 0);
