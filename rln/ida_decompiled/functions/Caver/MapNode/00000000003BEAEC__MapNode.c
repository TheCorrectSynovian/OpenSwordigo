/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BEAEC
 * Mangled: _ZN5Caver7MapNodeC2Ev
 * Demangled: Caver::MapNode::MapNode(void)
 *
 * Callers: 1
 *   0x00000000001F6D00  Caver::MapNode::MapNode(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003BEAEC string=0x00000000003BEAF0 "("
 *   insn=0x00000000003BEAF0 string=0x00000000003BEAF4 ""
 *   insn=0x00000000003BEB00 string=0x00000000003BEB04 "a"
 *   insn=0x00000000003BEB20 string=0x00000000003BEB24 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall Caver::MapNode::MapNode(int64x2_t *this)
{
  int64x2_t result; // q0

  this->n128_u64[1] = 0;
  this[2].n128_u32[0] = 0;
  this[5].n128_u64[0] = 0;
  this[5].n128_u32[2] = 0;
  result = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  this[5].n128_u8[12] = 0;
  this[3].n128_u64[1] = 0;
  this[4].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u64[0] = 0;
  this[4].n128_u8[8] = 0;
  this[6].n128_u8[8] = 0;
  this[6].n128_u32[3] = 0;
  this[6].n128_u64[0] = (unsigned __int64)&byte_6FD2F8;
  this[1] = result;
  this[7].n128_u8[0] = 0;
  return result;
}

