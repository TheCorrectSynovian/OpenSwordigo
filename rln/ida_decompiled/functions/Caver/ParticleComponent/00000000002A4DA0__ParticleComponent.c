/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4DA0
 * Mangled: _ZN5Caver17ParticleComponentC2Ev
 * Demangled: Caver::ParticleComponent::ParticleComponent(void)
 *
 * Callers: 1
 *   0x00000000001F7F80  Caver::ParticleComponent::ParticleComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002A4DA8 string=0x00000000002A4DAC """
 *   insn=0x00000000002A4DAC string=0x00000000002A4DB0 ""
 *   insn=0x00000000002A4DB4 string=0x00000000002A4DB8 "\n""
 *   insn=0x00000000002A4DB8 string=0x00000000002A4DBC "J)D"
 *   insn=0x00000000002A4DC0 string=0x00000000002A4DC4 "a"
 *   insn=0x00000000002A4DC4 string=0x00000000002A4DC8 ""
 *   insn=0x00000000002A4DC8 string=0x00000000002A4DCC "KA"
 *   insn=0x00000000002A4DCC string=0x00000000002A4DD0 "?"
 *   insn=0x00000000002A4DD0 string=0x00000000002A4DD4 ""
 *   insn=0x00000000002A4DD4 string=0x00000000002A4DD8 "K"
 *   insn=0x00000000002A4DD8 string=0x00000000002A4DDC "`"
 *   insn=0x00000000002A4DDC string=0x00000000002A4DE0 "J"
 *   insn=0x00000000002A4DE4 string=0x00000000002A4DE8 "@"
 *   insn=0x00000000002A4DF0 string=0x00000000002A4DF4 "\t"
 *   insn=0x00000000002A4DF8 string=0x00000000002A4DFC "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::ParticleComponent::ParticleComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[5].n128_u64[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  this[4].n128_u64[1] = 0;
  this->n128_u64[0] = (unsigned __int64)off_6C33B0;
  result.n128_u64[0] = (unsigned __int64)&off_6C34C8;
  result.n128_u64[1] = (unsigned __int64)&off_6C3508;
  this[6].n128_u64[1] = 0;
  this[7].n128_u64[0] = (unsigned __int64)&byte_6FD2F8;
  this[7].n128_u64[1] = 0;
  this[8].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[1] = result;
  this[8].n128_u64[1] = 0xFFFFFFFF00000000LL;
  return result;
}

