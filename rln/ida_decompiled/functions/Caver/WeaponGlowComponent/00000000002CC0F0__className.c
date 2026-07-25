/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC0F0
 * Mangled: _ZNK5Caver19WeaponGlowComponent9classNameEv
 * Demangled: Caver::WeaponGlowComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002CC0FC string=0x00000000002CC100 "S"
 *   insn=0x00000000002CC100 string=0x00000000002CC104 "i"
 *   insn=0x00000000002CC10C string=0x000000000058550E "WeaponGlow"
 *   insn=0x00000000002CC11C string=0x00000000002CC120 "h"
 *   insn=0x00000000002CC12C string=0x00000000002CC140 "d"
 *   insn=0x00000000002CC140 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::WeaponGlowComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "WeaponGlow");
}

