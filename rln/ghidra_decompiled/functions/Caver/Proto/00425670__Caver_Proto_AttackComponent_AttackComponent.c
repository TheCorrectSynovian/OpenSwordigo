/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00425670
 * Function: Caver::Proto::AttackComponent::AttackComponent
 * Signature: undefined __thiscall AttackComponent(AttackComponent * this, AttackComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::AttackComponent(Caver::Proto::AttackComponent const&) */

void __thiscall
Caver::Proto::AttackComponent::AttackComponent(AttackComponent *this,AttackComponent *param_1)

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
  MergeFrom(this,param_1);
                    /* catch() { ... } // from try @ 00424c3c with catch @ 004256b0 */
  return;
}


