/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B2EC
 * Mangled: _ZNK5Caver5Proto34SwingableWeaponControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000032B2F8 string=0x000000000032B2FC "S"
 *   insn=0x000000000032B2FC string=0x000000000032B300 "i"
 *   insn=0x000000000032B308 string=0x000000000058C3F6 "Caver.Proto.SwingableWeaponControllerComponent"
 *   insn=0x000000000032B314 string=0x000000000032B318 "("
 *   insn=0x000000000032B318 string=0x000000000032B31C "h"
 *   insn=0x000000000032B33C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032B344 string=0x000000000032B348 "UA"
 *   insn=0x000000000032B354 string=0x000000000032B358 "A"
 *   insn=0x000000000032B358 string=0x000000000032B35C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SwingableWeaponControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SwingableWeaponControllerComponent");
}

