/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031FB90
 * Mangled: _ZNK5Caver5Proto17ParticleComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ParticleComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000031FB9C string=0x000000000031FBA0 "S"
 *   insn=0x000000000031FBA0 string=0x000000000031FBA4 "i"
 *   insn=0x000000000031FBA8 string=0x000000000031FBAC "a"
 *   insn=0x000000000031FBAC string=0x000000000058C0CD "Caver.Proto.ParticleComponent"
 *   insn=0x000000000031FBBC string=0x000000000031FBC0 "h"
 *   insn=0x000000000031FBE0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031FBE4 string=0x000000000031FBE8 "("
 *   insn=0x000000000031FBE8 string=0x000000000031FBEC ""
 *   insn=0x000000000031FBF8 string=0x000000000031FBFC "A"
 *   insn=0x000000000031FC00 string=0x000000000031FC04 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ParticleComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ParticleComponent");
}

