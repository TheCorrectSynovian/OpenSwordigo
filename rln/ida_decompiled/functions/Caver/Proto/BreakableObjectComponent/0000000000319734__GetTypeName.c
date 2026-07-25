/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319734
 * Mangled: _ZNK5Caver5Proto24BreakableObjectComponent11GetTypeNameEv
 * Demangled: Caver::Proto::BreakableObjectComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000319740 string=0x0000000000319744 "S"
 *   insn=0x0000000000319744 string=0x0000000000319748 "i"
 *   insn=0x0000000000319750 string=0x000000000058BF7A "Caver.Proto.BreakableObjectComponent"
 *   insn=0x0000000000319760 string=0x0000000000319764 "h"
 *   insn=0x0000000000319784 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000319788 string=0x000000000031978C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::BreakableObjectComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.BreakableObjectComponent");
}

