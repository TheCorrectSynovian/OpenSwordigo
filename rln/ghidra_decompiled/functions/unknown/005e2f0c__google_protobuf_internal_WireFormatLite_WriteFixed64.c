/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2f0c
 * Function: google::protobuf::internal::WireFormatLite::WriteFixed64
 * Signature: undefined __cdecl WriteFixed64(int param_1, ulong param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteFixed64(int, unsigned long,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteFixed64
               (int param_1,ulong param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 1);
                    /* try { // try from 005e2f40 to 006e2f4b has its CatchHandler @ 005e3110 */
  io::CodedOutputStream::WriteLittleEndian64(param_3,param_2);
  return;
}


