/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD254
 * Mangled: _ZNK5Caver23ParticleObjectComponent9classNameEv
 * Demangled: Caver::ParticleObjectComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000002AD260 string=0x00000000002AD264 "S"
 *   insn=0x00000000002AD264 string=0x00000000002AD268 "i"
 *   insn=0x00000000002AD270 string=0x00000000005856C6 "ParticleObject"
 *   insn=0x00000000002AD27C string=0x00000000002AD280 "N"
 *   insn=0x00000000002AD280 string=0x00000000002AD284 "h"
 *   insn=0x00000000002AD290 string=0x00000000002AD2A4 "$"
 *   insn=0x00000000002AD2A4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ParticleObjectComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ParticleObject");
}

