/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d2254
 * Function: Caver::Proto::Texture_ConversionInfo::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Texture_ConversionInfo * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_ConversionInfo::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::Texture_ConversionInfo::SerializeWithCachedSizes
          (Texture_ConversionInfo *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(3,*(int *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 2 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteEnum(4,*(int *)(this + 0x14),param_1);
  return;
}


