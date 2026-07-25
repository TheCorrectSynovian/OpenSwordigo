/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF064
 * Mangled: _ZN5Caver16ShatterComponentC2Ev
 * Demangled: Caver::ShatterComponent::ShatterComponent(void)
 *
 * Callers: 1
 *   0x00000000001FF910  Caver::ShatterComponent::ShatterComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000002AF070 string=0x00000000002AF074 ""
 *   insn=0x00000000002AF078 string=0x00000000002AF07C "J"
 *   insn=0x00000000002AF080 string=0x00000000002AF084 "a"
 *   insn=0x00000000002AF084 string=0x00000000002AF088 ""
 *   insn=0x00000000002AF088 string=0x00000000002AF08C "H"
 *   insn=0x00000000002AF090 string=0x00000000002AF094 "H"
 *   insn=0x00000000002AF094 string=0x00000000002AF098 "KA"
 *   insn=0x00000000002AF098 string=0x00000000002AF09C "?"
 *   insn=0x00000000002AF0A0 string=0x00000000002AF0A4 ""
 *   insn=0x00000000002AF0A8 string=0x00000000002AF0AC "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::ShatterComponent::ShatterComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  result.n128_u64[0] = (unsigned __int64)&off_6C3E98;
  this[4].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&off_6C3ED8;
  this->n128_u64[0] = (unsigned __int64)off_6C3D80;
  this[5].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[1] = result;
  return result;
}

