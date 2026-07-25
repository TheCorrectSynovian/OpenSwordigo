/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281914
 * Mangled: _ZN5Caver24DimensionObjectComponentC2Ev
 * Demangled: Caver::DimensionObjectComponent::DimensionObjectComponent(void)
 *
 * Callers: 1
 *   0x00000000001FCC10  Caver::DimensionObjectComponent::DimensionObjectComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000028191C string=0x0000000000281920 "(#"
 *   insn=0x0000000000281920 string=0x0000000000281924 ""
 *   insn=0x0000000000281924 string=0x0000000000281928 "*#"
 *   insn=0x0000000000281928 string=0x000000000028192C "J"
 *   insn=0x0000000000281930 string=0x0000000000281934 "a"
 *   insn=0x0000000000281934 string=0x0000000000281938 ""
 *   insn=0x0000000000281938 string=0x000000000028193C "H"
 *   insn=0x0000000000281940 string=0x0000000000281944 "H"
 *   insn=0x0000000000281944 string=0x0000000000281948 "KA"
 *   insn=0x0000000000281948 string=0x000000000028194C "?"
 *   insn=0x0000000000281950 string=0x0000000000281954 ""
 *   insn=0x0000000000281958 string=0x000000000028195C "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::DimensionObjectComponent::DimensionObjectComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  result.n128_u64[0] = (unsigned __int64)&off_6BFE68;
  this[4].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&off_6BFEA8;
  this->n128_u64[0] = (unsigned __int64)off_6BFD50;
  this[5].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[1] = result;
  return result;
}

