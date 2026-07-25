/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F344
 * Mangled: _ZNK5Caver5Proto24ParticleEmitterComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ParticleEmitterComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000031F350 string=0x000000000031F354 "S"
 *   insn=0x000000000031F354 string=0x000000000031F358 "i"
 *   insn=0x000000000031F35C string=0x000000000031F360 "a"
 *   insn=0x000000000031F360 string=0x000000000058C0A8 "Caver.Proto.ParticleEmitterComponent"
 *   insn=0x000000000031F370 string=0x000000000031F374 "h"
 *   insn=0x000000000031F394 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031F398 string=0x000000000031F39C "("
 *   insn=0x000000000031F39C string=0x000000000031F3A0 "%E"
 *   insn=0x000000000031F3A4 string=0x000000000031F3A8 ")"
 *   insn=0x000000000031F3A8 string=0x000000000031F3AC ")"
 *   insn=0x000000000031F3AC string=0x000000000031F3B0 "A"
 *   insn=0x000000000031F3B0 string=0x000000000031F3B4 ""
 *   insn=0x000000000031F3B4 string=0x000000000031F3B8 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ParticleEmitterComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ParticleEmitterComponent");
}

