/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417384
 * Function: Caver::Proto::ProgramComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ProgramComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ProgramComponent::SerializeWithCachedSizes
          (ProgramComponent *this,CodedOutputStream *param_1)

{
  ProgramComponent *pPVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(1,(bool)this[0xd],param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pPVar1 = *(ProgramComponent **)PTR_default_instance__007e56e8;
    if (*(long *)(this + 0x18) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pPVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(3,(bool)this[0xc],param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 2 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteEnum(4,*(int *)(this + 0x10),param_1);
  return;
}


