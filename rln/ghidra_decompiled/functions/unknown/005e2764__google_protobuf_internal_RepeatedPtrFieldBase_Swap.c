/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2764
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::Swap
 * Signature: undefined __thiscall Swap(RepeatedPtrFieldBase * this, RepeatedPtrFieldBase * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
    */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::Swap
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  RepeatedPtrFieldBase *pRVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar9 = *(undefined8 *)(this + 0x30);
  uVar6 = *(undefined8 *)(this + 0x28);
  pRVar5 = *(RepeatedPtrFieldBase **)this;
  uVar1 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined4 *)(this + 0x10);
                    /* try { // try from 005e2788 to 006e27af has its CatchHandler @ 005e2824 */
  uVar10 = *(undefined8 *)(this + 0x20);
  uVar7 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 005e27b0 to 006e2827 has its CatchHandler @ 005e267c */
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar8;
  *(RepeatedPtrFieldBase **)param_1 = pRVar5;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  if (*(RepeatedPtrFieldBase **)this == param_1 + 0x18) {
    *(RepeatedPtrFieldBase **)this = this + 0x18;
    pRVar5 = *(RepeatedPtrFieldBase **)param_1;
  }
  if (pRVar5 == this + 0x18) {
    *(RepeatedPtrFieldBase **)param_1 = param_1 + 0x18;
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 005e2788 with catch @ 005e2824 */
  __stack_chk_fail();
}


