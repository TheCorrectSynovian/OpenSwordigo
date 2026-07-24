/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d67bc
 * Function: Caver::BinaryFile::SHA1Hash
 * Signature: undefined __thiscall SHA1Hash(BinaryFile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BinaryFile::SHA1Hash() */

void __thiscall Caver::BinaryFile::SHA1Hash(BinaryFile *this)

{
  ulong uVar1;
  int iVar2;
  uchar *__ptr;
  FILE *__stream;
  ulong __n;
  
  iVar2 = *(int *)(this + 0x10);
  __n = (ulong)iVar2;
  uVar1 = __n;
  if ((long)__n < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  __ptr = operator_new__(uVar1);
  if (*(int *)this == 1) {
    __stream = *(FILE **)(this + 8);
  }
  else {
    if ((*(int *)this == 2) && (*(long *)(this + 8) != 0)) {
      gzread(*(long *)(this + 8),__ptr,iVar2);
      goto LAB_005d6830;
    }
    __stream = (FILE *)0x0;
  }
  fread(__ptr,1,__n,__stream);
LAB_005d6830:
  SHA1HashForBytes(__ptr,__n);
  operator_delete__(__ptr);
  return;
}


