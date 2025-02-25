#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */
    char* p =str;
    int count =0;
    while(*p != '\0'){
        if(*p == letter){
            count = count +1;
        }
        p++;
    }
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
/*
填充 DNA_SEQ 以记录每个核苷酸出现的次数。
每个序列将以 NULL 终止符结尾，并且最多包含 20 个核苷酸。
所有字母都将是大写。
*/
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
    char * p = dna_seq->sequence;
    dna_seq->A_count = 0;
    dna_seq->G_count = 0;
    dna_seq->C_count = 0;
    dna_seq->T_count = 0;
    while(*p != '\0'){
        if(*p == 'A'){
            dna_seq->A_count++;
        }
        if (*p == 'G')
        {
            dna_seq->G_count++;
        }
        if (*p == 'C')
        {
            dna_seq->C_count++;
        }
        if (*p == 'T')
        {
            dna_seq->T_count++;
        }
        p++;
    }
    return;
}
