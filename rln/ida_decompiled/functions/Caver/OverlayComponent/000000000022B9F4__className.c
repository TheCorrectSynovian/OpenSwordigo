/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B9F4
 * Mangled: _ZNK5Caver16OverlayComponent9classNameEv
 * Demangled: Caver::OverlayComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000022BA00 string=0x000000000022BA04 "S"
 *   insn=0x000000000022BA04 string=0x000000000022BA08 "i"
 *   insn=0x000000000022BA10 string=0x000000000058430B "Overlay"
 *   insn=0x000000000022BA1C string=0x000000000022BA20 "f"
 *   insn=0x000000000022BA20 string=0x000000000022BA24 "h"
 *   insn=0x000000000022BA30 string=0x000000000022BA44 "#*"
 *   insn=0x000000000022BA44 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::OverlayComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Overlay");
}

