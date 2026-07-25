/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C74A8
 * Mangled: _ZNK5Caver24SwingableWeaponComponent9classNameEv
 * Demangled: Caver::SwingableWeaponComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002C75D0  Caver::WeaponGlowComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002C74B4 string=0x00000000002C74B8 "S"
 *   insn=0x00000000002C74B8 string=0x00000000002C74BC "i"
 *   insn=0x00000000002C74C4 string=0x00000000005854D8 "SwingableWeapon"
 *   insn=0x00000000002C74D4 string=0x00000000002C74D8 "h"
 *   insn=0x00000000002C74E4 string=0x00000000002C74F8 "v"
 *   insn=0x00000000002C74F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SwingableWeaponComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "SwingableWeapon");
}

