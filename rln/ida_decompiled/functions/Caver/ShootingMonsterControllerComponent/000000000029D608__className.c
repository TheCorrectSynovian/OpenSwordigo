/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029D608
 * Mangled: _ZNK5Caver34ShootingMonsterControllerComponent9classNameEv
 * Demangled: Caver::ShootingMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000029D614 string=0x000000000029D618 "S"
 *   insn=0x000000000029D618 string=0x000000000029D61C "i"
 *   insn=0x000000000029D620 string=0x000000000029D624 "A"
 *   insn=0x000000000029D624 string=0x00000000005855FC "ShootingMonsterController"
 *   insn=0x000000000029D630 string=0x000000000029D634 "a%"
 *   insn=0x000000000029D634 string=0x000000000029D638 "h"
 *   insn=0x000000000029D658 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029D65C string=0x000000000029D660 "@""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ShootingMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ShootingMonsterController");
}

