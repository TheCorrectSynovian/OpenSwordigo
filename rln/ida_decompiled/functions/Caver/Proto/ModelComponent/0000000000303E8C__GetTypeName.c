/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303E8C
 * Mangled: _ZNK5Caver5Proto14ModelComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ModelComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000303E98 string=0x0000000000303E9C "S"
 *   insn=0x0000000000303E9C string=0x0000000000303EA0 "i"
 *   insn=0x0000000000303EA4 string=0x0000000000303EA8 "A"
 *   insn=0x0000000000303EA8 string=0x000000000058BB83 "Caver.Proto.ModelComponent"
 *   insn=0x0000000000303EB4 string=0x0000000000303EB8 "@"
 *   insn=0x0000000000303EB8 string=0x0000000000303EBC "h"
 *   insn=0x0000000000303EDC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000303EE0 string=0x0000000000303EE4 "("
 *   insn=0x0000000000303EE4 string=0x0000000000303EE8 ""
 *   insn=0x0000000000303EEC string=0x0000000000303EF0 "\t"
 *   insn=0x0000000000303EF0 string=0x0000000000303EF4 ")ID"
 *   insn=0x0000000000303EF4 string=0x0000000000303EF8 "A"
 *   insn=0x0000000000303EFC string=0x0000000000303F00 ""
 *   insn=0x0000000000303F00 string=0x0000000000303F04 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ModelComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ModelComponent");
}

