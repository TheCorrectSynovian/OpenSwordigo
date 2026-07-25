/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003266A8
 * Mangled: _ZNK5Caver5Proto15AttackComponent11GetTypeNameEv
 * Demangled: Caver::Proto::AttackComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000003266B4 string=0x00000000003266B8 "S"
 *   insn=0x00000000003266B8 string=0x00000000003266BC "i"
 *   insn=0x00000000003266C0 string=0x00000000003266C4 "!"
 *   insn=0x00000000003266C4 string=0x000000000058C24B "Caver.Proto.AttackComponent"
 *   insn=0x00000000003266D0 string=0x00000000003266D4 "9"
 *   insn=0x00000000003266D4 string=0x00000000003266D8 "h"
 *   insn=0x00000000003266F8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000326700 string=0x0000000000326704 ""
 *   insn=0x0000000000326708 string=0x000000000032670C "A"
 *   insn=0x000000000032670C string=0x0000000000326710 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::AttackComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.AttackComponent");
}

