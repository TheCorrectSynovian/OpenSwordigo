/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313488
 * Function: Caver::FloatDataBuffer::FloatDataBuffer
 * Signature: undefined __thiscall FloatDataBuffer(FloatDataBuffer * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::FloatDataBuffer(int) */

void __thiscall Caver::FloatDataBuffer::FloatDataBuffer(FloatDataBuffer *this,int param_1)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong uVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)param_1;
  uVar3 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
  if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  *(int *)this = param_1;
  pvVar2 = operator_new__(uVar3);
  *(void **)(this + 8) = pvVar2;
  return;
}


