/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c310
 * Function: Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(WeaponGlowComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::WeaponGlowComponent::SerializeWithCachedSizes
          (WeaponGlowComponent *this,CodedOutputStream *param_1)

{
  WeaponGlowComponent *pWVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x24);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pWVar1 = *(WeaponGlowComponent **)PTR_default_instance__007e5698;
    if (*(long *)(this + 0x10) != 0) {
      pWVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pWVar1 + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
                    /* catch() { ... } // from try @ 0042c008 with catch @ 0042c388 */
  if ((uVar2 >> 2 & 1) != 0) {
    pWVar1 = *(WeaponGlowComponent **)PTR_default_instance__007e5698;
    if (*(long *)(this + 0x18) != 0) {
      pWVar1 = this;
    }
                    /* try { // try from 0042c3ac to 0052c3b3 has its CatchHandler @ 0042c470 */
    google::protobuf::internal::WireFormatLite::WriteMessage
              (3,*(MessageLite **)(pWVar1 + 0x18),param_1);
                    /* try { // try from 0042c3b4 to 0052c45f has its CatchHandler @ 0042bf34 */
    uVar2 = *(uint *)(this + 0x24);
  }
                    /* catch() { ... } // from try @ 0042bf88 with catch @ 0042c3b8 */
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
                    /* catch() { ... } // from try @ 0042bf9c with catch @ 0042c3bc */
  google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x20),param_1);
  return;
}


