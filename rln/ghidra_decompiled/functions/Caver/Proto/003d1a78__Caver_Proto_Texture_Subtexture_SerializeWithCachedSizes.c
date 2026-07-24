/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d1a78
 * Function: Caver::Proto::Texture_Subtexture::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Texture_Subtexture * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_Subtexture::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::Texture_Subtexture::SerializeWithCachedSizes
          (Texture_Subtexture *this,CodedOutputStream *param_1)

{
  Texture_Subtexture *pTVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x24);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pTVar1 = *(Texture_Subtexture **)PTR_default_instance__007e6858;
    if (*(long *)(this + 0x18) != 0) {
      pTVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pTVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x20),param_1);
    return;
  }
  return;
}


