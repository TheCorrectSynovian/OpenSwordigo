/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322924
 * Mangled: _ZNK5Caver5Proto19SimpleGlowComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SimpleGlowComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000322930 string=0x0000000000322934 "S"
 *   insn=0x0000000000322934 string=0x0000000000322938 "i"
 *   insn=0x000000000032293C string=0x0000000000322940 "A"
 *   insn=0x0000000000322940 string=0x000000000058C10C "Caver.Proto.SimpleGlowComponent"
 *   insn=0x0000000000322950 string=0x0000000000322954 "h"
 *   insn=0x0000000000322960 string=0x0000000000322974 "WN"
 *   insn=0x0000000000322974 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000322978 string=0x000000000032297C "("
 *   insn=0x000000000032297C string=0x0000000000322980 "A@"
 *   insn=0x0000000000322984 string=0x0000000000322988 "A"
 *   insn=0x0000000000322988 string=0x000000000032298C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SimpleGlowComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SimpleGlowComponent");
}

