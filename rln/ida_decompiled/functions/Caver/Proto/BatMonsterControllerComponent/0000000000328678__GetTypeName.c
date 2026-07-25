/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328678
 * Mangled: _ZNK5Caver5Proto29BatMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::BatMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000328684 string=0x0000000000328688 "S"
 *   insn=0x0000000000328688 string=0x000000000032868C "i"
 *   insn=0x0000000000328690 string=0x0000000000328694 "!"
 *   insn=0x0000000000328694 string=0x000000000058C31E "Caver.Proto.BatMonsterControllerComponent"
 *   insn=0x00000000003286A0 string=0x00000000003286A4 "E"
 *   insn=0x00000000003286A4 string=0x00000000003286A8 "h"
 *   insn=0x00000000003286C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003286D0 string=0x00000000003286D4 ""
 *   insn=0x00000000003286D8 string=0x00000000003286DC "A"
 *   insn=0x00000000003286DC string=0x00000000003286E0 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::BatMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.BatMonsterControllerComponent");
}

