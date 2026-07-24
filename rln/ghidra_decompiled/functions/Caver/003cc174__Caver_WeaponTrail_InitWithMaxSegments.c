/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc174
 * Function: Caver::WeaponTrail::InitWithMaxSegments
 * Signature: undefined __thiscall InitWithMaxSegments(WeaponTrail * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::InitWithMaxSegments(int) */

void __thiscall Caver::WeaponTrail::InitWithMaxSegments(WeaponTrail *this,int param_1)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  
  *(undefined4 *)(this + 0x20) = 0x20;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)(param_1 << 1);
  uVar4 = -(ulong)((param_1 & 0x7fffffffU) >> 0x1e) & 0xffffffe000000000 |
          (ulong)(uint)(param_1 << 1) << 5;
  if (SUB168(auVar1 * ZEXT816(0x20),8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  *(int *)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  pvVar2 = operator_new__(uVar4);
  pvVar3 = *(void **)(this + 0x18);
  *(void **)(this + 0x18) = pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    return;
  }
  return;
}


