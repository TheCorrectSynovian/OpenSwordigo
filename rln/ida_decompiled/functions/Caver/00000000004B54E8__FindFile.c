/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B54E8
 * Mangled: _ZN5Caver8FindFileERKSsS1_
 * Demangled: Caver::FindFile(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F6F40  Caver::FindFile(std::string const&,std::string const&)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000004B54F4 string=0x00000000004B54F8 "S"
 *   insn=0x00000000004B54F8 string=0x00000000004B54FC "i"
 *   insn=0x00000000004B5514 string=0x00000000004B5518 "h"
 *   insn=0x00000000004B5524 string=0x00000000004B5538 "f"
 *   insn=0x00000000004B5538 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::FindFile@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "");
}

