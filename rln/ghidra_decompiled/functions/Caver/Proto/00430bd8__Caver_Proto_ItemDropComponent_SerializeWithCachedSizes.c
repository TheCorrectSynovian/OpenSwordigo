/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430bd8
 * Function: Caver::Proto::ItemDropComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ItemDropComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ItemDropComponent::SerializeWithCachedSizes
          (ItemDropComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 004309f8 with catch @ 00430bd8
                       catch() { ... } // from try @ 00430a6c with catch @ 00430bd8
                       catch() { ... } // from try @ 00430ba8 with catch @ 00430bd8 */
                    /* try { // try from 00430bdc to 00530c3f has its CatchHandler @ 00430bdc
                       catch() { ... } // from try @ 00430bdc with catch @ 00430bdc
                       catch() { ... } // from try @ 00430c48 with catch @ 00430bdc */
  uVar1 = *(uint *)(this + 0x5c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x5c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x18),param_1);
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar2 = 0;
    do {
                    /* try { // try from 00430c40 to 00530c47 has its CatchHandler @ 00430c6c */
      google::protobuf::internal::WireFormatLite::WriteMessage
                (3,*(MessageLite **)(*(long *)(this + 0x20) + lVar2 * 8),param_1);
                    /* try { // try from 00430c48 to 00530c7f has its CatchHandler @ 00430bdc */
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x28));
  }
  uVar1 = *(uint *)(this + 0x5c);
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(4,(bool)this[0x58],param_1);
                    /* catch() { ... } // from try @ 00430c40 with catch @ 00430c6c */
    uVar1 = *(uint *)(this + 0x5c);
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(5,(bool)this[0x59],param_1);
  return;
}


