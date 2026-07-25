/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032CC38
 * Mangled: _ZNK5Caver5Proto20WeaponTrailComponent11GetTypeNameEv
 * Demangled: Caver::Proto::WeaponTrailComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000032CC44 string=0x000000000032CC48 "S"
 *   insn=0x000000000032CC48 string=0x000000000032CC4C "i"
 *   insn=0x000000000032CC54 string=0x000000000058C460 "Caver.Proto.WeaponTrailComponent"
 *   insn=0x000000000032CC64 string=0x000000000032CC68 "h"
 *   insn=0x000000000032CC88 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032CC90 string=0x000000000032CC94 ""
 *   insn=0x000000000032CC9C string=0x000000000032CCA0 ")5E"
 *   insn=0x000000000032CCA4 string=0x000000000032CCA8 "JQA"
 *   insn=0x000000000032CCA8 string=0x000000000032CCAC "A"
 *   insn=0x000000000032CCAC string=0x000000000032CCB0 " "
 *   insn=0x000000000032CCB4 string=0x000000000032CCB8 "@"
 *   insn=0x000000000032CCB8 string=0x000000000032CCBC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::WeaponTrailComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.WeaponTrailComponent");
}

