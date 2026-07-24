/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041063c
 * Function: Caver::Proto::ShadowComponent::ShadowComponent
 * Signature: undefined __thiscall ShadowComponent(ShadowComponent * this, ShadowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::ShadowComponent(Caver::Proto::ShadowComponent const&) */

void __thiscall
Caver::Proto::ShadowComponent::ShadowComponent(ShadowComponent *this,ShadowComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7e98;
  *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 00410658 to 00510893 has its CatchHandler @ 0040e548 */
  *(undefined8 *)(this + 0x18) = 0;
                    /* catch() { ... } // from try @ 0040e92c with catch @ 0041065c */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  MergeFrom(this,param_1);
  return;
}


