/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410274
 * Function: Caver::Proto::LightComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(LightComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::LightComponent::SerializeWithCachedSizes
          (LightComponent *this,CodedOutputStream *param_1)

{
  LightComponent *pLVar1;
  uint uVar2;
  
                    /* catch() { ... } // from try @ 0040e674 with catch @ 00410284 */
  uVar2 = *(uint *)(this + 0x38);
                    /* catch() { ... } // from try @ 0040ecec with catch @ 0041028c
                       catch() { ... } // from try @ 0040ed0c with catch @ 0041028c
                       catch() { ... } // from try @ 0040efb4 with catch @ 0041028c */
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 2 & 1) != 0) {
                    /* catch() { ... } // from try @ 0040eaf4 with catch @ 004102f0 */
    pLVar1 = *(LightComponent **)PTR_default_instance__007e5cc8;
    if (*(long *)(this + 0x18) != 0) {
      pLVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pLVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x24),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 6 & 1) != 0) {
                    /* catch() { ... } // from try @ 0040eae4 with catch @ 0041034c */
    pLVar1 = *(LightComponent **)PTR_default_instance__007e5cc8;
    if (*(long *)(this + 0x30) != 0) {
      pLVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (6,*(MessageLite **)(pLVar1 + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x38);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 0x28),param_1);
    return;
  }
  return;
}


