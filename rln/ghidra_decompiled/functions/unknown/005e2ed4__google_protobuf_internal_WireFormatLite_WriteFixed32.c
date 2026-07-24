/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2ed4
 * Function: google::protobuf::internal::WireFormatLite::WriteFixed32
 * Signature: undefined __cdecl WriteFixed32(int param_1, uint param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteFixed32(int, unsigned int,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteFixed32
               (int param_1,uint param_2,CodedOutputStream *param_3)

{
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3 | 5);
  io::CodedOutputStream::WriteLittleEndian32(param_3,param_2);
  return;
}


