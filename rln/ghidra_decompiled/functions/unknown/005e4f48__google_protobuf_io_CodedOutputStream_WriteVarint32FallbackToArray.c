/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e4f48
 * Function: google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray
 * Signature: undefined __cdecl WriteVarint32FallbackToArray(uint param_1, uchar * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(unsigned int, unsigned
   char*) */

uchar * google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray
                  (uint param_1,uchar *param_2)

{
  *param_2 = (byte)param_1 | 0x80;
  if (param_1 < 0x80) {
    *param_2 = (byte)param_1 & 0x7f;
    return param_2 + 1;
  }
  param_2[1] = (byte)(param_1 >> 7) | 0x80;
  if (param_1 < 0x4000) {
                    /* try { // try from 005e4fb8 to 006e5003 has its CatchHandler @ 005e4fb8
                       catch() { ... } // from try @ 005e4fb8 with catch @ 005e4fb8
                       catch() { ... } // from try @ 005e5784 with catch @ 005e4fb8
                       catch() { ... } // from try @ 005e60e4 with catch @ 005e4fb8 */
    param_2[1] = (byte)(param_1 >> 7) & 0x7f;
    return param_2 + 2;
  }
  param_2[2] = (byte)(param_1 >> 0xe) | 0x80;
  if (param_1 < 0x200000) {
    param_2[2] = (byte)(param_1 >> 0xe) & 0x7f;
    return param_2 + 3;
  }
  param_2[3] = (byte)(param_1 >> 0x15) | 0x80;
  if (param_1 >> 0x1c != 0) {
    param_2[4] = (byte)(param_1 >> 0x1c);
    return param_2 + 5;
  }
  param_2[3] = (byte)(param_1 >> 0x15) & 0x7f;
  return param_2 + 4;
}


