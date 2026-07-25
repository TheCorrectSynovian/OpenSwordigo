/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324CC4
 * Mangled: _ZNK5Caver5Proto34ChargingMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000324CD0 string=0x0000000000324CD4 "S"
 *   insn=0x0000000000324CD4 string=0x0000000000324CD8 "i"
 *   insn=0x0000000000324CDC string=0x0000000000324CE0 "A"
 *   insn=0x0000000000324CE0 string=0x000000000058C1ED "Caver.Proto.ChargingMonsterControllerComponent"
 *   insn=0x0000000000324CF0 string=0x0000000000324CF4 "h"
 *   insn=0x0000000000324D00 string=0x0000000000324D14 "oE"
 *   insn=0x0000000000324D14 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000324D18 string=0x0000000000324D1C ""
 *   insn=0x0000000000324D1C string=0x0000000000324D20 "yB"
 *   insn=0x0000000000324D28 string=0x0000000000324D2C "A"
 *   insn=0x0000000000324D2C string=0x0000000000324D30 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ChargingMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ChargingMonsterControllerComponent");
}

