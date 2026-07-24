/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e31a8
 * Function: google::protobuf::internal::WireFormatLite::WriteMessage
 * Signature: undefined __cdecl WriteMessage(int param_1, MessageLite * param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteMessage(int, google::protobuf::MessageLite
   const&, google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteMessage
               (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
  uint uVar1;
  
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 2);
  uVar1 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
                    /* catch() { ... } // from try @ 005e2db0 with catch @ 005e31dc */
                    /* catch() { ... } // from try @ 005e2d84 with catch @ 005e31e0 */
  io::CodedOutputStream::WriteVarint32(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x005e3200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x50))(param_2,param_3);
  return;
}


