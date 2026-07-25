/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D66C4
 * Mangled: _ZNK5Caver5Proto10GUIMargins11GetTypeNameEv
 * Demangled: Caver::Proto::GUIMargins::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000002D66D0 string=0x00000000002D66D4 "S"
 *   insn=0x00000000002D66D4 string=0x00000000002D66D8 "i"
 *   insn=0x00000000002D66E0 string=0x000000000058A547 "Caver.Proto.GUIMargins"
 *   insn=0x00000000002D66EC string=0x00000000002D66F0 "2A\n"
 *   insn=0x00000000002D66F0 string=0x00000000002D66F4 "h"
 *   insn=0x00000000002D6714 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D6718 string=0x00000000002D671C "h "
 *   insn=0x00000000002D671C string=0x00000000002D6720 ""
 *   insn=0x00000000002D6728 string=0x00000000002D672C "k "
 *   insn=0x00000000002D672C string=0x00000000002D6730 "kYE"
 *   insn=0x00000000002D6730 string=0x00000000002D6734 "\t"
 *   insn=0x00000000002D6738 string=0x00000000002D673C "A"
 *   insn=0x00000000002D6740 string=0x00000000002D6744 "$"
 *   insn=0x00000000002D6744 string=0x00000000002D6748 "\n("
 *   insn=0x00000000002D6748 string=0x00000000002D674C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GUIMargins::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GUIMargins");
}

