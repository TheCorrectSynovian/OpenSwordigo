/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003180C4
 * Mangled: _ZNK5Caver5Proto22MonsterEntityComponent11GetTypeNameEv
 * Demangled: Caver::Proto::MonsterEntityComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000003180D0 string=0x00000000003180D4 "S"
 *   insn=0x00000000003180D4 string=0x00000000003180D8 "i"
 *   insn=0x00000000003180E0 string=0x000000000058BF34 "Caver.Proto.MonsterEntityComponent"
 *   insn=0x00000000003180F0 string=0x00000000003180F4 "h"
 *   insn=0x0000000000318100 string=0x0000000000318114 "ox"
 *   insn=0x0000000000318114 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000318118 string=0x000000000031811C "h"
 *   insn=0x000000000031811C string=0x0000000000318120 ""
 *   insn=0x000000000031812C string=0x0000000000318130 "A"
 *   insn=0x000000000031813C string=0x0000000000318140 "\t0"
 *   insn=0x0000000000318140 string=0x0000000000318144 "\n"
 *   insn=0x0000000000318144 string=0x0000000000318148 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MonsterEntityComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MonsterEntityComponent");
}

