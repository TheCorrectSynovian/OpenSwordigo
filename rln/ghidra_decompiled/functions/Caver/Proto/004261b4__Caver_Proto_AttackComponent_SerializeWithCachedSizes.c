/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004261b4
 * Function: Caver::Proto::AttackComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(AttackComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::AttackComponent::SerializeWithCachedSizes
          (AttackComponent *this,CodedOutputStream *param_1)

{
  AttackComponent *pAVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x48);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x28),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 6 & 1) != 0) {
                    /* catch() { ... } // from try @ 00426358 with catch @ 0042628c
                       catch() { ... } // from try @ 004264bc with catch @ 0042628c */
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x2c),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(8,*(float *)(this + 0x34),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(9,*(float *)(this + 0x40),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(10,*(float *)(this + 0x44),param_1);
                    /* try { // try from 004262f4 to 005262f7 has its CatchHandler @ 004263e4 */
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 4 & 1) != 0) {
                    /* try { // try from 00426300 to 00526307 has its CatchHandler @ 00426418 */
    pAVar1 = *(AttackComponent **)PTR_default_instance__007e7ad0;
    if (*(long *)(this + 0x20) != 0) {
      pAVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (0xb,*(MessageLite **)(pAVar1 + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 9 & 1) != 0) {
                    /* try { // try from 00426330 to 00526357 has its CatchHandler @ 00426410 */
    google::protobuf::internal::WireFormatLite::WriteFloat(0xc,*(float *)(this + 0x38),param_1);
    uVar2 = *(uint *)(this + 0x48);
  }
  if ((uVar2 >> 10 & 1) != 0) {
                    /* try { // try from 00426358 to 005263ef has its CatchHandler @ 0042628c */
    google::protobuf::internal::WireFormatLite::WriteFloat(0xd,*(float *)(this + 0x3c),param_1);
    return;
  }
  return;
}


