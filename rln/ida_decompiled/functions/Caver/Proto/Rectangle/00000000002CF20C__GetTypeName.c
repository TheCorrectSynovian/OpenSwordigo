/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF20C
 * Mangled: _ZNK5Caver5Proto9Rectangle11GetTypeNameEv
 * Demangled: Caver::Proto::Rectangle::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002CF218 string=0x00000000002CF21C "S"
 *   insn=0x00000000002CF21C string=0x00000000002CF220 "i"
 *   insn=0x00000000002CF228 string=0x000000000058A451 "Caver.Proto.Rectangle"
 *   insn=0x00000000002CF234 string=0x00000000002CF238 "`^\n"
 *   insn=0x00000000002CF238 string=0x00000000002CF23C "h"
 *   insn=0x00000000002CF25C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CF264 string=0x00000000002CF268 ""
 *   insn=0x00000000002CF270 string=0x00000000002CF274 "A"
 *   insn=0x00000000002CF274 string=0x00000000002CF278 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Rectangle::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Rectangle");
}

