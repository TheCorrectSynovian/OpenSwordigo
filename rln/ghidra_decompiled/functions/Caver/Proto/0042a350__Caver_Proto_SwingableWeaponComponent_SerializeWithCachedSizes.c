/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042a350
 * Function: Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SwingableWeaponComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SwingableWeaponComponent::SerializeWithCachedSizes
          (SwingableWeaponComponent *this,CodedOutputStream *param_1)

{
  SwingableWeaponComponent *pSVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x44);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x2c),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x38),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x3c),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(6,*(int *)(this + 0x40),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(7,*(int *)(this + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(8,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 9 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(9,*(int *)(this + 0x34),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(10,*(float *)(this + 0x14),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(0xb,*(float *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(0xc,*(float *)(this + 0x1c),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 6 & 1) != 0) {
                    /* catch() { ... } // from try @ 0042a508 with catch @ 0042a4bc */
    google::protobuf::internal::WireFormatLite::WriteFloat(0xd,*(float *)(this + 0x28),param_1);
    uVar2 = *(uint *)(this + 0x44);
  }
  if ((uVar2 >> 5 & 1) != 0) {
                    /* try { // try from 0042a4e0 to 0052a4f3 has its CatchHandler @ 0042a5f8 */
    pSVar1 = *(SwingableWeaponComponent **)PTR_default_instance__007e4b88;
    if (*(long *)(this + 0x20) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (0xe,*(MessageLite **)(pSVar1 + 0x20),param_1);
    return;
  }
  return;
}


