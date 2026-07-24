/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d3160
 * Function: Caver::Proto::Texture::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Texture * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::Texture::SerializeWithCachedSizes(Texture *this,CodedOutputStream *param_1)

{
  Texture *pTVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0x68);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x68);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(2,*(int *)(this + 0x18),param_1);
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (3,*(MessageLite **)(*(long *)(this + 0x20) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x28));
  }
  uVar2 = *(uint *)(this + 0x68);
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(4,*(int *)(this + 0x58),param_1);
    uVar2 = *(uint *)(this + 0x68);
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return;
  }
  pTVar1 = *(Texture **)PTR_default_instance__007e7970;
  if (*(long *)(this + 0x60) != 0) {
    pTVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (5,*(MessageLite **)(pTVar1 + 0x60),param_1);
  return;
}


