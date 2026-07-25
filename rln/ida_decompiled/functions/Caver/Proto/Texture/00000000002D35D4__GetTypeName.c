/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D35D4
 * Mangled: _ZNK5Caver5Proto7Texture11GetTypeNameEv
 * Demangled: Caver::Proto::Texture::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002D35E0 string=0x00000000002D35E4 "S"
 *   insn=0x00000000002D35E4 string=0x00000000002D35E8 "i"
 *   insn=0x00000000002D35F0 string=0x000000000058A4F7 "Caver.Proto.Texture"
 *   insn=0x00000000002D35FC string=0x00000000002D3600 "nM\n"
 *   insn=0x00000000002D3600 string=0x00000000002D3604 "h"
 *   insn=0x00000000002D3610 string=0x00000000002D3624 "+"
 *   insn=0x00000000002D3624 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D362C string=0x00000000002D3630 ""
 *   insn=0x00000000002D363C string=0x00000000002D3640 "A"
 *   insn=0x00000000002D3640 string=0x00000000002D3644 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Texture::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Texture");
}

