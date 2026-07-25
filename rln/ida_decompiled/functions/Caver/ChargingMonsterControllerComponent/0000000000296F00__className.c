/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000296F00
 * Mangled: _ZNK5Caver34ChargingMonsterControllerComponent9classNameEv
 * Demangled: Caver::ChargingMonsterControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000296F0C string=0x0000000000296F10 "S"
 *   insn=0x0000000000296F10 string=0x0000000000296F14 "i"
 *   insn=0x0000000000296F18 string=0x0000000000296F1C "a"
 *   insn=0x0000000000296F1C string=0x000000000058557F "ChargingMonsterController"
 *   insn=0x0000000000296F28 string=0x0000000000296F2C "#?"
 *   insn=0x0000000000296F2C string=0x0000000000296F30 "h"
 *   insn=0x0000000000296F50 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000296F54 string=0x0000000000296F58 "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ChargingMonsterControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ChargingMonsterController");
}

