/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433010
 * Function: Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MagicBoltComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MagicBoltComponent::SerializeWithCachedSizes
          (MagicBoltComponent *this,CodedOutputStream *param_1)

{
  MagicBoltComponent *pMVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x24);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 1 & 1) != 0) {
                    /* try { // try from 00433060 to 00533073 has its CatchHandler @ 00433098 */
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x24);
                    /* try { // try from 00433074 to 0053309b has its CatchHandler @ 00433044 */
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00433060 with catch @ 00433098 */
    pMVar1 = *(MagicBoltComponent **)PTR_default_instance__007e4db8;
    if (*(long *)(this + 0x18) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (4,*(MessageLite **)(pMVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x24);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x20),param_1);
    return;
  }
                    /* catch() { ... } // from try @ 00433074 with catch @ 00433044 */
  return;
}


