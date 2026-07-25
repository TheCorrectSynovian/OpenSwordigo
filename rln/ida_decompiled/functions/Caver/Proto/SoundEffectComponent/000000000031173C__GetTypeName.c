/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031173C
 * Mangled: _ZNK5Caver5Proto20SoundEffectComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SoundEffectComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000311748 string=0x000000000031174C "S"
 *   insn=0x000000000031174C string=0x0000000000311750 "i"
 *   insn=0x0000000000311758 string=0x000000000058BDD0 "Caver.Proto.SoundEffectComponent"
 *   insn=0x0000000000311768 string=0x000000000031176C "h"
 *   insn=0x000000000031178C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000311794 string=0x0000000000311798 "QD"
 *   insn=0x00000000003117A0 string=0x00000000003117A4 "A"
 *   insn=0x00000000003117A4 string=0x00000000003117A8 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SoundEffectComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SoundEffectComponent");
}

