/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f328
 * Function: Caver::Proto::TouchableComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(TouchableComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::TouchableComponent::SerializeWithCachedSizes
          (TouchableComponent *this,CodedOutputStream *param_1)

{
  TouchableComponent *pTVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x18);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(1,*(float *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x18);
  }
  if ((uVar2 >> 1 & 1) == 0) {
                    /* catch() { ... } // from try @ 0042f394 with catch @ 0042f364 */
    return;
  }
                    /* try { // try from 0042f380 to 0052f393 has its CatchHandler @ 0042f3b8 */
  pTVar1 = *(TouchableComponent **)PTR_default_instance__007e5f98;
  if (*(long *)(this + 0x10) != 0) {
    pTVar1 = this;
  }
                    /* try { // try from 0042f394 to 0052f3bb has its CatchHandler @ 0042f364 */
  google::protobuf::internal::WireFormatLite::WriteMessage
            (2,*(MessageLite **)(pTVar1 + 0x10),param_1);
  return;
}


