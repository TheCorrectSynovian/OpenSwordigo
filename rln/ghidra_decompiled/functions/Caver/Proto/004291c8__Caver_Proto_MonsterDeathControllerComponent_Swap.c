/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004291c8
 * Function: Caver::Proto::MonsterDeathControllerComponent::Swap
 * Signature: undefined __thiscall Swap(MonsterDeathControllerComponent * this, MonsterDeathControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::Swap(Caver::Proto::MonsterDeathControllerComponent*)
    */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::Swap
          (MonsterDeathControllerComponent *this,MonsterDeathControllerComponent *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
                    /* try { // try from 004291e8 to 00529223 has its CatchHandler @ 00429660 */
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


