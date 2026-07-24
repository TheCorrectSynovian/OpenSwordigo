/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7128
 * Function: google::protobuf::internal::VersionString
 * Signature: undefined __thiscall VersionString(internal * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::VersionString(int) */

void __thiscall google::protobuf::internal::VersionString(internal *this,int param_1)

{
  long lVar1;
  int iVar2;
  char acStack_a8 [127];
  undefined1 local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  iVar2 = (int)this;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005d70f4 with catch @ 005d7160 */
                    /* try { // try from 005d7194 to 006d71bb has its CatchHandler @ 005d71cc */
  snprintf(acStack_a8,0x80,"%d.%d.%d",(ulong)(uint)(iVar2 / 1000000),
           (ulong)(uint)((iVar2 / 1000) % 1000),(ulong)(uint)(iVar2 % 1000));
  local_29 = 0;
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 005d7194 with catch @ 005d71cc */
                    /* catch() { ... } // from try @ 005d6df0 with catch @ 005d71d0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


