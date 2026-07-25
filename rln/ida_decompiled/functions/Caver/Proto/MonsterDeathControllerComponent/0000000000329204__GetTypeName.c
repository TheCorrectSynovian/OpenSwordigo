/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329204
 * Mangled: _ZNK5Caver5Proto31MonsterDeathControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000329210 string=0x0000000000329214 "S"
 *   insn=0x0000000000329214 string=0x0000000000329218 "i"
 *   insn=0x0000000000329220 string=0x000000000058C377 "Caver.Proto.MonsterDeathControllerComponent"
 *   insn=0x000000000032922C string=0x0000000000329230 "b"
 *   insn=0x0000000000329230 string=0x0000000000329234 "h"
 *   insn=0x0000000000329254 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032925C string=0x0000000000329260 ""
 *   insn=0x0000000000329264 string=0x0000000000329268 "A"
 *   insn=0x0000000000329268 string=0x000000000032926C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MonsterDeathControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MonsterDeathControllerComponent");
}

