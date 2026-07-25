/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003244A4
 * Mangled: _ZNK5Caver5Proto33WalkingMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000003244B0 string=0x00000000003244B4 "S"
 *   insn=0x00000000003244B4 string=0x00000000003244B8 "i"
 *   insn=0x00000000003244BC string=0x00000000003244C0 "A"
 *   insn=0x00000000003244C0 string=0x000000000058C1BF "Caver.Proto.WalkingMonsterControllerComponent"
 *   insn=0x00000000003244D0 string=0x00000000003244D4 "h"
 *   insn=0x00000000003244E0 string=0x00000000003244F4 "wG"
 *   insn=0x00000000003244F4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003244F8 string=0x00000000003244FC ""
 *   insn=0x00000000003244FC string=0x0000000000324500 ""
 *   insn=0x0000000000324508 string=0x000000000032450C "A"
 *   insn=0x000000000032450C string=0x0000000000324510 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::WalkingMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.WalkingMonsterControllerComponent");
}

