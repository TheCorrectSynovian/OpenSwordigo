/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043757c
 * Function: Caver::Proto::DimensionObjectComponent::~DimensionObjectComponent
 * Signature: undefined __thiscall ~DimensionObjectComponent(DimensionObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::~DimensionObjectComponent() */

void __thiscall
Caver::Proto::DimensionObjectComponent::~DimensionObjectComponent(DimensionObjectComponent *this)

{
  *(undefined **)this = PTR_vtable_007e66d0 + 0x10;
                    /* try { // try from 0043758c to 00537593 has its CatchHandler @ 004380bc */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


