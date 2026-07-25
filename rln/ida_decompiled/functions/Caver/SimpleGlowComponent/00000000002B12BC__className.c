/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B12BC
 * Mangled: _ZNK5Caver19SimpleGlowComponent9classNameEv
 * Demangled: Caver::SimpleGlowComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002B12C8 string=0x00000000002B12CC "S"
 *   insn=0x00000000002B12CC string=0x00000000002B12D0 "i"
 *   insn=0x00000000002B12D8 string=0x00000000005856BB "SimpleGlow"
 *   insn=0x00000000002B12E4 string=0x00000000002B12E8 "4"
 *   insn=0x00000000002B12E8 string=0x00000000002B12EC "h"
 *   insn=0x00000000002B130C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SimpleGlowComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "SimpleGlow");
}

