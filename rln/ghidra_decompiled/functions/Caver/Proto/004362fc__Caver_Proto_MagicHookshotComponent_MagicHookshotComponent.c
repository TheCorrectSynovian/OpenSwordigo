/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004362fc
 * Function: Caver::Proto::MagicHookshotComponent::MagicHookshotComponent
 * Signature: undefined __thiscall MagicHookshotComponent(MagicHookshotComponent * this, MagicHookshotComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::MagicHookshotComponent(Caver::Proto::MagicHookshotComponent
   const&) */

void __thiscall
Caver::Proto::MagicHookshotComponent::MagicHookshotComponent
          (MagicHookshotComponent *this,MagicHookshotComponent *param_1)

{
  undefined *puVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004362a0 with catch @ 004362fc
                        */
  puVar1 = PTR_vtable_007e7cf0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}


