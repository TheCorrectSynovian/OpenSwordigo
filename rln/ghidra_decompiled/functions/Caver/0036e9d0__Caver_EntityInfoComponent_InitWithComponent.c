/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036e9d0
 * Function: Caver::EntityInfoComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(EntityInfoComponent * this, EntityInfoComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::InitWithComponent(Caver::EntityInfoComponent const*) */

void __thiscall
Caver::EntityInfoComponent::InitWithComponent
          (EntityInfoComponent *this,EntityInfoComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  FUN_0066a6a8(this + 0x78,param_1 + 0x78);
  return;
}


