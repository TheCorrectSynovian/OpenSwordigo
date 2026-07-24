/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003134d8
 * Function: Caver::FloatDataBuffer::Resize
 * Signature: undefined __thiscall Resize(FloatDataBuffer * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatDataBuffer::Resize(int) */

void __thiscall Caver::FloatDataBuffer::Resize(FloatDataBuffer *this,int param_1)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  ulong uVar3;
  
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
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


