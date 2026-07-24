/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00400e74
 * Function: Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SceneObjectGroup * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SceneObjectGroup::SerializeWithCachedSizes
          (SceneObjectGroup *this,CodedOutputStream *param_1)

{
  SceneObjectGroup *pSVar1;
  uint uVar2;
  long lVar3;
  
  if (((byte)this[0x60] & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteString
                (2,*(string **)(*(long *)(this + 0x18) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x20));
  }
  uVar2 = *(uint *)(this + 0x60);
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0x50],param_1);
    uVar2 = *(uint *)(this + 0x60);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    pSVar1 = *(SceneObjectGroup **)PTR_default_instance__007e48f0;
    if (*(long *)(this + 0x58) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (4,*(MessageLite **)(pSVar1 + 0x58),param_1);
    uVar2 = *(uint *)(this + 0x60);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(5,(bool)this[0x52],param_1);
    uVar2 = *(uint *)(this + 0x60);
  }
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(6,(bool)this[0x51],param_1);
  return;
}


