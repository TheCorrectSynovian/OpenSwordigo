/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000326C5C
 * Mangled: _ZNK5Caver5Proto33LeapingMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000326C68 string=0x0000000000326C6C "S"
 *   insn=0x0000000000326C6C string=0x0000000000326C70 "i"
 *   insn=0x0000000000326C74 string=0x0000000000326C78 "!"
 *   insn=0x0000000000326C78 string=0x000000000058C267 "Caver.Proto.LeapingMonsterControllerComponent"
 *   insn=0x0000000000326C88 string=0x0000000000326C8C "h"
 *   insn=0x0000000000326CAC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000326CB4 string=0x0000000000326CB8 "=F"
 *   insn=0x0000000000326CBC string=0x0000000000326CC0 "A"
 *   insn=0x0000000000326CC0 string=0x0000000000326CC4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::LeapingMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.LeapingMonsterControllerComponent");
}

