/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00425628
 * Function: Caver::Proto::AttackComponent::AttackComponent
 * Signature: undefined __thiscall AttackComponent(AttackComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::AttackComponent() */

void __thiscall Caver::Proto::AttackComponent::AttackComponent(AttackComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e66a0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x48) = 0;
                    /* catch() { ... } // from try @ 00424cc4 with catch @ 00425650 */
  return;
}


