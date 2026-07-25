/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236D0C
 * Mangled: _ZN5Caver14ShapeComponentC2Ev
 * Demangled: Caver::ShapeComponent::ShapeComponent(void)
 *
 * Callers: 1
 *   0x00000000001FA8A0  Caver::ShapeComponent::ShapeComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x0000000000236D14 string=0x0000000000236D18 "h%"
 *   insn=0x0000000000236D18 string=0x0000000000236D1C ""
 *   insn=0x0000000000236D20 string=0x0000000000236D24 "J\tE"
 *   insn=0x0000000000236D28 string=0x0000000000236D2C "a"
 *   insn=0x0000000000236D2C string=0x0000000000236D30 ""
 *   insn=0x0000000000236D30 string=0x0000000000236D34 "H!"
 *   insn=0x0000000000236D38 string=0x0000000000236D3C "H!"
 *   insn=0x0000000000236D3C string=0x0000000000236D40 "KA"
 *   insn=0x0000000000236D40 string=0x0000000000236D44 "?"
 *   insn=0x0000000000236D48 string=0x0000000000236D4C ""
 *   insn=0x0000000000236D50 string=0x0000000000236D54 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::ShapeComponent::ShapeComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  result.n128_u64[0] = (unsigned __int64)&off_6BB6E8;
  this[4].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&off_6BB728;
  this->n128_u64[0] = (unsigned __int64)off_6BB5B0;
  this[5].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[7].n128_u32[0] = 0;
  this[1] = result;
  this[7].n128_u64[1] = 0;
  this[8].n128_u64[0] = 0;
  return result;
}

