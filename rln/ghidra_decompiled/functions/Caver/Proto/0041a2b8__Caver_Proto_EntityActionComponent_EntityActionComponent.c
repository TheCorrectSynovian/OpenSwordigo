/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a2b8
 * Function: Caver::Proto::EntityActionComponent::EntityActionComponent
 * Signature: undefined __thiscall EntityActionComponent(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::EntityActionComponent() */

void __thiscall
Caver::Proto::EntityActionComponent::EntityActionComponent(EntityActionComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4a10;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 0041a2cc to 0051a2f3 has its CatchHandler @ 0041a37c */
  *(undefined **)this = puVar1 + 0x10;
  return;
}


