/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031CAF8
 * Mangled: _ZNK5Caver5Proto19PropertiesComponent11GetTypeNameEv
 * Demangled: Caver::Proto::PropertiesComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000031CB04 string=0x000000000031CB08 "S"
 *   insn=0x000000000031CB08 string=0x000000000031CB0C "i"
 *   insn=0x000000000031CB14 string=0x000000000058C06C "Caver.Proto.PropertiesComponent"
 *   insn=0x000000000031CB20 string=0x000000000031CB24 "%(\t"
 *   insn=0x000000000031CB24 string=0x000000000031CB28 "h"
 *   insn=0x000000000031CB48 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PropertiesComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PropertiesComponent");
}

