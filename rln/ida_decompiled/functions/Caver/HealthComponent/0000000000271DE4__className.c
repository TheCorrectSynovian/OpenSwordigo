/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271DE4
 * Mangled: _ZNK5Caver15HealthComponent9classNameEv
 * Demangled: Caver::HealthComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000271DF0 string=0x0000000000271DF4 "S"
 *   insn=0x0000000000271DF4 string=0x0000000000271DF8 "i"
 *   insn=0x0000000000271E00 string=0x0000000000588337 "Health"
 *   insn=0x0000000000271E0C string=0x0000000000271E10 "j"
 *   insn=0x0000000000271E10 string=0x0000000000271E14 "h"
 *   insn=0x0000000000271E20 string=0x0000000000271E34 "'"
 *   insn=0x0000000000271E34 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::HealthComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Health");
}

