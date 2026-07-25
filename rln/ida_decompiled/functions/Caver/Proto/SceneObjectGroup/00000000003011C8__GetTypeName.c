/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003011C8
 * Mangled: _ZNK5Caver5Proto16SceneObjectGroup11GetTypeNameEv
 * Demangled: Caver::Proto::SceneObjectGroup::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000003011D4 string=0x00000000003011D8 "S"
 *   insn=0x00000000003011D8 string=0x00000000003011DC "i"
 *   insn=0x00000000003011E0 string=0x00000000003011E4 "A"
 *   insn=0x00000000003011E4 string=0x000000000058BB38 "Caver.Proto.SceneObjectGroup"
 *   insn=0x00000000003011F0 string=0x00000000003011F4 "q"
 *   insn=0x00000000003011F4 string=0x00000000003011F8 "h"
 *   insn=0x0000000000301204 string=0x0000000000301218 "."
 *   insn=0x0000000000301218 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030121C string=0x0000000000301220 "("
 *   insn=0x0000000000301220 string=0x0000000000301224 "AC"
 *   insn=0x0000000000301224 string=0x0000000000301228 "\t"
 *   insn=0x0000000000301228 string=0x000000000030122C "\t"
 *   insn=0x000000000030122C string=0x0000000000301230 "\t"
 *   insn=0x0000000000301234 string=0x0000000000301238 "\t$"
 *   insn=0x000000000030123C string=0x0000000000301240 "A"
 *   insn=0x0000000000301250 string=0x0000000000301254 "\t "
 *   insn=0x0000000000301258 string=0x000000000030125C "\tX"
 *   insn=0x000000000030125C string=0x0000000000301260 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SceneObjectGroup::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SceneObjectGroup");
}

