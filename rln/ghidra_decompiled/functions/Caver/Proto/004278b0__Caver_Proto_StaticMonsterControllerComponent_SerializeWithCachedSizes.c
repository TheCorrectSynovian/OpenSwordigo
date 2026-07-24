/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004278b0
 * Function: Caver::Proto::StaticMonsterControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(StaticMonsterControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StaticMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::StaticMonsterControllerComponent::SerializeWithCachedSizes
          (StaticMonsterControllerComponent *this,CodedOutputStream *param_1)

{
  long lVar1;
  
  if (((byte)this[0x30] & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
  }
  if (0 < *(int *)(this + 0x18)) {
    lVar1 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteInt32
                (2,*(int *)(*(long *)(this + 0x10) + lVar1 * 4),param_1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x18));
  }
  return;
}


