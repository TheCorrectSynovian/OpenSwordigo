/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E64CC
 * Mangled: _ZNK5Caver5Proto11GameOptions11GetTypeNameEv
 * Demangled: Caver::Proto::GameOptions::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x00000000002E64D8 string=0x00000000002E64DC "S"
 *   insn=0x00000000002E64DC string=0x00000000002E64E0 "i"
 *   insn=0x00000000002E64E4 string=0x00000000002E64E8 "!"
 *   insn=0x00000000002E64E8 string=0x000000000058AC90 "Caver.Proto.GameOptions"
 *   insn=0x00000000002E64F8 string=0x00000000002E64FC "h"
 *   insn=0x00000000002E6508 string=0x00000000002E651C "m?"
 *   insn=0x00000000002E651C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E6520 string=0x00000000002E6524 " "
 *   insn=0x00000000002E6524 string=0x00000000002E6528 "\t"
 *   insn=0x00000000002E6528 string=0x00000000002E652C "YG"
 *   insn=0x00000000002E652C string=0x00000000002E6530 "\t"
 *   insn=0x00000000002E6530 string=0x00000000002E6534 "\t"
 *   insn=0x00000000002E6534 string=0x00000000002E6538 "\t$"
 *   insn=0x00000000002E6538 string=0x00000000002E653C "\t`"
 *   insn=0x00000000002E653C string=0x00000000002E6540 "\t@"
 *   insn=0x00000000002E6540 string=0x00000000002E6544 "\t@"
 *   insn=0x00000000002E6544 string=0x00000000002E6548 "\t\"
 *   insn=0x00000000002E6548 string=0x00000000002E654C "\t "
 *   insn=0x00000000002E6550 string=0x00000000002E6554 "\tx"
 *   insn=0x00000000002E6558 string=0x00000000002E655C "A"
 *   insn=0x00000000002E6564 string=0x00000000002E6568 "\t "
 *   insn=0x00000000002E656C string=0x00000000002E6570 "\tX"
 *   insn=0x00000000002E6574 string=0x00000000002E6578 "\t"
 *   insn=0x00000000002E657C string=0x00000000002E6580 "\t"
 *   insn=0x00000000002E6584 string=0x00000000002E6588 "\t"
 *   insn=0x00000000002E6588 string=0x00000000002E658C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GameOptions::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GameOptions");
}

