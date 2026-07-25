/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337A0C
 * Mangled: _ZNK5Caver5Proto23DimensionSpellComponent11GetTypeNameEv
 * Demangled: Caver::Proto::DimensionSpellComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000337A18 string=0x0000000000337A1C "S"
 *   insn=0x0000000000337A1C string=0x0000000000337A20 "i"
 *   insn=0x0000000000337A28 string=0x000000000058C6DC "Caver.Proto.DimensionSpellComponent"
 *   insn=0x0000000000337A34 string=0x0000000000337A38 "`"
 *   insn=0x0000000000337A38 string=0x0000000000337A3C "h"
 *   insn=0x0000000000337A5C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000337A60 string=0x0000000000337A64 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::DimensionSpellComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.DimensionSpellComponent");
}

