/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e537c
 * Function: google::protobuf::io::CodedOutputStream::VarintSize32Fallback
 * Signature: undefined __cdecl VarintSize32Fallback(uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedOutputStream::VarintSize32Fallback(unsigned int) */

undefined4 google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x80) {
                    /* try { // try from 005e5388 to 006e53af has its CatchHandler @ 005e5e38 */
    return 1;
  }
  if (param_1 < 0x4000) {
    return 2;
  }
  if (param_1 < 0x200000) {
    return 3;
  }
  uVar1 = 4;
  if (param_1 >> 0x1c != 0) {
    uVar1 = 5;
  }
  return uVar1;
}


