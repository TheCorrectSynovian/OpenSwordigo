/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AF40
 * Mangled: _ZNK5Caver5Proto24PhysicsPlatformComponent11GetTypeNameEv
 * Demangled: Caver::Proto::PhysicsPlatformComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x000000000031AF4C string=0x000000000031AF50 "S"
 *   insn=0x000000000031AF50 string=0x000000000031AF54 "i"
 *   insn=0x000000000031AF5C string=0x000000000058BFE7 "Caver.Proto.PhysicsPlatformComponent"
 *   insn=0x000000000031AF6C string=0x000000000031AF70 "h"
 *   insn=0x000000000031AF90 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031AF94 string=0x000000000031AF98 "H"
 *   insn=0x000000000031AF98 string=0x000000000031AF9C ""
 *   insn=0x000000000031AFA0 string=0x000000000031AFA4 "i"
 *   insn=0x000000000031AFA4 string=0x000000000031AFA8 ")"
 *   insn=0x000000000031AFA8 string=0x000000000031AFAC "A"
 *   insn=0x000000000031AFAC string=0x000000000031AFB0 ""
 *   insn=0x000000000031AFB4 string=0x000000000031AFB8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PhysicsPlatformComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PhysicsPlatformComponent");
}

