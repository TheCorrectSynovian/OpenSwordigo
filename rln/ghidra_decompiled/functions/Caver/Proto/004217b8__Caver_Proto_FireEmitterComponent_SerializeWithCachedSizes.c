/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004217b8
 * Function: Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(FireEmitterComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::FireEmitterComponent::SerializeWithCachedSizes
          (FireEmitterComponent *this,CodedOutputStream *param_1)

{
  FireEmitterComponent *pFVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x40);
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 2 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004217ac with catch @ 00421820
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00421760 with catch @ 00421828
                        */
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(this + 0x18) != 0) {
      pFVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pFVar1 + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
    if (*(long *)(this + 0x28) != 0) {
      pFVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (5,*(MessageLite **)(pFVar1 + 0x28),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x30),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 6 & 1) != 0) {
                    /* try { // try from 004218a8 to 005218b3 has its CatchHandler @ 004218d4 */
    google::protobuf::internal::WireFormatLite::WriteFloat(7,*(float *)(this + 0x34),param_1);
                    /* try { // try from 004218b4 to 005218d7 has its CatchHandler @ 004216fc */
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 7 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004218a8 with catch @ 004218d4
                        */
    pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
                    /* catch() { ... } // from try @ 004218ec with catch @ 004218d8 */
    if (*(long *)(this + 0x38) != 0) {
      pFVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (8,*(MessageLite **)(pFVar1 + 0x38),param_1);
    uVar2 = *(uint *)(this + 0x40);
  }
                    /* try { // try from 004218e8 to 005218eb has its CatchHandler @ 004218fc */
  if ((uVar2 >> 3 & 1) == 0) {
    return;
  }
                    /* try { // try from 004218ec to 0052190f has its CatchHandler @ 004218d8 */
                    /* catch() { ... } // from try @ 004218e8 with catch @ 004218fc */
  pFVar1 = *(FireEmitterComponent **)PTR_default_instance__007e7b98;
  if (*(long *)(this + 0x20) != 0) {
    pFVar1 = this;
  }
                    /* try { // try from 00421910 to 0052192b has its CatchHandler @ 00421910
                       catch() { ... } // from try @ 00421910 with catch @ 00421910
                       catch() { ... } // from try @ 00421930 with catch @ 00421910 */
  google::protobuf::internal::WireFormatLite::WriteMessage
            (9,*(MessageLite **)(pFVar1 + 0x20),param_1);
  return;
}


