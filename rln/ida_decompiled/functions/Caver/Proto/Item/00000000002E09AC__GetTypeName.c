/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E09AC
 * Mangled: _ZNK5Caver5Proto4Item11GetTypeNameEv
 * Demangled: Caver::Proto::Item::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x00000000002E09B8 string=0x00000000002E09BC "S"
 *   insn=0x00000000002E09BC string=0x00000000002E09C0 "i"
 *   insn=0x00000000002E09C4 string=0x00000000002E09C8 "A"
 *   insn=0x00000000002E09C8 string=0x000000000058AC07 "Caver.Proto.Item"
 *   insn=0x00000000002E09D4 string=0x00000000002E09D8 "x"
 *   insn=0x00000000002E09D8 string=0x00000000002E09DC "h"
 *   insn=0x00000000002E09E8 string=0x00000000002E09FC "5V"
 *   insn=0x00000000002E09FC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E0A00 string=0x00000000002E0A04 "( "
 *   insn=0x00000000002E0A04 string=0x00000000002E0A08 ""
 *   insn=0x00000000002E0A0C string=0x00000000002E0A10 ") "
 *   insn=0x00000000002E0A10 string=0x00000000002E0A14 ")"
 *   insn=0x00000000002E0A14 string=0x00000000002E0A18 "* "
 *   insn=0x00000000002E0A18 string=0x00000000002E0A1C "J"
 *   insn=0x00000000002E0A1C string=0x00000000002E0A20 "+ "
 *   insn=0x00000000002E0A20 string=0x00000000002E0A24 "k"
 *   insn=0x00000000002E0A24 string=0x00000000002E0A28 " "
 *   insn=0x00000000002E0A28 string=0x00000000002E0A2C "A"
 *   insn=0x00000000002E0A2C string=0x00000000002E0A30 "@"
 *   insn=0x00000000002E0A34 string=0x00000000002E0A38 ""
 *   insn=0x00000000002E0A3C string=0x00000000002E0A40 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Item::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Item");
}

