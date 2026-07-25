/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0F80
 * Mangled: _ZNK5Caver32StaticMonsterControllerComponent9classNameEv
 * Demangled: Caver::StaticMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002A0F8C string=0x00000000002A0F90 "S"
 *   insn=0x00000000002A0F90 string=0x00000000002A0F94 "i"
 *   insn=0x00000000002A0F98 string=0x00000000002A0F9C "!"
 *   insn=0x00000000002A0F9C string=0x00000000005855E4 "StaticMonsterController"
 *   insn=0x00000000002A0FAC string=0x00000000002A0FB0 "h"
 *   insn=0x00000000002A0FD0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A0FD4 string=0x00000000002A0FD8 " ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::StaticMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "StaticMonsterController");
}

