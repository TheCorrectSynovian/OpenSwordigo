/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E9374
 * Mangled: _ZNK5Caver5Proto21PlayerProfile_Counter11GetTypeNameEv
 * Demangled: Caver::Proto::PlayerProfile_Counter::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x00000000002E9380 string=0x00000000002E9384 "S"
 *   insn=0x00000000002E9384 string=0x00000000002E9388 "i"
 *   insn=0x00000000002E9390 string=0x000000000058B135 "Caver.Proto.PlayerProfile.Counter"
 *   insn=0x00000000002E93A0 string=0x00000000002E93A4 "h"
 *   insn=0x00000000002E93C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E93CC string=0x00000000002E93D0 "\t"
 *   insn=0x00000000002E93D0 string=0x00000000002E93D4 "]B"
 *   insn=0x00000000002E93D4 string=0x00000000002E93D8 "\t|"
 *   insn=0x00000000002E93E4 string=0x00000000002E93E8 ")"
 *   insn=0x00000000002E93E8 string=0x00000000002E93EC "\np"
 *   insn=0x00000000002E93F0 string=0x00000000002E93F4 "J"
 *   insn=0x00000000002E93F4 string=0x00000000002E93F8 " "
 *   insn=0x00000000002E93FC string=0x00000000002E9400 ")"
 *   insn=0x00000000002E9400 string=0x00000000002E9404 "A"
 *   insn=0x00000000002E9408 string=0x00000000002E940C "JuF"
 *   insn=0x00000000002E940C string=0x00000000002E9410 "A"
 *   insn=0x00000000002E9410 string=0x00000000002E9414 "\nP"
 *   insn=0x00000000002E9418 string=0x00000000002E941C "JQ@"
 *   insn=0x00000000002E9420 string=0x00000000002E9424 ""
 *   insn=0x00000000002E9428 string=0x00000000002E942C "QG"
 *   insn=0x00000000002E9434 string=0x00000000002E9438 ""
 *   insn=0x00000000002E943C string=0x00000000002E9440 "\t|"
 *   insn=0x00000000002E9440 string=0x00000000002E9444 "\n|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PlayerProfile_Counter::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PlayerProfile.Counter");
}

