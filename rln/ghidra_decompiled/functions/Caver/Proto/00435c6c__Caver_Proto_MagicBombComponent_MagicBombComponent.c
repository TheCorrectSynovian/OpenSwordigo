/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00435c6c
 * Function: Caver::Proto::MagicBombComponent::MagicBombComponent
 * Signature: undefined __thiscall MagicBombComponent(MagicBombComponent * this, MagicBombComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBombComponent::MagicBombComponent(Caver::Proto::MagicBombComponent const&) */

void __thiscall
Caver::Proto::MagicBombComponent::MagicBombComponent
          (MagicBombComponent *this,MagicBombComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5940;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}


