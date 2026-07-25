/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F1868
 * Mangled: _ZNK5Caver5Proto9GameState11GetTypeNameEv
 * Demangled: Caver::Proto::GameState::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002F1874 string=0x00000000002F1878 "S"
 *   insn=0x00000000002F1878 string=0x00000000002F187C "i"
 *   insn=0x00000000002F1884 string=0x000000000058B1BA "Caver.Proto.GameState"
 *   insn=0x00000000002F1894 string=0x00000000002F1898 "h"
 *   insn=0x00000000002F18B8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002F18C0 string=0x00000000002F18C4 "1E"
 *   insn=0x00000000002F18CC string=0x00000000002F18D0 ")M@"
 *   insn=0x00000000002F18D4 string=0x00000000002F18D8 "A"
 *   insn=0x00000000002F18E0 string=0x00000000002F18E4 "\t"
 *   insn=0x00000000002F18E8 string=0x00000000002F18EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GameState::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GameState");
}

