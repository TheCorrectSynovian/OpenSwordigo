/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000231280
 * Mangled: _ZNK5Caver15PortalComponent9classNameEv
 * Demangled: Caver::PortalComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000023128C string=0x0000000000231290 "S"
 *   insn=0x0000000000231290 string=0x0000000000231294 "i"
 *   insn=0x000000000023129C string=0x000000000058ABC8 "Portal"
 *   insn=0x00000000002312A8 string=0x00000000002312AC "C"
 *   insn=0x00000000002312AC string=0x00000000002312B0 "h"
 *   insn=0x00000000002312D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PortalComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Portal");
}

