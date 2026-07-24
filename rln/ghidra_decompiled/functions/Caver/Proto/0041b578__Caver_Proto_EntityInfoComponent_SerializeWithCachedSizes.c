/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b578
 * Function: Caver::Proto::EntityInfoComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(EntityInfoComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::EntityInfoComponent::SerializeWithCachedSizes
          (EntityInfoComponent *this,CodedOutputStream *param_1)

{
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
  return;
}


