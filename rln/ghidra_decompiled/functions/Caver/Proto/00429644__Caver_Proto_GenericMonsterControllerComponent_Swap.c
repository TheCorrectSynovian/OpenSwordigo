/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429644
 * Function: Caver::Proto::GenericMonsterControllerComponent::Swap
 * Signature: undefined __thiscall Swap(GenericMonsterControllerComponent * this, GenericMonsterControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::Swap(Caver::Proto::GenericMonsterControllerComponent*)
    */

void __thiscall
Caver::Proto::GenericMonsterControllerComponent::Swap
          (GenericMonsterControllerComponent *this,GenericMonsterControllerComponent *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
                    /* catch() { ... } // from try @ 00429244 with catch @ 0042965c */
                    /* catch() { ... } // from try @ 004291e8 with catch @ 00429660 */
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


