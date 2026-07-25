/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DCA64
 * Mangled: _ZN5Caver15ParticleEmitter17TitleForParameterEj
 * Demangled: Caver::ParticleEmitter::TitleForParameter(uint)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000003DCA70 string=0x00000000003DCA74 "S"
 *   insn=0x00000000003DCA74 string=0x00000000003DCA78 "i"
 *   insn=0x00000000003DCA7C string=0x00000000003DCA80 "!"
 *   insn=0x00000000003DCA80 string=0x0000000000583F97 "unknown"
 *   insn=0x00000000003DCA8C string=0x00000000003DCA90 "J("
 *   insn=0x00000000003DCA90 string=0x00000000003DCA94 "h"
 *   insn=0x00000000003DCAA0 string=0x00000000003DCAB4 "f"
 *   insn=0x00000000003DCAB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ParticleEmitter::TitleForParameter@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "unknown");
}

