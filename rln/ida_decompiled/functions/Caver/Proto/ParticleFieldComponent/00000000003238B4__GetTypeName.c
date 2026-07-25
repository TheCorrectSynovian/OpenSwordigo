/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003238B4
 * Mangled: _ZNK5Caver5Proto22ParticleFieldComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ParticleFieldComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000003238C0 string=0x00000000003238C4 "S"
 *   insn=0x00000000003238C4 string=0x00000000003238C8 "i"
 *   insn=0x00000000003238CC string=0x00000000003238D0 "A"
 *   insn=0x00000000003238D0 string=0x000000000058C175 "Caver.Proto.ParticleFieldComponent"
 *   insn=0x00000000003238E0 string=0x00000000003238E4 "h"
 *   insn=0x00000000003238F0 string=0x0000000000323904 "sJ"
 *   insn=0x0000000000323904 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000323908 string=0x000000000032390C ""
 *   insn=0x000000000032390C string=0x0000000000323910 ""
 *   insn=0x0000000000323914 string=0x0000000000323918 "A"
 *   insn=0x0000000000323918 string=0x000000000032391C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ParticleFieldComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ParticleFieldComponent");
}

