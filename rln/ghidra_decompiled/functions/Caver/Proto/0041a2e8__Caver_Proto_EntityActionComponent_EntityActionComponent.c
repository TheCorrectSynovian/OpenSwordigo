/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a2e8
 * Function: Caver::Proto::EntityActionComponent::EntityActionComponent
 * Signature: undefined __thiscall EntityActionComponent(EntityActionComponent * this, EntityActionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::EntityActionComponent(Caver::Proto::EntityActionComponent
   const&) */

void __thiscall
Caver::Proto::EntityActionComponent::EntityActionComponent
          (EntityActionComponent *this,EntityActionComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4a10;
                    /* try { // try from 0041a2f4 to 0051a39f has its CatchHandler @ 0041a220 */
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}


