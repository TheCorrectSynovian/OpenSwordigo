/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A35BC
 * Mangled: _ZNK5Caver13GlowComponent9classNameEv
 * Demangled: Caver::GlowComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBEC0  Caver::ParticleEmitterComponent::ParticleEmitterComponent(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x00000000002A35C8 string=0x00000000002A35CC "S"
 *   insn=0x00000000002A35CC string=0x00000000002A35D0 "i"
 *   insn=0x00000000002A35D8 string=0x00000000005856C1 "Glow"
 *   insn=0x00000000002A35E4 string=0x00000000002A35E8 "t"
 *   insn=0x00000000002A35E8 string=0x00000000002A35EC "h"
 *   insn=0x00000000002A35F8 string=0x00000000002A360C "1K"
 *   insn=0x00000000002A360C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A3620 string=0x00000000002A3624 "'b"
 *   insn=0x00000000002A3624 string=0x00000000002A3628 """
 *   insn=0x00000000002A3624 string=0x00000000001FBEC0 "0'"
 *   insn=0x00000000002A3628 string=0x00000000002A362C ""
 *   insn=0x00000000002A3630 string=0x00000000002A3634 "\n"
 *   insn=0x00000000002A3634 string=0x00000000002A3638 "\tA"
 *   insn=0x00000000002A3638 string=0x00000000002A363C ""
 *   insn=0x00000000002A363C string=0x00000000002A3640 "@"
 *   insn=0x00000000002A3644 string=0x00000000002A3648 "i"
 *   insn=0x00000000002A3648 string=0x00000000002A364C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GlowComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Glow");
}

