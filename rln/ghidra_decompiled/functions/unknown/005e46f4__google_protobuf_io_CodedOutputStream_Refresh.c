/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e46f4
 * Function: google::protobuf::io::CodedOutputStream::Refresh
 * Signature: undefined __thiscall Refresh(CodedOutputStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::Refresh() */

void __thiscall google::protobuf::io::CodedOutputStream::Refresh(CodedOutputStream *this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005e471c to 006e4733 has its CatchHandler @ 005e49f4 */
  uVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_30,this + 0x10);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
                    /* try { // try from 005e4754 to 006e475f has its CatchHandler @ 005e48c0 */
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    this[0x18] = (CodedOutputStream)0x1;
  }
  else {
    *(undefined8 *)(this + 8) = local_30;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + *(int *)(this + 0x10);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(!bVar1);
}


