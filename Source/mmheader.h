////////////////////////////////////////////////////////////////////////////////
#ifndef MMHEADER_h
#define MMHEADER_h

#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
typedef enum { COORDINATE, ARRAY } MMFormat;

////////////////////////////////////////////////////////////////////////////////
typedef enum { REAL, INTEGER, COMPLEX, PATTERN } MMDataType;

////////////////////////////////////////////////////////////////////////////////
typedef enum { GENERAL, SYMMETRIC, SKEWSYMMETRIC, HERMITIAN } MMSymmetry;

////////////////////////////////////////////////////////////////////////////////
typedef struct {
  MMFormat format;
  MMDataType data_type;
  MMSymmetry symmetric;
  size_t header_length;
  int matrix_rows;
  int matrix_columns;
  int total_elements;
} MMHeader;

////////////////////////////////////////////////////////////////////////////////
int BroadcastHeader(MMHeader* header, MPI_Comm comm, int rank);

////////////////////////////////////////////////////////////////////////////////
void PrintHeader(MMHeader header);

#endif
