/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DEEC
 * Mangled: _ZNK5Caver5Proto19SpawnPointComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SpawnPointComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000032DEF8 string=0x000000000032DEFC "S"
 *   insn=0x000000000032DEFC string=0x000000000032DF00 "i"
 *   insn=0x000000000032DF08 string=0x000000000058C49D "Caver.Proto.SpawnPointComponent"
 *   insn=0x000000000032DF14 string=0x000000000032DF18 "("
 *   insn=0x000000000032DF18 string=0x000000000032DF1C "h"
 *   insn=0x000000000032DF3C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SpawnPointComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SpawnPointComponent");
}

