/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033567C
 * Mangled: _ZNK5Caver5Proto19FireBreathComponent11GetTypeNameEv
 * Demangled: Caver::Proto::FireBreathComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000335688 string=0x000000000033568C "S"
 *   insn=0x000000000033568C string=0x0000000000335690 "i"
 *   insn=0x0000000000335698 string=0x000000000058C610 "Caver.Proto.FireBreathComponent"
 *   insn=0x00000000003356A4 string=0x00000000003356A8 "D"
 *   insn=0x00000000003356A8 string=0x00000000003356AC "h"
 *   insn=0x00000000003356CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003356D4 string=0x00000000003356D8 ""
 *   insn=0x00000000003356E4 string=0x00000000003356E8 "A"
 *   insn=0x00000000003356E8 string=0x00000000003356EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::FireBreathComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.FireBreathComponent");
}

