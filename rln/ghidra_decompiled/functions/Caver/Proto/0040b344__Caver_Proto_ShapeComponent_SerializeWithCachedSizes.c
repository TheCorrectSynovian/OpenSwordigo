/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040b344
 * Function: Caver::Proto::ShapeComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ShapeComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ShapeComponent::SerializeWithCachedSizes
          (ShapeComponent *this,CodedOutputStream *param_1)

{
  ShapeComponent *pSVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x28);
  if ((uVar2 & 1) != 0) {
    pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
    if (*(long *)(this + 0x10) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (1,*(MessageLite **)(pSVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
    if (*(long *)(this + 0x18) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pSVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pSVar1 = *(ShapeComponent **)PTR_default_instance__007e7b10;
    if (*(long *)(this + 0x20) != 0) {
      pSVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pSVar1 + 0x20),param_1);
    return;
  }
  return;
}


