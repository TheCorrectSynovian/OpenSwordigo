/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00431a0c
 * Function: Caver::Proto::OverlayTextComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(OverlayTextComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::OverlayTextComponent::SerializeWithCachedSizes
          (OverlayTextComponent *this,CodedOutputStream *param_1)

{
  OverlayTextComponent *pOVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x30);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pOVar1 = *(OverlayTextComponent **)PTR_default_instance__007e6838;
    if (*(long *)(this + 0x18) != 0) {
      pOVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pOVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 2 & 1) != 0) {
                    /* try { // try from 00431a90 to 00531aa3 has its CatchHandler @ 00431ee8 */
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x30);
  }
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
                    /* try { // try from 00431ab4 to 00531abf has its CatchHandler @ 00431eb0 */
  pOVar1 = *(OverlayTextComponent **)PTR_default_instance__007e6838;
  if (*(long *)(this + 0x28) != 0) {
    pOVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (4,*(MessageLite **)(pOVar1 + 0x28),param_1);
  return;
}


