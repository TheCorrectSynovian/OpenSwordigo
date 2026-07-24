/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004290f8
 * Function: Caver::Proto::MonsterDeathControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MonsterDeathControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterDeathControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MonsterDeathControllerComponent::SerializeWithCachedSizes
          (MonsterDeathControllerComponent *this,CodedOutputStream *param_1)

{
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
                    /* try { // try from 00429108 to 00529113 has its CatchHandler @ 00429754 */
  google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
  return;
}


