/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CD200
 * Mangled: _ZNK5Caver20WeaponTrailComponent9classNameEv
 * Demangled: Caver::WeaponTrailComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002CD20C string=0x00000000002CD210 "S"
 *   insn=0x00000000002CD210 string=0x00000000002CD214 "i"
 *   insn=0x00000000002CD21C string=0x0000000000585502 "WeaponTrail"
 *   insn=0x00000000002CD228 string=0x00000000002CD22C "cf\n"
 *   insn=0x00000000002CD22C string=0x00000000002CD230 "h"
 *   insn=0x00000000002CD23C string=0x00000000002CD250 " "
 *   insn=0x00000000002CD250 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::WeaponTrailComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "WeaponTrail");
}

