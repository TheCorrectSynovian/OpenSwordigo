/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF60C
 * Mangled: _ZNK5Caver16ShatterComponent9classNameEv
 * Demangled: Caver::ShatterComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCFB0  Caver::GlowComponent::GlowComponent(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000002AF618 string=0x00000000002AF61C "S"
 *   insn=0x00000000002AF61C string=0x00000000002AF620 "i"
 *   insn=0x00000000002AF628 string=0x0000000000585547 "ShatterComponent"
 *   insn=0x00000000002AF634 string=0x00000000002AF638 "`"
 *   insn=0x00000000002AF638 string=0x00000000002AF63C "h"
 *   insn=0x00000000002AF65C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002AF670 string=0x00000000002AF674 "O6"
 *   insn=0x00000000002AF674 string=0x00000000001FCFB0 "0'"
 *   insn=0x00000000002AF678 string=0x00000000002AF67C "aE"
 *   insn=0x00000000002AF680 string=0x00000000002AF684 "`B"
 *   insn=0x00000000002AF688 string=0x00000000002AF68C "\t"
 *   insn=0x00000000002AF68C string=0x00000000002AF690 " "
 *   insn=0x00000000002AF690 string=0x00000000002AF694 "\t"
 *   insn=0x00000000002AF694 string=0x00000000002AF698 " "
 *   insn=0x00000000002AF69C string=0x00000000002AF6A0 "`"
 *   insn=0x00000000002AF6A0 string=0x00000000002AF6A4 " "
 *   insn=0x00000000002AF6A4 string=0x00000000002AF6A8 "\t4"
 *   insn=0x00000000002AF6A8 string=0x00000000002AF6B0 "iB"
 *   insn=0x00000000002AF6B4 string=0x00000000002AF6B8 "`"
 *   insn=0x00000000002AF6B8 string=0x00000000002AF6BC " "
 *   insn=0x00000000002AF6BC string=0x00000000002AF6C0 "I3"
 *   insn=0x00000000002AF6C0 string=0x00000000002AF6C8 "A"
 *   insn=0x00000000002AF6CC string=0x00000000002AF6D0 "i"
 *   insn=0x00000000002AF6D0 string=0x00000000002AF6D4 "h"
 *   insn=0x00000000002AF6D4 string=0x00000000002AF6D8 "`6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ShatterComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ShatterComponent");
}

