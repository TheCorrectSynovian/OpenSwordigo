/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028580C
 * Mangled: _ZNK5Caver18MagicBoltComponent9classNameEv
 * Demangled: Caver::MagicBoltComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8740  Caver::SpellComponent::SpellComponent(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 19
 *   insn=0x0000000000285818 string=0x000000000028581C "S"
 *   insn=0x000000000028581C string=0x0000000000285820 "i"
 *   insn=0x0000000000285828 string=0x0000000000585755 "MagicBolt"
 *   insn=0x0000000000285838 string=0x000000000028583C "h"
 *   insn=0x000000000028585C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000285874 string=0x0000000000285878 "#"
 *   insn=0x0000000000285874 string=0x00000000001F8740 "0'"
 *   insn=0x0000000000285878 string=0x000000000028587C ""
 *   insn=0x0000000000285880 string=0x0000000000285884 "`6"
 *   insn=0x0000000000285888 string=0x000000000028588C "\t!"
 *   insn=0x000000000028588C string=0x0000000000285890 " "
 *   insn=0x0000000000285890 string=0x0000000000285894 "\t!"
 *   insn=0x0000000000285894 string=0x0000000000285898 " "
 *   insn=0x0000000000285898 string=0x000000000028589C "\t"
 *   insn=0x000000000028589C string=0x00000000002858A0 "`"
 *   insn=0x00000000002858A0 string=0x00000000002858A4 " "
 *   insn=0x00000000002858A4 string=0x00000000002858A8 "A"
 *   insn=0x00000000002858AC string=0x00000000002858B0 "h"
 *   insn=0x00000000002858B0 string=0x00000000002858B4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MagicBoltComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "MagicBolt");
}

