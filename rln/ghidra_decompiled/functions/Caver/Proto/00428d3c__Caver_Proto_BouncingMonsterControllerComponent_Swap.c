/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00428d3c
 * Function: Caver::Proto::BouncingMonsterControllerComponent::Swap
 * Signature: undefined __thiscall Swap(BouncingMonsterControllerComponent * this, BouncingMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BouncingMonsterControllerComponent::Swap(Caver::Proto::BouncingMonsterControllerComponent*)
    */

void __thiscall
Caver::Proto::BouncingMonsterControllerComponent::Swap
          (BouncingMonsterControllerComponent *this,BouncingMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00428d3c to 00528db3 has its CatchHandler @ 00428c7c */
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


