/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416914
 * Function: Caver::Proto::DoorControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(DoorControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::DoorControllerComponent::SerializeWithCachedSizes
          (DoorControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
                    /* catch() { ... } // from try @ 00416908 with catch @ 00416974 */
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(4,(bool)this[0x1c],param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 2 & 1) != 0) {
                    /* try { // try from 00416994 to 0051699b has its CatchHandler @ 004169a0 */
                    /* catch() { ... } // from try @ 00416994 with catch @ 004169a0 */
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x14),param_1);
                    /* catch() { ... } // from try @ 004168c8 with catch @ 004169a4 */
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 3 & 1) != 0) {
                    /* catch() { ... } // from try @ 004168a4 with catch @ 004169b0 */
    google::protobuf::internal::WireFormatLite::WriteInt32(6,*(int *)(this + 0x18),param_1);
    return;
  }
  return;
}


