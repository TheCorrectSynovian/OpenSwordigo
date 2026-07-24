/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00412d2c
 * Function: Caver::Proto::CharControllerComponent::~CharControllerComponent
 * Signature: undefined __thiscall ~CharControllerComponent(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::~CharControllerComponent() */

void __thiscall
Caver::Proto::CharControllerComponent::~CharControllerComponent(CharControllerComponent *this)

{
  CharControllerComponent *pCVar1;
  
                    /* try { // try from 00412d3c to 00512d43 has its CatchHandler @ 00412d54 */
  pCVar1 = *(CharControllerComponent **)(this + 0x48);
                    /* try { // try from 00412d44 to 00512d57 has its CatchHandler @ 00412c98 */
                    /* catch() { ... } // from try @ 00412d3c with catch @ 00412d54 */
  *(undefined **)this = PTR_vtable_007e6f20 + 0x10;
  if ((pCVar1 != this + 0x58) && (pCVar1 != (CharControllerComponent *)0x0)) {
    operator_delete__(pCVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


