/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4898
 * Function: google::protobuf::io::CodedOutputStream::GetDirectBufferPointer
 * Signature: undefined __thiscall GetDirectBufferPointer(CodedOutputStream * this, void * * param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::GetDirectBufferPointer(void**, int*) */

void __thiscall
google::protobuf::io::CodedOutputStream::GetDirectBufferPointer
          (CodedOutputStream *this,void **param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  void *local_40;
  long local_38;
  
                    /* try { // try from 005e489c to 006e48a3 has its CatchHandler @ 005e48a4 */
                    /* catch() { ... } // from try @ 005e489c with catch @ 005e48a4
                       try { // try from 005e48a4 to 006e48e3 has its CatchHandler @ 005e4378 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005e47a8 with catch @ 005e48b8 */
                    /* catch() { ... } // from try @ 005e4754 with catch @ 005e48c0 */
  iVar4 = *(int *)(this + 0x10);
  if (iVar4 == 0) {
                    /* try { // try from 005e48e4 to 006e48eb has its CatchHandler @ 005e48f0 */
    uVar2 = (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_40);
    if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 005e4928 with catch @ 005e4934 */
                    /* catch() { ... } // from try @ 005e459c with catch @ 005e4938 */
      uVar3 = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      this[0x18] = (CodedOutputStream)0x1;
      goto LAB_005e4910;
    }
                    /* catch() { ... } // from try @ 005e48e4 with catch @ 005e48f0 */
    iVar4 = *(int *)(this + 0x10);
                    /* catch() { ... } // from try @ 005e4784 with catch @ 005e48f4 */
    *(void **)(this + 8) = local_40;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + iVar4;
  }
  else {
    local_40 = *(void **)(this + 8);
  }
                    /* catch() { ... } // from try @ 005e46bc with catch @ 005e4904 */
  uVar3 = 1;
  *param_1 = local_40;
  *param_2 = iVar4;
LAB_005e4910:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005e4928 to 006e492f has its CatchHandler @ 005e4934 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


