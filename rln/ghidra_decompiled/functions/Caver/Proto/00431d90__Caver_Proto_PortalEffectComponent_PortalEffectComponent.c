/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431d90
 * Function: Caver::Proto::PortalEffectComponent::PortalEffectComponent
 * Signature: undefined __thiscall PortalEffectComponent(PortalEffectComponent * this, PortalEffectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::PortalEffectComponent(Caver::Proto::PortalEffectComponent
   const&) */

void __thiscall
Caver::Proto::PortalEffectComponent::PortalEffectComponent
          (PortalEffectComponent *this,PortalEffectComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e64b8;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 0;
                    /* catch() { ... } // from try @ 00431b9c with catch @ 00431dbc */
  MergeFrom(this,param_1);
  return;
}


