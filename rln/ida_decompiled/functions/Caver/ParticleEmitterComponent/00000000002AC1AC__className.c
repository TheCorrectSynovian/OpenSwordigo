/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC1AC
 * Mangled: _ZNK5Caver24ParticleEmitterComponent9classNameEv
 * Demangled: Caver::ParticleEmitterComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002A5C98  Caver::ParticleComponent::className(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002AC1B8 string=0x00000000002AC1BC "S"
 *   insn=0x00000000002AC1BC string=0x00000000002AC1C0 "i"
 *   insn=0x00000000002AC1C8 string=0x000000000058C098 "ParticleEmitter"
 *   insn=0x00000000002AC1D4 string=0x00000000002AC1D8 "x"
 *   insn=0x00000000002AC1D8 string=0x00000000002AC1DC "h"
 *   insn=0x00000000002AC1E8 string=0x00000000002AC1FC "5("
 *   insn=0x00000000002AC1FC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ParticleEmitterComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ParticleEmitter");
}

