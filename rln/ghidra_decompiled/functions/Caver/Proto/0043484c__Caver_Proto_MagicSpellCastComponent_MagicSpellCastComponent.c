/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043484c
 * Function: Caver::Proto::MagicSpellCastComponent::MagicSpellCastComponent
 * Signature: undefined __thiscall MagicSpellCastComponent(MagicSpellCastComponent * this, MagicSpellCastComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicSpellCastComponent::MagicSpellCastComponent(Caver::Proto::MagicSpellCastComponent
   const&) */

void __thiscall
Caver::Proto::MagicSpellCastComponent::MagicSpellCastComponent
          (MagicSpellCastComponent *this,MagicSpellCastComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e66b0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


