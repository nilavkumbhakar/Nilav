#include <stdio.h>
#include <stdlib.h>

// Structure to store a number and its index
typedef struct {
    int value;
    int index;
} HashEntry;

// Hash function
int hash(int key, int size) {
    return abs(key) % size;
}

// Function to find two sum
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int hashSize = numsSize * 2;
    HashEntry* hashTable = (HashEntry*)calloc(hashSize, sizeof(HashEntry));
    int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int hashIndex = hash(complement, hashSize);

        // Check if complement is already in hash table
        if (hashTable[hashIndex].value == complement) {
            result[0] = hashTable[hashIndex].index;
            result[1] = i;
            *returnSize = 2;
            free(hashTable);
            return result;
        }

        // Insert current number into hash table
        hashIndex = hash(nums[i], hashSize);
        hashTable[hashIndex].value = nums[i];
        hashTable[hashIndex].index = i;
    }

    // No solution found
    *returnSize = 0;
    free(hashTable);
    free(result);
    return NULL;
}

// Test the function
int main() {
    int nums[] = {2, 7, 11, 15};
    int target;
    printf("enter a number between 1 to 9 :");
    scanf("%d",&target);
    
    int returnSize;
    int* indices = twoSum(nums, 4, target, &returnSize);

    if (indices != NULL) {
        printf("Indices: [%d, %d]\n", indices[0], indices[1]);
        free(indices);
    } else {
        printf("No two sum solution found.\n");
    }

    return 0;
}
