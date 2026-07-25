/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241E18
 * Mangled: _ZNK5Caver28TransformControllerComponent9classNameEv
 * Demangled: Caver::TransformControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000241E24 string=0x0000000000241E28 "S"
 *   insn=0x0000000000241E28 string=0x0000000000241E2C "i"
 *   insn=0x0000000000241E34 string=0x00000000005841C7 "TransformController"
 *   insn=0x0000000000241E40 string=0x0000000000241E44 "]"
 *   insn=0x0000000000241E44 string=0x0000000000241E48 "h"
 *   insn=0x0000000000241E68 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::TransformControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "TransformController");
}

