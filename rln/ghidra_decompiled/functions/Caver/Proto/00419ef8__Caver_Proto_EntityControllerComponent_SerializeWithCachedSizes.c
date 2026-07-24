/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419ef8
 * Function: Caver::Proto::EntityControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(EntityControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::EntityControllerComponent::SerializeWithCachedSizes
          (EntityControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x2c);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 00419f44 to 0051a053 has its CatchHandler @ 00419e7c */
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x1c),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 0x24),param_1);
    uVar1 = *(uint *)(this + 0x2c);
  }
  if ((uVar1 >> 7 & 1) == 0) {
                    /* try { // try from 00419f34 to 00519f43 has its CatchHandler @ 00419fe4 */
    return;
  }
                    /* catch() { ... } // from try @ 00419f34 with catch @ 00419fe4 */
  google::protobuf::internal::WireFormatLite::WriteEnum(8,*(int *)(this + 0x28),param_1);
  return;
}


