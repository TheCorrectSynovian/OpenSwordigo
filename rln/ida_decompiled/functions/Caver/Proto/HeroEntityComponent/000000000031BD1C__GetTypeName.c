/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BD1C
 * Mangled: _ZNK5Caver5Proto19HeroEntityComponent11GetTypeNameEv
 * Demangled: Caver::Proto::HeroEntityComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000031BD28 string=0x000000000031BD2C "S"
 *   insn=0x000000000031BD2C string=0x000000000031BD30 "i"
 *   insn=0x000000000031BD38 string=0x000000000058C02C "Caver.Proto.HeroEntityComponent"
 *   insn=0x000000000031BD48 string=0x000000000031BD4C "h"
 *   insn=0x000000000031BD58 string=0x000000000031BD6C "Yi"
 *   insn=0x000000000031BD6C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031BD70 string=0x000000000031BD74 "H"
 *   insn=0x000000000031BD74 string=0x000000000031BD78 "9E"
 *   insn=0x000000000031BD7C string=0x000000000031BD80 "I"
 *   insn=0x000000000031BD80 string=0x000000000031BD84 ")UC"
 *   insn=0x000000000031BD84 string=0x000000000031BD88 "A"
 *   insn=0x000000000031BD88 string=0x000000000031BD8C ""
 *   insn=0x000000000031BD90 string=0x000000000031BD94 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::HeroEntityComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.HeroEntityComponent");
}

