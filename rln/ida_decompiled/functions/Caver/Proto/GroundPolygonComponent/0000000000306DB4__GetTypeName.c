/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000306DB4
 * Mangled: _ZNK5Caver5Proto22GroundPolygonComponent11GetTypeNameEv
 * Demangled: Caver::Proto::GroundPolygonComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x0000000000306DC0 string=0x0000000000306DC4 "S"
 *   insn=0x0000000000306DC4 string=0x0000000000306DC8 "i"
 *   insn=0x0000000000306DCC string=0x0000000000306DD0 "!"
 *   insn=0x0000000000306DD0 string=0x000000000058BC17 "Caver.Proto.GroundPolygonComponent"
 *   insn=0x0000000000306DDC string=0x0000000000306DE0 "v"
 *   insn=0x0000000000306DE0 string=0x0000000000306DE4 "h"
 *   insn=0x0000000000306DF0 string=0x0000000000306E04 "3"
 *   insn=0x0000000000306E04 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000306E08 string=0x0000000000306E0C ""
 *   insn=0x0000000000306E0C string=0x0000000000306E10 "\t"
 *   insn=0x0000000000306E10 string=0x0000000000306E14 ""
 *   insn=0x0000000000306E14 string=0x0000000000306E18 "\t"
 *   insn=0x0000000000306E18 string=0x0000000000306E1C "\t"
 *   insn=0x0000000000306E20 string=0x0000000000306E24 "\t"
 *   insn=0x0000000000306E24 string=0x0000000000306E28 "\tL"
 *   insn=0x0000000000306E30 string=0x0000000000306E34 "\t0"
 *   insn=0x0000000000306E34 string=0x0000000000306E38 "\tp"
 *   insn=0x0000000000306E38 string=0x0000000000306E3C "\t"
 *   insn=0x0000000000306E40 string=0x0000000000306E44 ")!G"
 *   insn=0x0000000000306E54 string=0x0000000000306E58 " "
 *   insn=0x0000000000306E58 string=0x0000000000306E5C "\t"
 *   insn=0x0000000000306E5C string=0x0000000000306E60 ")"
 *   insn=0x0000000000306E60 string=0x0000000000306E64 "A"
 *   insn=0x0000000000306E6C string=0x0000000000306E70 " "
 *   insn=0x0000000000306E70 string=0x0000000000306E74 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GroundPolygonComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GroundPolygonComponent");
}

