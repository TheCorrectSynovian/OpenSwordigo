/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002611C4
 * Mangled: _ZNK5Caver23CharControllerComponent9classNameEv
 * Demangled: Caver::CharControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000261334  Caver::SwingComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002611D0 string=0x00000000002611D4 "S"
 *   insn=0x00000000002611D4 string=0x00000000002611D8 "i"
 *   insn=0x00000000002611DC string=0x00000000002611E0 "!"
 *   insn=0x00000000002611E0 string=0x000000000058547C "CharController"
 *   insn=0x00000000002611EC string=0x00000000002611F0 "r"
 *   insn=0x00000000002611F0 string=0x00000000002611F4 "h"
 *   insn=0x0000000000261200 string=0x0000000000261214 "/T"
 *   insn=0x0000000000261214 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000261218 string=0x000000000026121C " $"
 *   insn=0x0000000000261220 string=0x0000000000261334 " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CharControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "CharController");
}

