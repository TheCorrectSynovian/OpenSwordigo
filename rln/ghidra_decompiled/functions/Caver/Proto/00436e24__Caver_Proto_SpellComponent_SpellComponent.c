/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436e24
 * Function: Caver::Proto::SpellComponent::SpellComponent
 * Signature: undefined __thiscall SpellComponent(SpellComponent * this, SpellComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::SpellComponent(Caver::Proto::SpellComponent const&) */

void __thiscall
Caver::Proto::SpellComponent::SpellComponent(SpellComponent *this,SpellComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7f10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
                    /* try { // try from 00436e58 to 00536e63 has its CatchHandler @ 00436f8c */
  return;
}


