/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309F2C
 * Mangled: _ZNK5Caver5Proto23TextureMappingComponent11GetTypeNameEv
 * Demangled: Caver::Proto::TextureMappingComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000309F38 string=0x0000000000309F3C "S"
 *   insn=0x0000000000309F3C string=0x0000000000309F40 "i"
 *   insn=0x0000000000309F48 string=0x000000000058BC83 "Caver.Proto.TextureMappingComponent"
 *   insn=0x0000000000309F58 string=0x0000000000309F5C "h"
 *   insn=0x0000000000309F7C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000309F84 string=0x0000000000309F88 "iG"
 *   insn=0x0000000000309F94 string=0x0000000000309F98 "A"
 *   insn=0x0000000000309F98 string=0x0000000000309F9C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::TextureMappingComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.TextureMappingComponent");
}

