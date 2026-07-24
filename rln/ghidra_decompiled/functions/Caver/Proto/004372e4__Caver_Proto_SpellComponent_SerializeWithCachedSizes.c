/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004372e4
 * Function: Caver::Proto::SpellComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SpellComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SpellComponent::SerializeWithCachedSizes
          (SpellComponent *this,CodedOutputStream *param_1)

{
  SpellComponent *pSVar1;
  
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  pSVar1 = *(SpellComponent **)PTR_default_instance__007e66b8;
  if (*(long *)(this + 0x10) != 0) {
    pSVar1 = this;
  }
                    /* try { // try from 00437318 to 0053731b has its CatchHandler @ 00437388 */
  google::protobuf::internal::WireFormatLite::WriteMessage
            (1,*(MessageLite **)(pSVar1 + 0x10),param_1);
  return;
}


