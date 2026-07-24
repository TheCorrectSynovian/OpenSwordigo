/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437870
 * Function: Caver::Proto::DimensionSpellComponent::~DimensionSpellComponent
 * Signature: undefined __thiscall ~DimensionSpellComponent(DimensionSpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionSpellComponent::~DimensionSpellComponent() */

void __thiscall
Caver::Proto::DimensionSpellComponent::~DimensionSpellComponent(DimensionSpellComponent *this)

{
  *(undefined **)this = PTR_vtable_007e64e8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


