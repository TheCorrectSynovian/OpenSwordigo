/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436a6c
 * Function: Caver::Proto::MagicHookshotComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MagicHookshotComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MagicHookshotComponent::SerializeWithCachedSizes
          (MagicHookshotComponent *this,CodedOutputStream *param_1)

{
  MagicHookshotComponent *pMVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x28);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 4 & 1) != 0) {
                    /* try { // try from 00436afc to 00536aff has its CatchHandler @ 00436b3c */
    pMVar1 = *(MagicHookshotComponent **)PTR_default_instance__007e6b30;
    if (*(long *)(this + 0x20) != 0) {
      pMVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (4,*(MessageLite **)(pMVar1 + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x28);
  }
  if ((uVar2 >> 3 & 1) != 0) {
                    /* try { // try from 00436b20 to 00536b23 has its CatchHandler @ 00436b34 */
                    /* try { // try from 00436b24 to 00536b5f has its CatchHandler @ 00436a9c */
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0x18),param_1);
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00436b24 with catch @ 00436a9c
                       catch(type#1 @ 00000000) { ... } // from try @ 00436b70 with catch @ 00436a9c
                        */
  return;
}


