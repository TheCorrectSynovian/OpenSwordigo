/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E96C
 * Mangled: _ZN5Caver19EntityInfoComponentC2Ev
 * Demangled: Caver::EntityInfoComponent::EntityInfoComponent(void)
 *
 * Callers: 1
 *   0x00000000001F8460  Caver::EntityInfoComponent::EntityInfoComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000026E97C string=0x000000000026E980 ""
 *   insn=0x000000000026E980 string=0x000000000026E984 "J"
 *   insn=0x000000000026E988 string=0x000000000026E98C "a"
 *   insn=0x000000000026E98C string=0x000000000026E990 "L"
 *   insn=0x000000000026E990 string=0x000000000026E994 "KA"
 *   insn=0x000000000026E998 string=0x000000000026E99C "J"
 *   insn=0x000000000026E99C string=0x000000000026E9A0 ""
 *   insn=0x000000000026E9A0 string=0x000000000026E9A4 "?"
 *   insn=0x000000000026E9A4 string=0x000000000026E9A8 "@"
 *   insn=0x000000000026E9A8 string=0x000000000026E9AC ""
 *   insn=0x000000000026E9B0 string=0x000000000026E9B4 "\t|"
 *   insn=0x000000000026E9B8 string=0x000000000026E9BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::EntityInfoComponent::EntityInfoComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  result.n128_u64[0] = (unsigned __int64)&off_6BEFB8;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  this[4].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&off_6BEFF8;
  this->n128_u64[0] = (unsigned __int64)off_6BEEA0;
  this[5].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[7].n128_u8[0] = 0;
  this[7].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  this[8].n128_u64[0] = 0;
  this[8].n128_u64[1] = 0;
  this[1] = result;
  this[9].n128_u32[0] = 0;
  return result;
}

