/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0B70
 * Mangled: _ZNK5Caver5Proto7Polygon11GetTypeNameEv
 * Demangled: Caver::Proto::Polygon::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002D0B7C string=0x00000000002D0B80 "S"
 *   insn=0x00000000002D0B80 string=0x00000000002D0B84 "i"
 *   insn=0x00000000002D0B8C string=0x000000000058A48A "Caver.Proto.Polygon"
 *   insn=0x00000000002D0B98 string=0x00000000002D0B9C "X\n"
 *   insn=0x00000000002D0B9C string=0x00000000002D0BA0 "h"
 *   insn=0x00000000002D0BC0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D0BC8 string=0x00000000002D0BCC ""
 *   insn=0x00000000002D0BD4 string=0x00000000002D0BD8 "A"
 *   insn=0x00000000002D0BD8 string=0x00000000002D0BDC "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Polygon::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Polygon");
}

