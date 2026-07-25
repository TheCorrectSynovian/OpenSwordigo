/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337718
 * Mangled: _ZNK5Caver5Proto24DimensionObjectComponent11GetTypeNameEv
 * Demangled: Caver::Proto::DimensionObjectComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000337724 string=0x0000000000337728 "S"
 *   insn=0x0000000000337728 string=0x000000000033772C "i"
 *   insn=0x0000000000337734 string=0x000000000058C6B7 "Caver.Proto.DimensionObjectComponent"
 *   insn=0x0000000000337744 string=0x0000000000337748 "h"
 *   insn=0x0000000000337768 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033776C string=0x0000000000337770 "h"
 *   insn=0x0000000000337770 string=0x0000000000337774 "uB"
 *   insn=0x0000000000337774 string=0x0000000000337778 "A"
 *   insn=0x0000000000337778 string=0x000000000033777C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::DimensionObjectComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.DimensionObjectComponent");
}

