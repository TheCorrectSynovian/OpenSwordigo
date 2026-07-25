/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318D20
 * Mangled: _ZNK5Caver5Proto22PhysicsObjectComponent11GetTypeNameEv
 * Demangled: Caver::Proto::PhysicsObjectComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000318D2C string=0x0000000000318D30 "S"
 *   insn=0x0000000000318D30 string=0x0000000000318D34 "i"
 *   insn=0x0000000000318D3C string=0x000000000058BF57 "Caver.Proto.PhysicsObjectComponent"
 *   insn=0x0000000000318D4C string=0x0000000000318D50 "h"
 *   insn=0x0000000000318D5C string=0x0000000000318D70 "Xu"
 *   insn=0x0000000000318D70 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000318D74 string=0x0000000000318D78 "h"
 *   insn=0x0000000000318D78 string=0x0000000000318D7C "1E"
 *   insn=0x0000000000318D88 string=0x0000000000318D8C "A"
 *   insn=0x0000000000318D8C string=0x0000000000318D90 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PhysicsObjectComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PhysicsObjectComponent");
}

