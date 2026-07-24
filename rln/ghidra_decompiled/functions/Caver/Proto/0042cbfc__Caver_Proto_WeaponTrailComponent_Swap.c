/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042cbfc
 * Function: Caver::Proto::WeaponTrailComponent::Swap
 * Signature: undefined __thiscall Swap(WeaponTrailComponent * this, WeaponTrailComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::Swap(Caver::Proto::WeaponTrailComponent*) */

void __thiscall
Caver::Proto::WeaponTrailComponent::Swap(WeaponTrailComponent *this,WeaponTrailComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
                    /* try { // try from 0042cc14 to 0052cc27 has its CatchHandler @ 0042cc4c */
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
                    /* try { // try from 0042cc28 to 0052cc4f has its CatchHandler @ 0042cbf8 */
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


