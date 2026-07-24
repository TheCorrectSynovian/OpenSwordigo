/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fecc0
 * Function: Caver::Proto::SceneObject::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SceneObject * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SceneObject::SerializeWithCachedSizes(SceneObject *this,CodedOutputStream *param_1)

{
  SceneObject *pSVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0x88);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x18),param_1);
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (3,*(MessageLite **)(*(long *)(this + 0x20) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x28));
  }
  uVar2 = *(uint *)(this + 0x88);
  if ((uVar2 >> 3 & 1) != 0) {
    pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
    if (*(long *)(this + 0x58) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (4,*(MessageLite **)(pSVar1 + 0x58),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x60),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 100),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 0x68),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
    if (*(long *)(this + 0x70) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (8,*(MessageLite **)(pSVar1 + 0x70),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(9,(bool)this[0x78],param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 9 & 1) != 0) {
    pSVar1 = *(SceneObject **)PTR_default_instance__007e7da8;
    if (*(long *)(this + 0x80) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (10,*(MessageLite **)(pSVar1 + 0x80),param_1);
    return;
  }
  return;
}


