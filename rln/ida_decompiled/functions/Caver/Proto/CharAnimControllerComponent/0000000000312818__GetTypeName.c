/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312818
 * Mangled: _ZNK5Caver5Proto27CharAnimControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::CharAnimControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000312824 string=0x0000000000312828 "S"
 *   insn=0x0000000000312828 string=0x000000000031282C "i"
 *   insn=0x0000000000312834 string=0x000000000058BE1A "Caver.Proto.CharAnimControllerComponent"
 *   insn=0x0000000000312844 string=0x0000000000312848 "h"
 *   insn=0x0000000000312868 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031286C string=0x0000000000312870 "`"
 *   insn=0x0000000000312870 string=0x0000000000312874 "$"
 *   insn=0x0000000000312880 string=0x0000000000312884 ""
 *   insn=0x0000000000312890 string=0x0000000000312894 "A"
 *   insn=0x000000000031289C string=0x00000000003128A0 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::CharAnimControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.CharAnimControllerComponent");
}

