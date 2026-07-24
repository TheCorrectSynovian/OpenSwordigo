/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041fbe8
 * Function: Caver::Proto::FireEmitterComponent::FireEmitterComponent
 * Signature: undefined __thiscall FireEmitterComponent(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::FireEmitterComponent() */

void __thiscall Caver::Proto::FireEmitterComponent::FireEmitterComponent(FireEmitterComponent *this)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 0041fa74 with catch @ 0041fbe8 */
  puVar1 = PTR_vtable_007e5028;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
                    /* catch() { ... } // from try @ 0041fab0 with catch @ 0041fbf8
                       catch() { ... } // from try @ 0041faf4 with catch @ 0041fbf8 */
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


