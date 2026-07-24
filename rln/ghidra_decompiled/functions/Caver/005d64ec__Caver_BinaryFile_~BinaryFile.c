/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d64ec
 * Function: Caver::BinaryFile::~BinaryFile
 * Signature: undefined __thiscall ~BinaryFile(BinaryFile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BinaryFile::~BinaryFile() */

BinaryFile * __thiscall Caver::BinaryFile::~BinaryFile(BinaryFile *this)

{
  int iVar1;
  uint uVar2;
  BinaryFile *pBVar3;
  
  iVar1 = *(int *)this;
  pBVar3 = this;
  if (iVar1 == 1) {
    if (*(FILE **)(this + 8) == (FILE *)0x0) {
      return (BinaryFile *)0x0;
    }
    uVar2 = fclose(*(FILE **)(this + 8));
    pBVar3 = (BinaryFile *)(ulong)uVar2;
    iVar1 = *(int *)this;
  }
  if ((iVar1 == 2) && (pBVar3 = (BinaryFile *)0x0, *(long *)(this + 8) != 0)) {
    pBVar3 = (BinaryFile *)gzclose();
    return pBVar3;
  }
  return pBVar3;
}


