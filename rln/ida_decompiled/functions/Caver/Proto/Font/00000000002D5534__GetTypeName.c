/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5534
 * Mangled: _ZNK5Caver5Proto4Font11GetTypeNameEv
 * Demangled: Caver::Proto::Font::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000002D5540 string=0x00000000002D5544 "S"
 *   insn=0x00000000002D5544 string=0x00000000002D5548 "i"
 *   insn=0x00000000002D5550 string=0x000000000058A522 "Caver.Proto.Font"
 *   insn=0x00000000002D5560 string=0x00000000002D5564 "h"
 *   insn=0x00000000002D5570 string=0x00000000002D5584 "S"
 *   insn=0x00000000002D5584 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D558C string=0x00000000002D5590 ""
 *   insn=0x00000000002D5598 string=0x00000000002D559C ")"
 *   insn=0x00000000002D55A0 string=0x00000000002D55A4 "JmB"
 *   insn=0x00000000002D55A8 string=0x00000000002D55AC "k9@"
 *   insn=0x00000000002D55AC string=0x00000000002D55B0 " "
 *   insn=0x00000000002D55B0 string=0x00000000002D55B4 "A"
 *   insn=0x00000000002D55B4 string=0x00000000002D55B8 "@"
 *   insn=0x00000000002D55B8 string=0x00000000002D55BC ""
 *   insn=0x00000000002D55BC string=0x00000000002D55C0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Font::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Font");
}

