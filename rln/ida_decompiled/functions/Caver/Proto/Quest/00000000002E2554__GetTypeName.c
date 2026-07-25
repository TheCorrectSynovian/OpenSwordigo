/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E2554
 * Mangled: _ZNK5Caver5Proto5Quest11GetTypeNameEv
 * Demangled: Caver::Proto::Quest::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x00000000002E2560 string=0x00000000002E2564 "S"
 *   insn=0x00000000002E2564 string=0x00000000002E2568 "i"
 *   insn=0x00000000002E256C string=0x00000000002E2570 "A"
 *   insn=0x00000000002E2570 string=0x000000000058AC2A "Caver.Proto.Quest"
 *   insn=0x00000000002E2580 string=0x00000000002E2584 "h"
 *   insn=0x00000000002E2590 string=0x00000000002E25A4 "KO"
 *   insn=0x00000000002E25A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E25A8 string=0x00000000002E25AC "( "
 *   insn=0x00000000002E25AC string=0x00000000002E25B0 ""
 *   insn=0x00000000002E25B4 string=0x00000000002E25B8 "\t "
 *   insn=0x00000000002E25B8 string=0x00000000002E25BC ")F"
 *   insn=0x00000000002E25BC string=0x00000000002E25C0 "\n "
 *   insn=0x00000000002E25C0 string=0x00000000002E25C4 "J}C"
 *   insn=0x00000000002E25C4 string=0x00000000002E25C8 " "
 *   insn=0x00000000002E25C8 string=0x00000000002E25CC " "
 *   insn=0x00000000002E25CC string=0x00000000002E25D0 "+ "
 *   insn=0x00000000002E25D0 string=0x00000000002E25D4 "A"
 *   insn=0x00000000002E25D4 string=0x00000000002E25D8 "@"
 *   insn=0x00000000002E25D8 string=0x00000000002E25DC "|"
 *   insn=0x00000000002E25DC string=0x00000000002E25E0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Quest::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Quest");
}

