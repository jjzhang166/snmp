#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>

typedef struct ConfigItem {
    char *host;
    char *host_name;
    int port;
    char *oid;
    int frequency;
    int wait;
    
    struct ConfigItem *next;
} ConfigItem;

typedef struct Config
{
    ConfigItem *item_list;
} Config;

Config *load_config(const char *filename);

void print_config(Config *config, FILE *stream);

void destroy_config(Config *config);

#endif
