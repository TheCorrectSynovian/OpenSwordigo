/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322DA0
 * Mangled: _ZNK5Caver5Proto23ParticleObjectComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ParticleObjectComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x0000000000322DAC string=0x0000000000322DB0 "S"
 *   insn=0x0000000000322DB0 string=0x0000000000322DB4 "i"
 *   insn=0x0000000000322DB8 string=0x0000000000322DBC "A"
 *   insn=0x0000000000322DBC string=0x000000000058C12C "Caver.Proto.ParticleObjectComponent"
 *   insn=0x0000000000322DC8 string=0x0000000000322DCC "{"
 *   insn=0x0000000000322DCC string=0x0000000000322DD0 "h"
 *   insn=0x0000000000322DDC string=0x0000000000322DF0 "8M"
 *   insn=0x0000000000322DF0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000322DF4 string=0x0000000000322DF8 "("
 *   insn=0x0000000000322DF8 string=0x0000000000322DFC ""
 *   insn=0x0000000000322E08 string=0x0000000000322E0C "A"
 *   insn=0x0000000000322E0C string=0x0000000000322E10 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ParticleObjectComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ParticleObjectComponent");
}

