/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DC5E4
 * Mangled: _ZNK5Caver5Proto14MapNode_Portal11GetTypeNameEv
 * Demangled: Caver::Proto::MapNode_Portal::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x00000000002DC5F0 string=0x00000000002DC5F4 "S"
 *   insn=0x00000000002DC5F4 string=0x00000000002DC5F8 "i"
 *   insn=0x00000000002DC5FC string=0x00000000002DC600 "a"
 *   insn=0x00000000002DC600 string=0x000000000058ABB4 "Caver.Proto.MapNode.Portal"
 *   insn=0x00000000002DC60C string=0x00000000002DC610 "j)\n"
 *   insn=0x00000000002DC610 string=0x00000000002DC614 "h"
 *   insn=0x00000000002DC620 string=0x00000000002DC634 "'g"
 *   insn=0x00000000002DC634 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DC638 string=0x00000000002DC63C ""
 *   insn=0x00000000002DC63C string=0x00000000002DC640 ""
 *   insn=0x00000000002DC640 string=0x00000000002DC644 "H "
 *   insn=0x00000000002DC644 string=0x00000000002DC648 "=D"
 *   insn=0x00000000002DC64C string=0x00000000002DC650 "\t8"
 *   insn=0x00000000002DC654 string=0x00000000002DC658 "H "
 *   insn=0x00000000002DC658 string=0x00000000002DC65C ""
 *   insn=0x00000000002DC65C string=0x00000000002DC660 "8"
 *   insn=0x00000000002DC660 string=0x00000000002DC664 "H "
 *   insn=0x00000000002DC664 string=0x00000000002DC668 "QD"
 *   insn=0x00000000002DC674 string=0x00000000002DC678 "A"
 *   insn=0x00000000002DC678 string=0x00000000002DC67C ""
 *   insn=0x00000000002DC67C string=0x00000000002DC680 "H "
 *   insn=0x00000000002DC680 string=0x00000000002DC684 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MapNode_Portal::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MapNode.Portal");
}

