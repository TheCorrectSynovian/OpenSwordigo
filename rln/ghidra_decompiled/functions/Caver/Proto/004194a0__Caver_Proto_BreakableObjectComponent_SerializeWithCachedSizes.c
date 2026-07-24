/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004194a0
 * Function: Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(BreakableObjectComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::BreakableObjectComponent::SerializeWithCachedSizes
          (BreakableObjectComponent *this,CodedOutputStream *param_1)

{
  BreakableObjectComponent *pBVar1;
  uint uVar2;
  
                    /* catch() { ... } // from try @ 00418438 with catch @ 004194a0 */
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(1,(bool)this[0xc],param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
                    /* catch() { ... } // from try @ 0041840c with catch @ 004194fc */
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(3,*(int *)(this + 0x14),param_1);
    uVar2 = *(uint *)(this + 0x20);
  }
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
                    /* catch() { ... } // from try @ 004183e8 with catch @ 00419534 */
  pBVar1 = *(BreakableObjectComponent **)PTR_default_instance__007e6f48;
                    /* catch() { ... } // from try @ 0041838c with catch @ 00419538 */
  if (*(long *)(this + 0x18) != 0) {
    pBVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (4,*(MessageLite **)(pBVar1 + 0x18),param_1);
  return;
}


