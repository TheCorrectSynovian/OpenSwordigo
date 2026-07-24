/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c354
 * Function: Caver::Proto::BackgroundComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(BackgroundComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::BackgroundComponent::SerializeWithCachedSizes
          (BackgroundComponent *this,CodedOutputStream *param_1)

{
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
  return;
}


