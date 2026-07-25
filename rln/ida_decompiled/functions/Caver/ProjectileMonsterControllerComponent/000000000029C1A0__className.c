/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C1A0
 * Mangled: _ZNK5Caver36ProjectileMonsterControllerComponent9classNameEv
 * Demangled: Caver::ProjectileMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000029C1AC string=0x000000000029C1B0 "S"
 *   insn=0x000000000029C1B0 string=0x000000000029C1B4 "i"
 *   insn=0x000000000029C1B8 string=0x000000000029C1BC "A"
 *   insn=0x000000000029C1BC string=0x0000000000585616 "ProjectileMonsterController"
 *   insn=0x000000000029C1C8 string=0x000000000029C1CC "{*"
 *   insn=0x000000000029C1CC string=0x000000000029C1D0 "h"
 *   insn=0x000000000029C1DC string=0x000000000029C1F0 "8h"
 *   insn=0x000000000029C1F0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029C1F4 string=0x000000000029C1F8 "@""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ProjectileMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ProjectileMonsterController");
}

