/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3C40
 * Mangled: _ZNK5Caver5Proto23GuideTarget_LevelObject11GetTypeNameEv
 * Demangled: Caver::Proto::GuideTarget_LevelObject::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x00000000002E3C4C string=0x00000000002E3C50 "S"
 *   insn=0x00000000002E3C50 string=0x00000000002E3C54 "i"
 *   insn=0x00000000002E3C58 string=0x00000000002E3C5C "!"
 *   insn=0x00000000002E3C5C string=0x000000000058AC54 "Caver.Proto.GuideTarget.LevelObject"
 *   insn=0x00000000002E3C6C string=0x00000000002E3C70 "h"
 *   insn=0x00000000002E3C90 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E3C94 string=0x00000000002E3C98 "@"
 *   insn=0x00000000002E3C98 string=0x00000000002E3C9C ""
 *   insn=0x00000000002E3CA0 string=0x00000000002E3CA4 "H"
 *   insn=0x00000000002E3CA4 string=0x00000000002E3CA8 " "
 *   insn=0x00000000002E3CA8 string=0x00000000002E3CAC ""
 *   insn=0x00000000002E3CB4 string=0x00000000002E3CB8 "( "
 *   insn=0x00000000002E3CB8 string=0x00000000002E3CBC ""
 *   insn=0x00000000002E3CC8 string=0x00000000002E3CCC " "
 *   insn=0x00000000002E3CCC string=0x00000000002E3CD0 "EF"
 *   insn=0x00000000002E3CD0 string=0x00000000002E3CD4 "A"
 *   insn=0x00000000002E3CD4 string=0x00000000002E3CD8 ""
 *   insn=0x00000000002E3CD8 string=0x00000000002E3CDC " "
 *   insn=0x00000000002E3CDC string=0x00000000002E3CE0 ""
 *   insn=0x00000000002E3CE4 string=0x00000000002E3CE8 " "
 *   insn=0x00000000002E3CE8 string=0x00000000002E3CEC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GuideTarget_LevelObject::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GuideTarget.LevelObject");
}

