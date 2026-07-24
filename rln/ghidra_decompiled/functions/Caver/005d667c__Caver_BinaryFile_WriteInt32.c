/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d667c
 * Function: Caver::BinaryFile::WriteInt32
 * Signature: undefined __thiscall WriteInt32(BinaryFile * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BinaryFile::WriteInt32(int) */

void __thiscall Caver::BinaryFile::WriteInt32(BinaryFile *this,int param_1)

{
  long lVar1;
  FILE *__s;
  int local_30;
  uchar auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  CopyToFileBuffer32(auStack_2c,(uchar *)&local_30,1);
  if (*(int *)this == 1) {
    __s = *(FILE **)(this + 8);
  }
  else {
    if ((*(int *)this == 2) && (*(long *)(this + 8) != 0)) {
      gzwrite(*(long *)(this + 8),auStack_2c,4);
      goto LAB_005d66f8;
    }
    __s = (FILE *)0x0;
  }
  fwrite(auStack_2c,1,4,__s);
LAB_005d66f8:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


