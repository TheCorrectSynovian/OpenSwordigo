/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC550
 * Mangled: _ZNK5Caver5Proto15StateProperties11GetTypeNameEv
 * Demangled: Caver::Proto::StateProperties::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000002EC55C string=0x00000000002EC560 "S"
 *   insn=0x00000000002EC560 string=0x00000000002EC564 "i"
 *   insn=0x00000000002EC56C string=0x000000000058B171 "Caver.Proto.StateProperties"
 *   insn=0x00000000002EC57C string=0x00000000002EC580 "h"
 *   insn=0x00000000002EC58C string=0x00000000002EC5A0 "L'"
 *   insn=0x00000000002EC5A0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002EC5A8 string=0x00000000002EC5AC ""
 *   insn=0x00000000002EC5B4 string=0x00000000002EC5B8 ")"
 *   insn=0x00000000002EC5B8 string=0x00000000002EC5BC "A"
 *   insn=0x00000000002EC5C0 string=0x00000000002EC5C4 ""
 *   insn=0x00000000002EC5C4 string=0x00000000002EC5C8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::StateProperties::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.StateProperties");
}

