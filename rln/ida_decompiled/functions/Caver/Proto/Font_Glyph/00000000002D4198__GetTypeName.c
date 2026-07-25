/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D4198
 * Mangled: _ZNK5Caver5Proto10Font_Glyph11GetTypeNameEv
 * Demangled: Caver::Proto::Font_Glyph::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x00000000002D41A4 string=0x00000000002D41A8 "S"
 *   insn=0x00000000002D41A8 string=0x00000000002D41AC "i"
 *   insn=0x00000000002D41B4 string=0x000000000058A50B "Caver.Proto.Font.Glyph"
 *   insn=0x00000000002D41C0 string=0x00000000002D41C4 "}J\n"
 *   insn=0x00000000002D41C4 string=0x00000000002D41C8 "h"
 *   insn=0x00000000002D41D4 string=0x00000000002D41E8 ":"
 *   insn=0x00000000002D41E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D41F0 string=0x00000000002D41F4 "\t"
 *   insn=0x00000000002D41F4 string=0x00000000002D41F8 ""
 *   insn=0x00000000002D41F8 string=0x00000000002D41FC "\t|"
 *   insn=0x00000000002D4204 string=0x00000000002D4208 "\t0"
 *   insn=0x00000000002D420C string=0x00000000002D4210 ")"
 *   insn=0x00000000002D4210 string=0x00000000002D4214 "A"
 *   insn=0x00000000002D4214 string=0x00000000002D4218 "\t,"
 *   insn=0x00000000002D421C string=0x00000000002D4220 ")AA"
 *   insn=0x00000000002D4228 string=0x00000000002D422C ""
 *   insn=0x00000000002D422C string=0x00000000002D4230 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Font_Glyph::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Font.Glyph");
}

