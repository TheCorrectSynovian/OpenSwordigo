/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E2D4
 * Mangled: _ZNK5Caver19BackgroundComponent9classNameEv
 * Demangled: Caver::BackgroundComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000021E2E0 string=0x000000000021E2E4 "S"
 *   insn=0x000000000021E2E4 string=0x000000000021E2E8 "i"
 *   insn=0x000000000021E2EC string=0x000000000021E2F0 "!"
 *   insn=0x000000000021E2F0 string=0x0000000000585727 "Background"
 *   insn=0x000000000021E2FC string=0x000000000021E300 ".""
 *   insn=0x000000000021E300 string=0x000000000021E304 "h"
 *   insn=0x000000000021E324 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BackgroundComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Background");
}

