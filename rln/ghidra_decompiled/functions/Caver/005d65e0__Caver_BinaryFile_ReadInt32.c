/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d65e0
 * Function: Caver::BinaryFile::ReadInt32
 * Signature: undefined __thiscall ReadInt32(BinaryFile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BinaryFile::ReadInt32() */

void __thiscall Caver::BinaryFile::ReadInt32(BinaryFile *this)

{
  long lVar1;
  FILE *__stream;
  undefined4 local_30;
  uchar auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)this == 1) {
    __stream = *(FILE **)(this + 8);
  }
  else {
    if ((*(int *)this == 2) && (*(long *)(this + 8) != 0)) {
      gzread(*(long *)(this + 8),auStack_2c,4);
      goto LAB_005d6644;
    }
    __stream = (FILE *)0x0;
  }
  fread(auStack_2c,1,4,__stream);
LAB_005d6644:
  CopyFromFileBuffer32((uchar *)&local_30,auStack_2c,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


