/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041bdb4
 * Function: Caver::Proto::BackgroundComponent::BackgroundComponent
 * Signature: undefined __thiscall BackgroundComponent(BackgroundComponent * this, BackgroundComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::BackgroundComponent(Caver::Proto::BackgroundComponent const&)
    */

void __thiscall
Caver::Proto::BackgroundComponent::BackgroundComponent
          (BackgroundComponent *this,BackgroundComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e6a70;
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_texture_name__007e56a8;
                    /* catch() { ... } // from try @ 0041bd30 with catch @ 0041bddc */
  *(undefined **)this = puVar2 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  MergeFrom(this,param_1);
  return;
}


