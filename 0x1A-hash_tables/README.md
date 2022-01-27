# 0x1A. C - Hash tables
***
## This is a README.md for the repository - 0x1A. C - Hash tables
```
For Holberton School
Cohort 16.
```
### General
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called hash_tables.h
* Don’t forget to push your header file
* All your header files should be include guarded

### More Info


```/**
 * struct hash_node_s - Node of a hash table
  *
   * @key: The key, string
    * The key is unique in the HashTable
     * @value: The value corresponding to a key
      * @next: A pointer to the next node of the List
       */
       typedef struct hash_node_s
       {
            char *key;
	         char *value;
		      struct hash_node_s *next;
		      } hash_node_t;

/**
 * struct hash_table_s - Hash t	able data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
 typedef struct hash_table_s
 {
 unsigned long int size;
 hash_node_t **array;
 } hash_table_t;```

## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [](./a) |	       |
| [](./b) |	       |
| [](./c) |	       |
| [](./)  |	       |
| [](./)  |	       |

### Author
***
*Holberton School Student*

Juan Sebastian Posada  - [Github](https://github.com/Juansepo13) - [Twiter](https://twitter.com/@JuanSeb35904130)#
***
## This is a README.md for the repository
```
For Holberton School
Cohort 16.
```
### General
*
*

### More Info


```
/**
 *
  *
     *
        *
	   *
	      *
	         */

```

## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [](./a) |	       |
| [](./b) |	       |
| [](./c) |	       |
| [](./)  |	       |
| [](./)  |	       |

### Author
***
*Holberton School Student*

Juan Sebastian Posada  - [Github](https://github.com/Juansepo13) - [Twiter](https://twitter.com/@JuanSeb35904130)