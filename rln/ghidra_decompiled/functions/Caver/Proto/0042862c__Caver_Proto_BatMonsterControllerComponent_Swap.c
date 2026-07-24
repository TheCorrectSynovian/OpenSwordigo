/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042862c
 * Function: Caver::Proto::BatMonsterControllerComponent::Swap
 * Signature: undefined __thiscall Swap(BatMonsterControllerComponent * this, BatMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BatMonsterControllerComponent::Swap(Caver::Proto::BatMonsterControllerComponent*)
    */

void __thiscall
Caver::Proto::BatMonsterControllerComponent::Swap
          (BatMonsterControllerComponent *this,BatMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
                    /* catch() { ... } // from try @ 004285f8 with catch @ 00428644 */
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
                    /* try { // try from 00428658 to 005286b7 has its CatchHandler @ 00428658
                       catch() { ... } // from try @ 00428658 with catch @ 00428658
                       catch() { ... } // from try @ 004286bc with catch @ 00428658 */
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


