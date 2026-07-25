/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1814
 * Mangled: _ZNK5Caver5Proto5Skill11GetTypeNameEv
 * Demangled: Caver::Proto::Skill::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x00000000002E1820 string=0x00000000002E1824 "S"
 *   insn=0x00000000002E1824 string=0x00000000002E1828 "i"
 *   insn=0x00000000002E182C string=0x00000000002E1830 "A"
 *   insn=0x00000000002E1830 string=0x000000000058AC18 "Caver.Proto.Skill"
 *   insn=0x00000000002E1840 string=0x00000000002E1844 "h"
 *   insn=0x00000000002E1864 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E1868 string=0x00000000002E186C "( "
 *   insn=0x00000000002E186C string=0x00000000002E1870 ""
 *   insn=0x00000000002E1870 string=0x00000000002E1874 ") "
 *   insn=0x00000000002E1874 string=0x00000000002E1878 ")"
 *   insn=0x00000000002E187C string=0x00000000002E1880 "( "
 *   insn=0x00000000002E1880 string=0x00000000002E1884 ""
 *   insn=0x00000000002E1888 string=0x00000000002E188C "!"
 *   insn=0x00000000002E188C string=0x00000000002E1890 "A"
 *   insn=0x00000000002E1890 string=0x00000000002E1894 ""
 *   insn=0x00000000002E1894 string=0x00000000002E1898 "( "
 *   insn=0x00000000002E1898 string=0x00000000002E189C ""
 *   insn=0x00000000002E18A0 string=0x00000000002E18A4 " "
 *   insn=0x00000000002E18A4 string=0x00000000002E18A8 "AF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Skill::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Skill");
}

