/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B22E0
 * Mangled: _ZNK5Caver23BushControllerComponent9classNameEv
 * Demangled: Caver::BushControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002B22EC string=0x00000000002B22F0 "S"
 *   insn=0x00000000002B22F0 string=0x00000000002B22F4 "i"
 *   insn=0x00000000002B22FC string=0x0000000000585496 "BushController"
 *   insn=0x00000000002B2308 string=0x00000000002B230C "+"
 *   insn=0x00000000002B230C string=0x00000000002B2310 "h"
 *   insn=0x00000000002B2330 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BushControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "BushController");
}

