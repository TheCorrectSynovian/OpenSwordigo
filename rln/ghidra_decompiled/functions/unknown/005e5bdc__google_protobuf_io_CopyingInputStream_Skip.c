/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e5bdc
 * Function: google::protobuf::io::CopyingInputStream::Skip
 * Signature: undefined __thiscall Skip(CopyingInputStream * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CopyingInputStream::Skip(int) */

int __thiscall google::protobuf::io::CopyingInputStream::Skip(CopyingInputStream *this,int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1048 [4096];
  long local_48;
  
                    /* catch() { ... } // from try @ 005e52bc with catch @ 005e5bf4 */
                    /* catch() { ... } // from try @ 005e5290 with catch @ 005e5bf8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = 0;
  if (0 < param_1) {
    do {
      iVar2 = param_1 - iVar3;
      if (0xfff < iVar2) {
        iVar2 = 0x1000;
      }
      iVar2 = (**(code **)(*(long *)this + 0x10))(this,auStack_1048,iVar2);
    } while ((0 < iVar2) && (iVar3 = iVar2 + iVar3, iVar3 < param_1));
  }
                    /* catch() { ... } // from try @ 005e527c with catch @ 005e5c50 */
                    /* catch() { ... } // from try @ 005e5220 with catch @ 005e5c54 */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


