/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2dc8
 * Function: google::protobuf::internal::WireFormatLite::WriteInt64
 * Signature: undefined __cdecl WriteInt64(int param_1, long param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteInt64(int, long,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteInt64
               (int param_1,long param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3);
                    /* try { // try from 005e2de8 to 006e2df3 has its CatchHandler @ 005e327c */
                    /* try { // try from 005e2df4 to 006e2dfb has its CatchHandler @ 005e3160 */
  io::CodedOutputStream::WriteVarint64(param_3,param_2);
  return;
}


