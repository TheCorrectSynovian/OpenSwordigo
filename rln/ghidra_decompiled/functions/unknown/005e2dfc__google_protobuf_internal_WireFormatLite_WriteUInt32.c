/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2dfc
 * Function: google::protobuf::internal::WireFormatLite::WriteUInt32
 * Signature: undefined __cdecl WriteUInt32(int param_1, uint param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteUInt32(int, unsigned int,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteUInt32
               (int param_1,uint param_2,CodedOutputStream *param_3)

{
                    /* try { // try from 005e2dfc to 006e2e83 has its CatchHandler @ 005e327c */
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3);
  io::CodedOutputStream::WriteVarint32(param_3,param_2);
  return;
}


