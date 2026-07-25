/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029E9E0
 * Mangled: _ZNK5Caver32SkellyMonsterControllerComponent9classNameEv
 * Demangled: Caver::SkellyMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000029E9EC string=0x000000000029E9F0 "S"
 *   insn=0x000000000029E9F0 string=0x000000000029E9F4 "i"
 *   insn=0x000000000029E9F8 string=0x000000000029E9FC "!"
 *   insn=0x000000000029E9FC string=0x00000000005855CC "SkellyMonsterController"
 *   insn=0x000000000029EA08 string=0x000000000029EA0C "k "
 *   insn=0x000000000029EA0C string=0x000000000029EA10 "h"
 *   insn=0x000000000029EA1C string=0x000000000029EA30 "(^"
 *   insn=0x000000000029EA30 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029EA34 string=0x000000000029EA38 "@""
 *   insn=0x000000000029EA3C string=0x0000000000261698 " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SkellyMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "SkellyMonsterController");
}

