/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7550
 * Mangled: _ZNK5Caver5Proto13GUIViewLayout11GetTypeNameEv
 * Demangled: Caver::Proto::GUIViewLayout::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x00000000002D755C string=0x00000000002D7560 "S"
 *   insn=0x00000000002D7560 string=0x00000000002D7564 "i"
 *   insn=0x00000000002D756C string=0x000000000058A55E "Caver.Proto.GUIViewLayout"
 *   insn=0x00000000002D757C string=0x00000000002D7580 "h"
 *   insn=0x00000000002D758C string=0x00000000002D75A0 "L{"
 *   insn=0x00000000002D75A0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D75A4 string=0x00000000002D75A8 "h "
 *   insn=0x00000000002D75A8 string=0x00000000002D75AC ""
 *   insn=0x00000000002D75B4 string=0x00000000002D75B8 ")"
 *   insn=0x00000000002D75B8 string=0x00000000002D75BC "j "
 *   insn=0x00000000002D75BC string=0x00000000002D75C0 "JuC"
 *   insn=0x00000000002D75C4 string=0x00000000002D75C8 "a"
 *   insn=0x00000000002D75C8 string=0x00000000002D75CC " "
 *   insn=0x00000000002D75CC string=0x00000000002D75D0 "A"
 *   insn=0x00000000002D75D0 string=0x00000000002D75D4 "@"
 *   insn=0x00000000002D75D4 string=0x00000000002D75D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GUIViewLayout::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GUIViewLayout");
}

