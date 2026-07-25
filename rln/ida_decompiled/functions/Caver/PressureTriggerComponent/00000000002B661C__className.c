/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B661C
 * Mangled: _ZNK5Caver24PressureTriggerComponent9classNameEv
 * Demangled: Caver::PressureTriggerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002B6628 string=0x00000000002B662C "S"
 *   insn=0x00000000002B662C string=0x00000000002B6630 "i"
 *   insn=0x00000000002B6634 string=0x00000000002B6638 "a"
 *   insn=0x00000000002B6638 string=0x0000000000585700 "PressureTrigger"
 *   insn=0x00000000002B6644 string=0x00000000002B6648 "\"
 *   insn=0x00000000002B6648 string=0x00000000002B664C "h"
 *   insn=0x00000000002B666C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PressureTriggerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "PressureTrigger");
}

