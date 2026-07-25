/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3364
 * Mangled: _ZNK5Caver5Proto11EntityClass11GetTypeNameEv
 * Demangled: Caver::Proto::EntityClass::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002E3370 string=0x00000000002E3374 "S"
 *   insn=0x00000000002E3374 string=0x00000000002E3378 "i"
 *   insn=0x00000000002E337C string=0x00000000002E3380 "!"
 *   insn=0x00000000002E3380 string=0x000000000058AC3C "Caver.Proto.EntityClass"
 *   insn=0x00000000002E338C string=0x00000000002E3390 "\n"
 *   insn=0x00000000002E3390 string=0x00000000002E3394 "h"
 *   insn=0x00000000002E33B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::EntityClass::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.EntityClass");
}

