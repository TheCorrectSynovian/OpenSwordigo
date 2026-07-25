/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC8B0
 * Mangled: _ZNK5Caver22ParticleFieldComponent9classNameEv
 * Demangled: Caver::ParticleFieldComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002AC8BC string=0x00000000002AC8C0 "S"
 *   insn=0x00000000002AC8C0 string=0x00000000002AC8C4 "i"
 *   insn=0x00000000002AC8CC string=0x00000000005856F2 "ParticleField"
 *   insn=0x00000000002AC8DC string=0x00000000002AC8E0 "h"
 *   insn=0x00000000002AC8EC string=0x00000000002AC900 "t&"
 *   insn=0x00000000002AC900 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ParticleFieldComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ParticleField");
}

