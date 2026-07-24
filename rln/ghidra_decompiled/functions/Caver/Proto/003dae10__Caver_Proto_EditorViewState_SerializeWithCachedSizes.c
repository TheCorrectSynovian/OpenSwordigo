/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dae10
 * Function: Caver::Proto::EditorViewState::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(EditorViewState * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::EditorViewState::SerializeWithCachedSizes
          (EditorViewState *this,CodedOutputStream *param_1)

{
  EditorViewState *pEVar1;
  uint uVar2;
  long lVar3;
  
  if (0 < *(int *)(this + 0x20)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteString
                (1,*(string **)(*(long *)(this + 0x18) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x20));
  }
  uVar2 = *(uint *)(this + 0x78);
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x50),param_1);
    uVar2 = *(uint *)(this + 0x78);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x58),param_1);
    uVar2 = *(uint *)(this + 0x78);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(4,*(int *)(this + 0x60),param_1);
    uVar2 = *(uint *)(this + 0x78);
  }
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(5,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x78);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    pEVar1 = *(EditorViewState **)PTR_default_instance__007e4cc8;
    if (*(long *)(this + 0x68) != 0) {
      pEVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (6,*(MessageLite **)(pEVar1 + 0x68),param_1);
    uVar2 = *(uint *)(this + 0x78);
  }
  if ((uVar2 >> 6 & 1) == 0) {
    return;
  }
  pEVar1 = *(EditorViewState **)PTR_default_instance__007e4cc8;
  if (*(long *)(this + 0x70) != 0) {
    pEVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (7,*(MessageLite **)(pEVar1 + 0x70),param_1);
  return;
}


