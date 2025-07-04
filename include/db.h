#pragma once

int dbInit(const char *db_path);

int tableAdd(const char *short_code, const char *original_url);

int tableResolve(const char *short_code);

int checkDuplicate(const char *short_code);

void dbClose();
