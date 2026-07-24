/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d3e80
 * Function: Caver::Proto::Font_Glyph::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Font_Glyph * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::Font_Glyph::SerializeWithCachedSizes(Font_Glyph *this,CodedOutputStream *param_1)

{
  Font_Glyph *pFVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x28);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pFVar1 = *(Font_Glyph **)PTR_default_instance__007e5b90;
    if (*(long *)(this + 0x10) != 0) {
      pFVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pFVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
  pFVar1 = *(Font_Glyph **)PTR_default_instance__007e5b90;
  if (*(long *)(this + 0x20) != 0) {
    pFVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (4,*(MessageLite **)(pFVar1 + 0x20),param_1);
  return;
}


