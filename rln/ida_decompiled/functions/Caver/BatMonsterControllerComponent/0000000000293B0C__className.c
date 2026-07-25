/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293B0C
 * Mangled: _ZNK5Caver29BatMonsterControllerComponent9classNameEv
 * Demangled: Caver::BatMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000293B18 string=0x0000000000293B1C "S"
 *   insn=0x0000000000293B1C string=0x0000000000293B20 "i"
 *   insn=0x0000000000293B28 string=0x0000000000585632 "BatMonsterController"
 *   insn=0x0000000000293B34 string=0x0000000000293B38 " L"
 *   insn=0x0000000000293B38 string=0x0000000000293B3C "h"
 *   insn=0x0000000000293B5C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BatMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "BatMonsterController");
}

