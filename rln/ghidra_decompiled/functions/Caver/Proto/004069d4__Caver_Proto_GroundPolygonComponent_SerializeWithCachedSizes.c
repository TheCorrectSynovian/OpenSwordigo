/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004069d4
 * Function: Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(GroundPolygonComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::GroundPolygonComponent::SerializeWithCachedSizes
          (GroundPolygonComponent *this,CodedOutputStream *param_1)

{
  GroundPolygonComponent *pGVar1;
  uint uVar2;
  long lVar3;
  
  if (0 < *(int *)(this + 0x20)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (1,*(MessageLite **)(*(long *)(this + 0x18) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x20));
  }
  uVar2 = *(uint *)(this + 0x6c);
  if ((uVar2 >> 2 & 1) != 0) {
    pGVar1 = *(GroundPolygonComponent **)PTR_default_instance__007e5920;
    if (*(long *)(this + 0x50) != 0) {
      pGVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pGVar1 + 0x50),param_1);
    uVar2 = *(uint *)(this + 0x6c);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0x58],param_1);
    uVar2 = *(uint *)(this + 0x6c);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x5c),param_1);
    uVar2 = *(uint *)(this + 0x6c);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x60),param_1);
    uVar2 = *(uint *)(this + 0x6c);
  }
  if ((uVar2 & 1) != 0) {
    pGVar1 = *(GroundPolygonComponent **)PTR_default_instance__007e5920;
    if (*(long *)(this + 0x10) != 0) {
      pGVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (6,*(MessageLite **)(pGVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x6c);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 100),param_1);
    uVar2 = *(uint *)(this + 0x6c);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(8,(bool)this[0x68],param_1);
    return;
  }
  return;
}


