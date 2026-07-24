/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424a6c
 * Function: Caver::Proto::ChargingMonsterControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ChargingMonsterControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ChargingMonsterControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ChargingMonsterControllerComponent::SerializeWithCachedSizes
          (ChargingMonsterControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 00424ab0 to 00524ac3 has its CatchHandler @ 00425818 */
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 2 & 1) != 0) {
                    /* try { // try from 00424ad4 to 00524adf has its CatchHandler @ 004257e0 */
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 4 & 1) != 0) {
                    /* try { // try from 00424b08 to 00524b43 has its CatchHandler @ 00425784 */
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x1c),param_1);
    return;
  }
  return;
}


