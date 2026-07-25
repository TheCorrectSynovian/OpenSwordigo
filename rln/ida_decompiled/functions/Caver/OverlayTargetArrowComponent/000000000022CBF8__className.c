/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022CBF8
 * Mangled: _ZNK5Caver27OverlayTargetArrowComponent9classNameEv
 * Demangled: Caver::OverlayTargetArrowComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000022CC04 string=0x000000000022CC08 "S"
 *   insn=0x000000000022CC08 string=0x000000000022CC0C "i"
 *   insn=0x000000000022CC14 string=0x000000000058433B "OverlayTargetArrow"
 *   insn=0x000000000022CC24 string=0x000000000022CC28 "h"
 *   insn=0x000000000022CC48 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::OverlayTargetArrowComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "OverlayTargetArrow");
}

