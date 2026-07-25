/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002830C0
 * Mangled: _ZNK5Caver19FireBreathComponent9classNameEv
 * Demangled: Caver::FireBreathComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002830CC string=0x00000000002830D0 "S"
 *   insn=0x00000000002830D0 string=0x00000000002830D4 "i"
 *   insn=0x00000000002830DC string=0x00000000005857AA "FireBreath"
 *   insn=0x00000000002830EC string=0x00000000002830F0 "h"
 *   insn=0x00000000002830FC string=0x0000000000283110 "p"
 *   insn=0x0000000000283110 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::FireBreathComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "FireBreath");
}

