/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437594
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
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 004375b8 to 005375c7 has its CatchHandler @ 00438118 */
  operator_delete(this);
  return;
}


