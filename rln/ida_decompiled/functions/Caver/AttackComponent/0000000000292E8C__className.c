/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292E8C
 * Mangled: _ZNK5Caver15AttackComponent9classNameEv
 * Demangled: Caver::AttackComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000292E98 string=0x0000000000292E9C "S"
 *   insn=0x0000000000292E9C string=0x0000000000292EA0 "i"
 *   insn=0x0000000000292EA8 string=0x0000000000588EF6 "Attack"
 *   insn=0x0000000000292EB4 string=0x0000000000292EB8 "@O"
 *   insn=0x0000000000292EB8 string=0x0000000000292EBC "h"
 *   insn=0x0000000000292EDC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::AttackComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Attack");
}

