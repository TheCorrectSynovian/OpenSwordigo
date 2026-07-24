/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423fcc
 * Function: Caver::Proto::MonsterControllerComponent::Swap
 * Signature: undefined __thiscall Swap(MonsterControllerComponent * this, MonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterControllerComponent::Swap(Caver::Proto::MonsterControllerComponent*) */

void __thiscall
Caver::Proto::MonsterControllerComponent::Swap
          (MonsterControllerComponent *this,MonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00423fd0 to 00523fd7 has its CatchHandler @ 00424010 */
  if (param_1 != this) {
                    /* try { // try from 00423fd8 to 00524023 has its CatchHandler @ 00423f44 */
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x14);
    *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
                    /* catch() { ... } // from try @ 00423fd0 with catch @ 00424010 */
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
                    /* try { // try from 00424024 to 00524083 has its CatchHandler @ 00424024
                       catch() { ... } // from try @ 00424024 with catch @ 00424024
                       catch() { ... } // from try @ 0042408c with catch @ 00424024 */
  return;
}


