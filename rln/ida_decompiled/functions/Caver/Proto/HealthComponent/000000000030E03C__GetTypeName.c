/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030E03C
 * Mangled: _ZNK5Caver5Proto15HealthComponent11GetTypeNameEv
 * Demangled: Caver::Proto::HealthComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000030E048 string=0x000000000030E04C "S"
 *   insn=0x000000000030E04C string=0x000000000030E050 "i"
 *   insn=0x000000000030E058 string=0x000000000058BD21 "Caver.Proto.HealthComponent"
 *   insn=0x000000000030E068 string=0x000000000030E06C "h"
 *   insn=0x000000000030E08C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030E094 string=0x000000000030E098 ""
 *   insn=0x000000000030E0A0 string=0x000000000030E0A4 ")"
 *   insn=0x000000000030E0A4 string=0x000000000030E0A8 "A"
 *   insn=0x000000000030E0A8 string=0x000000000030E0AC ""
 *   insn=0x000000000030E0B0 string=0x000000000030E0B4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::HealthComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.HealthComponent");
}

