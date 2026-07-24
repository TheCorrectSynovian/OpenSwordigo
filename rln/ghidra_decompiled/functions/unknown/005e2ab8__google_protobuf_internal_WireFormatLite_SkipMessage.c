/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2ab8
 * Function: google::protobuf::internal::WireFormatLite::SkipMessage
 * Signature: undefined __cdecl SkipMessage(CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::SkipMessage(google::protobuf::io::CodedInputStream*)
    */

undefined8 google::protobuf::internal::WireFormatLite::SkipMessage(CodedInputStream *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
      uVar2 = (uint)*pbVar1;
      *(uint *)(param_1 + 0x20) = uVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
    }
    else {
      uVar2 = io::CodedInputStream::ReadTagFallback(param_1);
      *(uint *)(param_1 + 0x20) = uVar2;
    }
    if (uVar2 == 0) {
      return 1;
    }
                    /* try { // try from 005e2b10 to 006e2c4b has its CatchHandler @ 005e2b10
                       catch() { ... } // from try @ 005e2b10 with catch @ 005e2b10
                       catch() { ... } // from try @ 005e304c with catch @ 005e2b10
                       catch() { ... } // from try @ 005e33f8 with catch @ 005e2b10 */
    if ((uVar2 & 7) == 4) {
      return 1;
    }
    uVar3 = SkipField(param_1,uVar2);
  } while ((uVar3 & 1) != 0);
  return 0;
}


