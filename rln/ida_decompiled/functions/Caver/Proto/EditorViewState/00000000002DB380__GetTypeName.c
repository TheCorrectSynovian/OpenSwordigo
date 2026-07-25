/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DB380
 * Mangled: _ZNK5Caver5Proto15EditorViewState11GetTypeNameEv
 * Demangled: Caver::Proto::EditorViewState::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002DB38C string=0x00000000002DB390 "S"
 *   insn=0x00000000002DB390 string=0x00000000002DB394 "i"
 *   insn=0x00000000002DB398 string=0x00000000002DB39C "a"
 *   insn=0x00000000002DB39C string=0x000000000058A9EB "Caver.Proto.EditorViewState"
 *   insn=0x00000000002DB3AC string=0x00000000002DB3B0 "h"
 *   insn=0x00000000002DB3D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::EditorViewState::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.EditorViewState");
}

