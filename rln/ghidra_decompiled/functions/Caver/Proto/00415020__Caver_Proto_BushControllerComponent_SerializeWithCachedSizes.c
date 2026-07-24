/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415020
 * Function: Caver::Proto::BushControllerComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(BushControllerComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::BushControllerComponent::SerializeWithCachedSizes
          (BushControllerComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
                    /* catch() { ... } // from try @ 00414f84 with catch @ 0041502c */
  uVar1 = *(uint *)(this + 0x18);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 00415050 to 00515077 has its CatchHandler @ 00415080 */
    google::protobuf::internal::WireFormatLite::WriteInt32(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x18);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(2,*(int *)(this + 0x10),param_1);
                    /* try { // try from 00415078 to 0051508f has its CatchHandler @ 00414ed4 */
    uVar1 = *(uint *)(this + 0x18);
  }
  if ((uVar1 >> 2 & 1) != 0) {
                    /* catch() { ... } // from try @ 00415050 with catch @ 00415080 */
                    /* catch() { ... } // from try @ 00414f1c with catch @ 00415084 */
                    /* try { // try from 00415090 to 00515093 has its CatchHandler @ 00415094 */
                    /* catch() { ... } // from try @ 00415090 with catch @ 00415094 */
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x14),param_1);
    return;
  }
  return;
}


