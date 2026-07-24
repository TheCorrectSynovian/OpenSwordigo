/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414b04
 * Function: Caver::Proto::EntityComponent::Swap
 * Signature: undefined __thiscall Swap(EntityComponent * this, EntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::Swap(Caver::Proto::EntityComponent*) */

void __thiscall Caver::Proto::EntityComponent::Swap(EntityComponent *this,EntityComponent *param_1)

{
  undefined4 uVar1;
  EntityComponent EVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    EVar2 = this[0x10];
    this[0x10] = param_1[0x10];
    param_1[0x10] = EVar2;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


