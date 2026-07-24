/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d676c
 * Function: Caver::BinaryFile::WriteData
 * Signature: undefined __thiscall WriteData(BinaryFile * this, uchar * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BinaryFile::WriteData(unsigned char const*, int) */

void __thiscall Caver::BinaryFile::WriteData(BinaryFile *this,uchar *param_1,int param_2)

{
  FILE *__s;
  
  if (*(int *)this == 2) {
    if (*(long *)(this + 8) != 0) {
      gzwrite(*(long *)(this + 8),param_1);
      return;
    }
    __s = (FILE *)0x0;
  }
  else if (*(int *)this == 1) {
    __s = *(FILE **)(this + 8);
  }
  else {
    __s = (FILE *)0x0;
  }
  fwrite(param_1,1,(long)param_2,__s);
  return;
}


