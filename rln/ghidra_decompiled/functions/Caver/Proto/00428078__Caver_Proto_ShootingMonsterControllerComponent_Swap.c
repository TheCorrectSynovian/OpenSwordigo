/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428078
 * Function: Caver::Proto::ShootingMonsterControllerComponent::Swap
 * Signature: undefined __thiscall Swap(ShootingMonsterControllerComponent * this, ShootingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShootingMonsterControllerComponent::Swap(Caver::Proto::ShootingMonsterControllerComponent*)
    */

void __thiscall
Caver::Proto::ShootingMonsterControllerComponent::Swap
          (ShootingMonsterControllerComponent *this,ShootingMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  
                    /* try { // try from 0042807c to 0052808b has its CatchHandler @ 0042810c */
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 0042808c to 0052817f has its CatchHandler @ 00428040 */
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


