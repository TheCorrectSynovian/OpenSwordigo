/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042dd0c
 * Function: Caver::Proto::SpawnPointComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SpawnPointComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SpawnPointComponent::SerializeWithCachedSizes
          (SpawnPointComponent *this,CodedOutputStream *param_1)

{
  SpawnPointComponent *pSVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x18);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x18);
  }
  if ((uVar2 >> 1 & 1) == 0) {
                    /* catch() { ... } // from try @ 0042d290 with catch @ 0042dd44 */
    return;
  }
  pSVar1 = *(SpawnPointComponent **)PTR_default_instance__007e5048;
  if (*(long *)(this + 0x10) != 0) {
    pSVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (2,*(MessageLite **)(pSVar1 + 0x10),param_1);
  return;
}


