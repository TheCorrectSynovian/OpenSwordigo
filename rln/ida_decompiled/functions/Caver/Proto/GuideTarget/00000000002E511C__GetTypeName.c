/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E511C
 * Mangled: _ZNK5Caver5Proto11GuideTarget11GetTypeNameEv
 * Demangled: Caver::Proto::GuideTarget::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x00000000002E5128 string=0x00000000002E512C "S"
 *   insn=0x00000000002E512C string=0x00000000002E5130 "i"
 *   insn=0x00000000002E5134 string=0x00000000002E5138 "!"
 *   insn=0x00000000002E5138 string=0x000000000058AC78 "Caver.Proto.GuideTarget"
 *   insn=0x00000000002E5148 string=0x00000000002E514C "h"
 *   insn=0x00000000002E5158 string=0x00000000002E516C "YD"
 *   insn=0x00000000002E516C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E5170 string=0x00000000002E5174 ""
 *   insn=0x00000000002E5174 string=0x00000000002E5178 ""
 *   insn=0x00000000002E517C string=0x00000000002E5180 " "
 *   insn=0x00000000002E5180 string=0x00000000002E5184 "( "
 *   insn=0x00000000002E5184 string=0x00000000002E5188 ""
 *   insn=0x00000000002E5188 string=0x00000000002E518C " "
 *   insn=0x00000000002E518C string=0x00000000002E5190 ""
 *   insn=0x00000000002E519C string=0x00000000002E51A0 "A"
 *   insn=0x00000000002E51B0 string=0x00000000002E51B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GuideTarget::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GuideTarget");
}

