/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7294
 * Function: Caver::Proto::GUIViewLayout::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(GUIViewLayout * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::GUIViewLayout::SerializeWithCachedSizes
          (GUIViewLayout *this,CodedOutputStream *param_1)

{
  GUIViewLayout *pGVar1;
  long lVar2;
  
  if (((byte)this[0x58] & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar2 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (2,*(MessageLite **)(*(long *)(this + 0x18) + lVar2 * 8),param_1);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x20));
  }
  if (((byte)this[0x58] >> 2 & 1) == 0) {
    return;
  }
  pGVar1 = *(GUIViewLayout **)PTR_default_instance__007e69d0;
  if (*(long *)(this + 0x50) != 0) {
    pGVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (3,*(MessageLite **)(pGVar1 + 0x50),param_1);
  return;
}


