/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402278
 * Function: Caver::Proto::Scene::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Scene * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */

void __thiscall
Caver::Proto::Scene::SerializeWithCachedSizes(Scene *this,CodedOutputStream *param_1)

{
  Scene *pSVar1;
  uint uVar2;
  long lVar3;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (1,*(MessageLite **)(*(long *)(this + 0x10) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x18));
  }
  uVar2 = *(uint *)(this + 0x98);
  if ((uVar2 >> 2 & 1) != 0) {
    pSVar1 = *(Scene **)PTR_default_instance__007e7a20;
    if (*(long *)(this + 0x80) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pSVar1 + 0x80),param_1);
    uVar2 = *(uint *)(this + 0x98);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pSVar1 = *(Scene **)PTR_default_instance__007e7a20;
    if (*(long *)(this + 0x88) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pSVar1 + 0x88),param_1);
  }
  if (0 < *(int *)(this + 0x50)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (4,*(MessageLite **)(*(long *)(this + 0x48) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x50));
  }
  if (((byte)this[0x98] >> 4 & 1) == 0) {
    return;
  }
  pSVar1 = *(Scene **)PTR_default_instance__007e7a20;
  if (*(long *)(this + 0x90) != 0) {
    pSVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (5,*(MessageLite **)(pSVar1 + 0x90),param_1);
  return;
}


