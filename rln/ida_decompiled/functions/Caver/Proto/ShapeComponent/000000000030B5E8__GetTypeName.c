/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030B5E8
 * Mangled: _ZNK5Caver5Proto14ShapeComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ShapeComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000030B5F4 string=0x000000000030B5F8 "S"
 *   insn=0x000000000030B5F8 string=0x000000000030B5FC "i"
 *   insn=0x000000000030B604 string=0x000000000058BCC6 "Caver.Proto.ShapeComponent"
 *   insn=0x000000000030B610 string=0x000000000030B614 "im\t"
 *   insn=0x000000000030B614 string=0x000000000030B618 "h"
 *   insn=0x000000000030B624 string=0x000000000030B638 "&"
 *   insn=0x000000000030B638 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ShapeComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ShapeComponent");
}

