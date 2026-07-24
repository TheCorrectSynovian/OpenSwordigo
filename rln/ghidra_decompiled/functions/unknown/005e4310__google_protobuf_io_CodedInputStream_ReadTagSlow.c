/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4310
 * Function: google::protobuf::io::CodedInputStream::ReadTagSlow
 * Signature: undefined __thiscall ReadTagSlow(CodedInputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadTagSlow() */

void __thiscall google::protobuf::io::CodedInputStream::ReadTagSlow(CodedInputStream *this)

{
  long lVar1;
  CodedInputStream CVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pbVar5 = *(byte **)(this + 8);
  if (pbVar5 == *(byte **)(this + 0x10)) {
    uVar3 = Refresh(this);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(this + 0x18) - *(int *)(this + 0x2c) < *(int *)(this + 0x30)) {
        CVar2 = (CodedInputStream)0x1;
      }
      else {
        CVar2 = (CodedInputStream)(*(int *)(this + 0x28) == *(int *)(this + 0x30));
      }
      this[0x24] = CVar2;
      uVar3 = 0;
      goto LAB_005e43cc;
    }
    pbVar5 = *(byte **)(this + 8);
    if (pbVar5 < *(byte **)(this + 0x10)) goto LAB_005e4344;
  }
  else if (pbVar5 < *(byte **)(this + 0x10)) {
LAB_005e4344:
    if (-1 < (char)*pbVar5) {
      local_30 = (ulong)*pbVar5;
      *(byte **)(this + 8) = pbVar5 + 1;
      uVar3 = local_30;
      goto LAB_005e43cc;
    }
  }
                    /* try { // try from 005e4378 to 006e43f3 has its CatchHandler @ 005e4378
                       catch() { ... } // from try @ 005e4378 with catch @ 005e4378
                       catch() { ... } // from try @ 005e43f8 with catch @ 005e4378
                       catch() { ... } // from try @ 005e4504 with catch @ 005e4378
                       catch() { ... } // from try @ 005e45c4 with catch @ 005e4378
                       catch() { ... } // from try @ 005e47f8 with catch @ 005e4378
                       catch() { ... } // from try @ 005e48a4 with catch @ 005e4378
                       catch() { ... } // from try @ 005e49d4 with catch @ 005e4378
                       catch() { ... } // from try @ 005e4afc with catch @ 005e4378 */
  uVar4 = ReadVarint64Fallback(this,&local_30);
  uVar3 = local_30;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
LAB_005e43cc:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


