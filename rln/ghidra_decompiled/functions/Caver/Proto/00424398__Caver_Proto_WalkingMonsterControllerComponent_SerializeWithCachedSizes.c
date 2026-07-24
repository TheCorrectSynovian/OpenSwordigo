/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424398
 * Function: Caver::Proto::WalkingMonsterControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(WalkingMonsterControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::SerializeWithCachedSizes
          (WalkingMonsterControllerComponent *this,CodedOutputStream *param_1)

{
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
  return;
}


