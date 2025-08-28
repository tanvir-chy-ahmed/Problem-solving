#include <stdio.h>
#include <stdlib.h>
#include <zlib.h> 

// Function to read a file into memory
unsigned char* readFile(const char* path, size_t* size) {
    FILE* file = fopen(path, "rb");
    if (!file) {
        perror("Error opening input file");
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    *size = ftell(file);
    rewind(file);

    unsigned char* buffer = (unsigned char*)malloc(*size);
    if (!buffer) {
        perror("Memory allocation failed");
        fclose(file);
        return NULL;
    }

    fread(buffer, 1, *size, file);
    fclose(file);
    return buffer;
}

// Function to write a buffer to a file
int writeFile(const char* path, const unsigned char* data, size_t size) {
    FILE* file = fopen(path, "wb");
    if (!file) {
        perror("Error opening output file");
        return 0;
    }

    fwrite(data, 1, size, file);
    fclose(file);
    return 1;
}

// Function to compress a file using zlib
int compressFile(const char* inputPath, const char* outputPath) {
    size_t inputSize = 0;
    unsigned char* inputBuffer = readFile(inputPath, &inputSize);
    if (!inputBuffer) {
        return 0;
    }

    uLongf compressedSize = compressBound(inputSize); // Maximum compressed size
    unsigned char* compressedBuffer = (unsigned char*)malloc(compressedSize);
    if (!compressedBuffer) {
        perror("Memory allocation failed for compressed buffer");
        free(inputBuffer);
        return 0;
    }

    int result = compress(compressedBuffer, &compressedSize, inputBuffer, inputSize);
    free(inputBuffer);

    if (result != Z_OK) {
        fprintf(stderr, "Compression failed with error code: %d\n", result);
        free(compressedBuffer);
        return 0;
    }

    int writeResult = writeFile(outputPath, compressedBuffer, compressedSize);
    free(compressedBuffer);

    if (!writeResult) {
        fprintf(stderr, "Failed to write compressed file\n");
        return 0;
    }

    return 1;
}

// Main function
int main() {
    const char* inputPath = "original.exe";
    const char* outputPath = "compressed.exe";

    if (compressFile(inputPath, outputPath)) {
        printf("File compressed successfully: %s -> %s\n", inputPath, outputPath);
    } else {
        printf("File compression failed\n");
    }

    return 0;
}
