/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4658
 * Function: google::protobuf::io::CodedOutputStream::CodedOutputStream
 * Signature: undefined __thiscall CodedOutputStream(CodedOutputStream * this, ZeroCopyOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::CodedOutputStream(google::protobuf::io::ZeroCopyOutputStream*)
    */

void __thiscall
google::protobuf::io::CodedOutputStream::CodedOutputStream
          (CodedOutputStream *this,ZeroCopyOutputStream *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(ZeroCopyOutputStream **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  this[0x18] = (CodedOutputStream)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_30);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 005e46bc to 006e46c3 has its CatchHandler @ 005e4904 */
    *(undefined8 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    this[0x18] = (CodedOutputStream)0x1;
  }
  else {
    *(undefined8 *)(this + 8) = local_30;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + *(int *)(this + 0x10);
  }
  this[0x18] = (CodedOutputStream)0x0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


