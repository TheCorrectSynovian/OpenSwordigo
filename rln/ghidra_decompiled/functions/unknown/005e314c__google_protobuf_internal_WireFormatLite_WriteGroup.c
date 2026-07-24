/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e314c
 * Function: google::protobuf::internal::WireFormatLite::WriteGroup
 * Signature: undefined __cdecl WriteGroup(int param_1, MessageLite * param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteGroup(int, google::protobuf::MessageLite const&,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteGroup
               (int param_1,MessageLite *param_2,CodedOutputStream *param_3)

{
                    /* catch() { ... } // from try @ 005e2df4 with catch @ 005e3160 */
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 3);
                    /* catch() { ... } // from try @ 005e2dc4 with catch @ 005e3178 */
  (**(code **)(*(long *)param_2 + 0x50))(param_2,param_3);
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 4);
  return;
}


