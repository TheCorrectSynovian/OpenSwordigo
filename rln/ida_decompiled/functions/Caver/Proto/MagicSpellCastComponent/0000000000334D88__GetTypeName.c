/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334D88
 * Mangled: _ZNK5Caver5Proto23MagicSpellCastComponent11GetTypeNameEv
 * Demangled: Caver::Proto::MagicSpellCastComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000334D94 string=0x0000000000334D98 "S"
 *   insn=0x0000000000334D98 string=0x0000000000334D9C "i"
 *   insn=0x0000000000334DA4 string=0x000000000058C5EC "Caver.Proto.MagicSpellCastComponent"
 *   insn=0x0000000000334DB4 string=0x0000000000334DB8 "h"
 *   insn=0x0000000000334DC4 string=0x0000000000334DD8 ">"
 *   insn=0x0000000000334DD8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000334DE0 string=0x0000000000334DE4 ""
 *   insn=0x0000000000334DF0 string=0x0000000000334DF4 "A"
 *   insn=0x0000000000334DF4 string=0x0000000000334DF8 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MagicSpellCastComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MagicSpellCastComponent");
}

