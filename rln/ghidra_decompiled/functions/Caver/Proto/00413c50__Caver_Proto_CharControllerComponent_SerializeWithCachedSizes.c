/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00413c50
 * Function: Caver::Proto::CharControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(CharControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::CharControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::CharControllerComponent::SerializeWithCachedSizes
          (CharControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  long lVar2;
  
                    /* try { // try from 00413c5c to 00513c83 has its CatchHandler @ 00413c98 */
  uVar1 = *(uint *)(this + 0x7c);
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x3c),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x68),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x6c),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
                    /* try { // try from 00413d74 to 00513d9b has its CatchHandler @ 00413dac */
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x70),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(6,*(int *)(this + 0x40),param_1);
    uVar1 = *(uint *)(this + 0x7c);
                    /* try { // try from 00413d9c to 00513da3 has its CatchHandler @ 00413dc0 */
  }
                    /* try { // try from 00413c84 to 00513c9b has its CatchHandler @ 00413b78 */
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(7,*(int *)(this + 0xc),param_1);
  }
                    /* catch() { ... } // from try @ 00413c5c with catch @ 00413c98 */
                    /* try { // try from 00413c9c to 00513ca3 has its CatchHandler @ 00413ca8 */
  if (0 < *(int *)(this + 0x50)) {
    lVar2 = 0;
    do {
                    /* catch() { ... } // from try @ 00413c9c with catch @ 00413ca8 */
                    /* catch() { ... } // from try @ 00413bd8 with catch @ 00413cac */
                    /* catch() { ... } // from try @ 00413c14 with catch @ 00413cb4 */
      google::protobuf::internal::WireFormatLite::WriteInt32
                (8,*(int *)(*(long *)(this + 0x48) + lVar2 * 4),param_1);
                    /* catch() { ... } // from try @ 00413c0c with catch @ 00413cbc */
      lVar2 = lVar2 + 1;
                    /* catch() { ... } // from try @ 00413c04 with catch @ 00413cc4 */
    } while (lVar2 < *(int *)(this + 0x50));
  }
                    /* catch() { ... } // from try @ 00413bb4 with catch @ 00413ccc */
  uVar1 = *(uint *)(this + 0x7c);
  if ((uVar1 >> 2 & 1) != 0) {
                    /* try { // try from 00413da4 to 00513daf has its CatchHandler @ 00413b78 */
                    /* catch() { ... } // from try @ 00413d74 with catch @ 00413dac */
                    /* try { // try from 00413db0 to 00513db7 has its CatchHandler @ 00413dbc */
    google::protobuf::internal::WireFormatLite::WriteInt32(9,*(int *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00413db0 with catch @ 00413dbc */
                    /* catch() { ... } // from try @ 00413cf0 with catch @ 00413dc0
                       catch() { ... } // from try @ 00413d9c with catch @ 00413dc0 */
    google::protobuf::internal::WireFormatLite::WriteInt32(10,*(int *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0xb,*(int *)(this + 0x1c),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0xc,*(int *)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0xd,*(int *)(this + 0x28),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0xe,*(int *)(this + 0x2c),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0xf,*(int *)(this + 0x24),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(0x10,*(float *)(this + 0x74),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(0x11,*(float *)(this + 0x78),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0x12,*(int *)(this + 0x30),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0x13,*(int *)(this + 0x34),param_1);
    uVar1 = *(uint *)(this + 0x7c);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(0x14,*(int *)(this + 0x38),param_1);
    return;
  }
  return;
}


