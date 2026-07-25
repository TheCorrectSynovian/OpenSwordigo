/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236564
 * Mangled: _ZN5Caver21ShadowVolumeComponentC2Ev
 * Demangled: Caver::ShadowVolumeComponent::ShadowVolumeComponent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000023656C string=0x0000000000236570 "h%"
 *   insn=0x0000000000236570 string=0x0000000000236574 ""
 *   insn=0x0000000000236574 string=0x0000000000236578 "j%"
 *   insn=0x0000000000236578 string=0x000000000023657C "J"
 *   insn=0x0000000000236580 string=0x0000000000236584 "a"
 *   insn=0x0000000000236584 string=0x0000000000236588 ""
 *   insn=0x0000000000236588 string=0x000000000023658C "H"
 *   insn=0x0000000000236590 string=0x0000000000236594 "H"
 *   insn=0x0000000000236594 string=0x0000000000236598 "KA"
 *   insn=0x0000000000236598 string=0x000000000023659C "?"
 *   insn=0x00000000002365A0 string=0x00000000002365A4 ""
 *   insn=0x00000000002365B4 string=0x00000000002365B8 "\t0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::ShadowVolumeComponent::ShadowVolumeComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  result.n128_u64[0] = (unsigned __int64)&off_6BB528;
  this[4].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&off_6BB568;
  this->n128_u64[0] = (unsigned __int64)off_6BB410;
  this[5].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[7].n128_u64[0] = 0;
  this[8].n128_u64[1] = 0;
  this[7].n128_u64[1] = 0;
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[1] = result;
  this[8].n128_u32[0] = 0;
  return result;
}

