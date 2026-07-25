/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3A78
 * Mangled: _ZNK5Caver29MagicParticleEmitterComponent9classNameEv
 * Demangled: Caver::MagicParticleEmitterComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002A3A84 string=0x00000000002A3A88 "S"
 *   insn=0x00000000002A3A88 string=0x00000000002A3A8C "i"
 *   insn=0x00000000002A3A94 string=0x000000000058569A "MagicParticleEmitter"
 *   insn=0x00000000002A3AA0 string=0x00000000002A3AA4 "E"
 *   insn=0x00000000002A3AA4 string=0x00000000002A3AA8 "h"
 *   insn=0x00000000002A3AC8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MagicParticleEmitterComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "MagicParticleEmitter");
}

