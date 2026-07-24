/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2d7c
 * Function: google::protobuf::internal::WireFormatLite::WriteInt32
 * Signature: undefined __cdecl WriteInt32(int param_1, int param_2, CodedOutputStream * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::WireFormatLite::WriteInt32(int, int,
   google::protobuf::io::CodedOutputStream*) */

void google::protobuf::internal::WireFormatLite::WriteInt32
               (int param_1,int param_2,CodedOutputStream *param_3)

{
                    /* try { // try from 005e2d84 to 006e2d97 has its CatchHandler @ 005e31e0 */
  io::CodedOutputStream::WriteVarint32(param_3,param_1 << 3);
  if (-1 < param_2) {
                    /* try { // try from 005e2da8 to 006e2daf has its CatchHandler @ 005e324c */
                    /* try { // try from 005e2db0 to 006e2dc3 has its CatchHandler @ 005e31dc */
    io::CodedOutputStream::WriteVarint32(param_3,param_2);
    return;
  }
                    /* try { // try from 005e2dc4 to 006e2dd7 has its CatchHandler @ 005e3178 */
  io::CodedOutputStream::WriteVarint64(param_3,(long)param_2);
  return;
}


