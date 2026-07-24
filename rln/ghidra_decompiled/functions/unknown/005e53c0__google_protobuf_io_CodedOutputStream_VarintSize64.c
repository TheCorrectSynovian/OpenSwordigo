/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e53c0
 * Function: google::protobuf::io::CodedOutputStream::VarintSize64
 * Signature: undefined __cdecl VarintSize64(ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::VarintSize64(unsigned long) */

int google::protobuf::io::CodedOutputStream::VarintSize64(ulong param_1)

{
  int iVar1;
  
  if (param_1 >> 0x23 != 0) {
    if (param_1 >> 0x2a == 0) {
      return 6;
    }
                    /* try { // try from 005e53fc to 006e5417 has its CatchHandler @ 005e5f00 */
    if (param_1 >> 0x31 == 0) {
      return 7;
    }
    if (param_1 >> 0x38 == 0) {
      return 8;
    }
    return 9 - (int)((long)param_1 >> 0x3f);
  }
  if (param_1 < 0x80) {
                    /* try { // try from 005e53d0 to 006e53d3 has its CatchHandler @ 005e5954 */
    return 1;
  }
  if (param_1 < 0x4000) {
                    /* try { // try from 005e53f4 to 006e53f7 has its CatchHandler @ 005e5950 */
    return 2;
  }
  if (param_1 < 0x200000) {
    return 3;
  }
  iVar1 = 4;
                    /* try { // try from 005e5434 to 006e543b has its CatchHandler @ 005e5b80 */
  if (param_1 >> 0x1c != 0) {
    iVar1 = 5;
  }
  return iVar1;
}


