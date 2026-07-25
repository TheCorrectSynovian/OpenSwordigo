/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000328D88
 * Mangled: _ZNK5Caver5Proto34BouncingMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000328D94 string=0x0000000000328D98 "S"
 *   insn=0x0000000000328D98 string=0x0000000000328D9C "i"
 *   insn=0x0000000000328DA0 string=0x0000000000328DA4 "!"
 *   insn=0x0000000000328DA4 string=0x000000000058C348 "Caver.Proto.BouncingMonsterControllerComponent"
 *   insn=0x0000000000328DB4 string=0x0000000000328DB8 "h"
 *   insn=0x0000000000328DC4 string=0x0000000000328DD8 ">5"
 *   insn=0x0000000000328DD8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000328DE0 string=0x0000000000328DE4 "QF"
 *   insn=0x0000000000328DE8 string=0x0000000000328DEC "A"
 *   insn=0x0000000000328DEC string=0x0000000000328DF0 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::BouncingMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.BouncingMonsterControllerComponent");
}

