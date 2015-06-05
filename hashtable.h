#include <stdbool.h>

typedef struct hashtable_s hashtable_t;
typedef unsigned long (*hash_fnc)(const void *) __attribute__((transaction_safe));

hashtable_t *tm_hashtable_alloc(long init_num_bucks, hash_fnc hash);
__attribute__((transaction_safe))
void tm_hashtable_free(hashtable_t *ht_ptr);
__attribute__((transaction_safe))
bool tm_hashtable_insert (hashtable_t *ht_ptr, void *key, void *data);

void tm_hashtable_print(hashtable_t *ht_ptr);
