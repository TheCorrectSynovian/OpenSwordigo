/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d671c
 * Function: Caver::BinaryFile::ReadData
 * Signature: undefined __thiscall ReadData(BinaryFile * this, uchar * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BinaryFile::ReadData(unsigned char*, int) */

void __thiscall Caver::BinaryFile::ReadData(BinaryFile *this,uchar *param_1,int param_2)

{
  FILE *__stream;
  
  if (*(int *)this == 2) {
    if (*(long *)(this + 8) != 0) {
      gzread(*(long *)(this + 8),param_1);
      return;
    }
    __stream = (FILE *)0x0;
  }
  else if (*(int *)this == 1) {
    __stream = *(FILE **)(this + 8);
  }
  else {
    __stream = (FILE *)0x0;
  }
  fread(param_1,1,(long)param_2,__stream);
  return;
}


