/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AB7C
 * Mangled: _ZN5Caver13ManaComponentC2Ev
 * Demangled: Caver::ManaComponent::ManaComponent(void)
 *
 * Callers: 1
 *   0x0000000000203B60  Caver::ManaComponent::ManaComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000027AB84 string=0x000000000027AB88 "H#"
 *   insn=0x000000000027AB88 string=0x000000000027AB8C ""
 *   insn=0x000000000027AB8C string=0x000000000027AB90 "J#"
 *   insn=0x000000000027AB90 string=0x000000000027AB94 "JQE"
 *   insn=0x000000000027AB98 string=0x000000000027AB9C "a"
 *   insn=0x000000000027AB9C string=0x000000000027ABA0 ""
 *   insn=0x000000000027ABA0 string=0x000000000027ABA4 "H"
 *   insn=0x000000000027ABA8 string=0x000000000027ABAC "H"
 *   insn=0x000000000027ABAC string=0x000000000027ABB0 "KA"
 *   insn=0x000000000027ABB0 string=0x000000000027ABB4 "?"
 *   insn=0x000000000027ABB8 string=0x000000000027ABBC ""
 *   insn=0x000000000027ABC8 string=0x000000000027ABCC "\t0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::ManaComponent::ManaComponent(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[3].n128_u8[0] = 0;
  this[3].n128_u64[1] = (unsigned __int64)&byte_6FD2F8;
  result.n128_u64[0] = (unsigned __int64)&off_6BF728;
  this[4].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&off_6BF768;
  this->n128_u64[0] = (unsigned __int64)off_6BF610;
  this[5].n128_u64[0] = 0;
  this[5].n128_u64[1] = (unsigned __int64)&this[4].n128_u64[1];
  this[6].n128_u64[1] = 0;
  this[7].n128_u64[0] = 0;
  this[7].n128_u64[1] = 0;
  this[6].n128_u64[0] = (unsigned __int64)&this[4].n128_u64[1];
  this[1] = result;
  this[8].n128_u32[0] = 0;
  return result;
}

