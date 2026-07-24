/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042eddc
 * Function: Caver::Proto::TouchableComponent::TouchableComponent
 * Signature: undefined __thiscall TouchableComponent(TouchableComponent * this, TouchableComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::TouchableComponent(Caver::Proto::TouchableComponent const&) */

void __thiscall
Caver::Proto::TouchableComponent::TouchableComponent
          (TouchableComponent *this,TouchableComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6360;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* catch() { ... } // from try @ 0042ed4c with catch @ 0042ee00 */
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


