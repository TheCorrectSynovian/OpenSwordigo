/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426ab8
 * Function: Caver::Proto::LeapingMonsterControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(LeapingMonsterControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LeapingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::LeapingMonsterControllerComponent::SerializeWithCachedSizes
          (LeapingMonsterControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
                    /* try { // try from 00426ab8 to 00526acb has its CatchHandler @ 00426bc8 */
  uVar1 = *(uint *)(this + 0x14);
                    /* try { // try from 00426acc to 00526ae3 has its CatchHandler @ 00426b64 */
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
                    /* try { // try from 00426ae4 to 00526bf3 has its CatchHandler @ 00426a04 */
    uVar1 = *(uint *)(this + 0x14);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
  return;
}


