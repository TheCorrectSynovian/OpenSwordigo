/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4D3C
 * Mangled: _ZNK5Caver24OrbitControllerComponent9classNameEv
 * Demangled: Caver::OrbitControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002A4D48 string=0x00000000002A4D4C "S"
 *   insn=0x00000000002A4D4C string=0x00000000002A4D50 "i"
 *   insn=0x00000000002A4D58 string=0x00000000005856D5 "OrbitController"
 *   insn=0x00000000002A4D68 string=0x00000000002A4D6C "h"
 *   insn=0x00000000002A4D78 string=0x00000000002A4D8C "QE"
 *   insn=0x00000000002A4D8C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::OrbitControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "OrbitController");
}

