/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004225f8
 * Function: Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SimpleGlowComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SimpleGlowComponent::SerializeWithCachedSizes
          (SimpleGlowComponent *this,CodedOutputStream *param_1)

{
  SimpleGlowComponent *pSVar1;
  uint uVar2;
  
                    /* catch() { ... } // from try @ 00422240 with catch @ 00422608 */
  uVar2 = *(uint *)(this + 0x38);
  if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 0042221c with catch @ 00422640 */
                    /* catch() { ... } // from try @ 004221c0 with catch @ 00422644 */
    pSVar1 = *(SimpleGlowComponent **)PTR_default_instance__007e53a8;
    if (*(long *)(this + 0x10) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pSVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x1c),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00422194 with catch @ 004226a0 */
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x34),param_1);
                    /* catch() { ... } // from try @ 00422170 with catch @ 004226d8 */
    uVar2 = *(uint *)(this + 0x38);
  }
                    /* catch() { ... } // from try @ 00422108 with catch @ 004226dc */
  if ((uVar2 >> 4 & 1) != 0) {
    pSVar1 = *(SimpleGlowComponent **)PTR_default_instance__007e53a8;
    if (*(long *)(this + 0x28) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (7,*(MessageLite **)(pSVar1 + 0x28),param_1);
    return;
  }
  return;
}


