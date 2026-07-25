/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023AA6C
 * Mangled: _ZN5Caver19SpawnPointComponentC2Ev
 * Demangled: Caver::SpawnPointComponent::SpawnPointComponent(void)
 *
 * Callers: 1
 *   0x00000000001FC9C0  Caver::SpawnPointComponent::SpawnPointComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x000000000023AA74 string=0x000000000023AA78 "H%"
 *   insn=0x000000000023AA78 string=0x000000000023AA7C ""
 *   insn=0x000000000023AA80 string=0x000000000023AA84 "J%"
 *   insn=0x000000000023AA84 string=0x000000000023AA88 "J"
 *   insn=0x000000000023AA88 string=0x000000000023AA8C "a"
 *   insn=0x000000000023AA90 string=0x000000000023AA94 ""
 *   insn=0x000000000023AA94 string=0x000000000023AA98 "HA"
 *   insn=0x000000000023AA98 string=0x000000000023AA9C "?"
 *   insn=0x000000000023AA9C string=0x000000000023AAA0 ""
 *   insn=0x000000000023AAA0 string=0x000000000023AAA4 "H"
 *   insn=0x000000000023AAA8 string=0x000000000023AAAC "J"
 *   insn=0x000000000023AAB0 string=0x000000000023AAB4 "@"
 *   insn=0x000000000023AAB4 string=0x000000000023AAB8 "\t|"
 *   insn=0x000000000023AAB8 string=0x000000000023AABC "|"
 *   insn=0x000000000023AABC string=0x000000000023AAC0 "\t,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::SpawnPointComponent::SpawnPointComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[5].n128_u64[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  this[4].n128_u64[1] = 0;
  this->n128_u64[0] = (unsigned __int64)off_6BB9B0;
  result.n128_u64[0] = (unsigned __int64)&off_6BBAC8;
  result.n128_u64[1] = (unsigned __int64)&off_6BBB08;
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[7].n128_u64[0] = 1;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[1] = result;
  this[7].n128_u64[1] = 0;
  return result;
}

