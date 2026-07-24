/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc414
 * Function: Caver::WeaponTrail::RemoveSegmentsFromBeginning
 * Signature: undefined __thiscall RemoveSegmentsFromBeginning(WeaponTrail * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrail::RemoveSegmentsFromBeginning(int) */

void __thiscall Caver::WeaponTrail::RemoveSegmentsFromBeginning(WeaponTrail *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(this + 4) - param_1;
  *(uint *)(this + 4) = uVar1;
  memmove(*(void **)(this + 0x18),
          (void *)((long)*(void **)(this + 0x18) + (long)(param_1 << 1) * 0x20),
          -(ulong)((uVar1 & 0x7fffffff) >> 0x1e) & 0xffffffe000000000 | (ulong)(uVar1 * 2) << 5);
  return;
}


