/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1C9C
 * Mangled: _ZNK5Caver5Proto18Texture_Subtexture11GetTypeNameEv
 * Demangled: Caver::Proto::Texture_Subtexture::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002D1CA8 string=0x00000000002D1CAC "S"
 *   insn=0x00000000002D1CAC string=0x00000000002D1CB0 "i"
 *   insn=0x00000000002D1CB8 string=0x000000000058A4B5 "Caver.Proto.Texture.Subtexture"
 *   insn=0x00000000002D1CC8 string=0x00000000002D1CCC "h"
 *   insn=0x00000000002D1CD8 string=0x00000000002D1CEC "y"
 *   insn=0x00000000002D1CEC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D1CF4 string=0x00000000002D1CF8 ""
 *   insn=0x00000000002D1CFC string=0x00000000002D1D00 "A"
 *   insn=0x00000000002D1D00 string=0x00000000002D1D04 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Texture_Subtexture::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Texture.Subtexture");
}

