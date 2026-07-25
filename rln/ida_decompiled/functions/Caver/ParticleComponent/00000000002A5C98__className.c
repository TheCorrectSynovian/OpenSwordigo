/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5C98
 * Mangled: _ZNK5Caver17ParticleComponent9classNameEv
 * Demangled: Caver::ParticleComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002A5CA4 string=0x00000000002A5CA8 "S"
 *   insn=0x00000000002A5CA8 string=0x00000000002A5CAC "i"
 *   insn=0x00000000002A5CB4 string=0x0000000000585691 "Particle"
 *   insn=0x00000000002A5CC4 string=0x00000000002A5CC8 "h"
 *   insn=0x00000000002A5CD4 string=0x00000000002A5CE8 "zA"
 *   insn=0x00000000002A5CE8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ParticleComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Particle");
}

