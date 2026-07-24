/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041afd8
 * Function: Caver::Proto::EntityInfoComponent::EntityInfoComponent
 * Signature: undefined __thiscall EntityInfoComponent(EntityInfoComponent * this, EntityInfoComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::EntityInfoComponent(Caver::Proto::EntityInfoComponent const&)
    */

void __thiscall
Caver::Proto::EntityInfoComponent::EntityInfoComponent
          (EntityInfoComponent *this,EntityInfoComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
                    /* try { // try from 0041afd8 to 0051afe3 has its CatchHandler @ 0041ae00 */
  puVar1 = PTR_vtable_007e4dd8;
                    /* catch() { ... } // from try @ 0041af60 with catch @ 0041afe0 */
                    /* try { // try from 0041afe4 to 0051b023 has its CatchHandler @ 0041afe4
                       catch() { ... } // from try @ 0041afe4 with catch @ 0041afe4
                       catch() { ... } // from try @ 0041b0b0 with catch @ 0041afe4
                       catch() { ... } // from try @ 0041b178 with catch @ 0041afe4 */
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_entity_class__007e6138;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  MergeFrom(this,param_1);
  return;
}


