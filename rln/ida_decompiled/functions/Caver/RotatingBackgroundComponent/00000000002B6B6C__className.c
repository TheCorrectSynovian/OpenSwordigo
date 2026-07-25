/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6B6C
 * Mangled: _ZNK5Caver27RotatingBackgroundComponent9classNameEv
 * Demangled: Caver::RotatingBackgroundComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002B6B78 string=0x00000000002B6B7C "S"
 *   insn=0x00000000002B6B7C string=0x00000000002B6B80 "i"
 *   insn=0x00000000002B6B84 string=0x00000000002B6B88 "a"
 *   insn=0x00000000002B6B88 string=0x000000000058571F "RotatingBackground"
 *   insn=0x00000000002B6B94 string=0x00000000002B6B98 ""
 *   insn=0x00000000002B6B98 string=0x00000000002B6B9C "h"
 *   insn=0x00000000002B6BBC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::RotatingBackgroundComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "RotatingBackground");
}

