/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366090
 * Function: Caver::DamageComponent::IsImpactBlocked
 * Signature: undefined __thiscall IsImpactBlocked(DamageComponent * this, DamageImpact * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::DamageComponent::IsImpactBlocked(Caver::DamageImpact const&) */

undefined8 __thiscall
Caver::DamageComponent::IsImpactBlocked(DamageComponent *this,DamageImpact *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x88);
  if (lVar1 != *(long *)(this + 0x90)) {
    do {
      if (*(float *)(lVar1 + 0x20) <= *(float *)(param_1 + 0x20) + DAT_00683734) {
        if (*(float *)(lVar1 + 0x20) <= _DAT_00687e1c) {
          return 1;
        }
        if (DAT_00683f68 <=
            (float)*(undefined8 *)(lVar1 + 0x18) * (float)*(undefined8 *)(param_1 + 0x18) +
            (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) *
            (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20)) {
          return 1;
        }
      }
      lVar1 = lVar1 + 0x40;
    } while (*(long *)(this + 0x90) != lVar1);
  }
  return 0;
}


