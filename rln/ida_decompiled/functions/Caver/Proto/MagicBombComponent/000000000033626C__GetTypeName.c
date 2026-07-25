/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033626C
 * Mangled: _ZNK5Caver5Proto18MagicBombComponent11GetTypeNameEv
 * Demangled: Caver::Proto::MagicBombComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000336278 string=0x000000000033627C "S"
 *   insn=0x000000000033627C string=0x0000000000336280 "i"
 *   insn=0x0000000000336288 string=0x000000000058C65A "Caver.Proto.MagicBombComponent"
 *   insn=0x0000000000336294 string=0x0000000000336298 "H"
 *   insn=0x0000000000336298 string=0x000000000033629C "h"
 *   insn=0x00000000003362BC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003362C4 string=0x00000000003362C8 "yF"
 *   insn=0x00000000003362D4 string=0x00000000003362D8 "A"
 *   insn=0x00000000003362D8 string=0x00000000003362DC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MagicBombComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MagicBombComponent");
}

