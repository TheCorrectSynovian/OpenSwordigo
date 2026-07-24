/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e26d8
 * Function: google::protobuf::internal::RepeatedPtrFieldBase::Reserve
 * Signature: undefined __thiscall Reserve(RepeatedPtrFieldBase * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int) */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::Reserve(RepeatedPtrFieldBase *this,int param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  void *__dest;
  ulong uVar3;
  RepeatedPtrFieldBase *__src;
  
  if (*(int *)(this + 0x10) < param_1) {
    uVar1 = *(int *)(this + 0x10) * 2;
    if (param_1 <= (int)uVar1) {
      param_1 = uVar1;
    }
    __src = *(RepeatedPtrFieldBase **)this;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)param_1;
    *(int *)(this + 0x10) = param_1;
    uVar3 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
                    /* try { // try from 005e2718 to 006e273f has its CatchHandler @ 005e2838 */
    if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar3);
    *(void **)this = __dest;
    memcpy(__dest,__src,(long)*(int *)(this + 0xc) << 3);
    if ((__src != this + 0x18) && (__src != (RepeatedPtrFieldBase *)0x0)) {
      operator_delete__(__src);
      return;
    }
  }
  return;
}


