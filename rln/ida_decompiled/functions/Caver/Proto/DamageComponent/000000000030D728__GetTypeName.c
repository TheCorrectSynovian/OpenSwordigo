/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030D728
 * Mangled: _ZNK5Caver5Proto15DamageComponent11GetTypeNameEv
 * Demangled: Caver::Proto::DamageComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000030D734 string=0x000000000030D738 "S"
 *   insn=0x000000000030D738 string=0x000000000030D73C "i"
 *   insn=0x000000000030D744 string=0x000000000058BD05 "Caver.Proto.DamageComponent"
 *   insn=0x000000000030D754 string=0x000000000030D758 "h"
 *   insn=0x000000000030D778 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::DamageComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.DamageComponent");
}

