/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2648
 * Mangled: _ZNK5Caver5Proto10LevelState11GetTypeNameEv
 * Demangled: Caver::Proto::LevelState::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000002F2654 string=0x00000000002F2658 "S"
 *   insn=0x00000000002F2658 string=0x00000000002F265C "i"
 *   insn=0x00000000002F2664 string=0x000000000058B1D0 "Caver.Proto.LevelState"
 *   insn=0x00000000002F2670 string=0x00000000002F2674 "Q"
 *   insn=0x00000000002F2674 string=0x00000000002F2678 "h"
 *   insn=0x00000000002F2698 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002F26A0 string=0x00000000002F26A4 ""
 *   insn=0x00000000002F26AC string=0x00000000002F26B0 " "
 *   insn=0x00000000002F26B0 string=0x00000000002F26B4 "A"
 *   insn=0x00000000002F26B4 string=0x00000000002F26B8 ""
 *   insn=0x00000000002F26BC string=0x00000000002F26C0 ")G"
 *   insn=0x00000000002F26C4 string=0x00000000002F26C8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::LevelState::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.LevelState");
}

