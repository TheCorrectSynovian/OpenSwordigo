/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DEF1C
 * Mangled: _ZNK5Caver5Proto7MapZone11GetTypeNameEv
 * Demangled: Caver::Proto::MapZone::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000002DEF28 string=0x00000000002DEF2C "S"
 *   insn=0x00000000002DEF2C string=0x00000000002DEF30 "i"
 *   insn=0x00000000002DEF34 string=0x00000000002DEF38 "a"
 *   insn=0x00000000002DEF38 string=0x000000000058ABE3 "Caver.Proto.MapZone"
 *   insn=0x00000000002DEF48 string=0x00000000002DEF4C "h"
 *   insn=0x00000000002DEF6C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DEF70 string=0x00000000002DEF74 "H "
 *   insn=0x00000000002DEF74 string=0x00000000002DEF78 ""
 *   insn=0x00000000002DEF78 string=0x00000000002DEF7C "\t"
 *   insn=0x00000000002DEF80 string=0x00000000002DEF84 "\t|"
 *   insn=0x00000000002DEF84 string=0x00000000002DEF88 "A"
 *   insn=0x00000000002DEF8C string=0x00000000002DEF90 "\n "
 *   insn=0x00000000002DEF90 string=0x00000000002DEF94 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MapZone::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MapZone");
}

