/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402d2c
 * Function: Caver::Proto::SpriteComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SpriteComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpriteComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SpriteComponent::SerializeWithCachedSizes
          (SpriteComponent *this,CodedOutputStream *param_1)

{
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
  return;
}


