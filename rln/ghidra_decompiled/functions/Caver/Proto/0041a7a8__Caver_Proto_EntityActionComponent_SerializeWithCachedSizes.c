/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a7a8
 * Function: Caver::Proto::EntityActionComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(EntityActionComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::EntityActionComponent::SerializeWithCachedSizes
          (EntityActionComponent *this,CodedOutputStream *param_1)

{
  EntityActionComponent *pEVar1;
  
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  pEVar1 = *(EntityActionComponent **)PTR_default_instance__007e4b60;
  if (*(long *)(this + 0x10) != 0) {
    pEVar1 = this;
  }
                    /* catch() { ... } // from try @ 0041a664 with catch @ 0041a7d8 */
                    /* try { // try from 0041a7dc to 0051a803 has its CatchHandler @ 0041a80c */
  google::protobuf::internal::WireFormatLite::WriteMessage
            (1,*(MessageLite **)(pEVar1 + 0x10),param_1);
  return;
}


