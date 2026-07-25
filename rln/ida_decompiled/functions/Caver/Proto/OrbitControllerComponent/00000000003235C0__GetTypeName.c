/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003235C0
 * Mangled: _ZNK5Caver5Proto24OrbitControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::OrbitControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000003235CC string=0x00000000003235D0 "S"
 *   insn=0x00000000003235D0 string=0x00000000003235D4 "i"
 *   insn=0x00000000003235D8 string=0x00000000003235DC "A"
 *   insn=0x00000000003235DC string=0x000000000058C150 "Caver.Proto.OrbitControllerComponent"
 *   insn=0x00000000003235E8 string=0x00000000003235EC "s\t"
 *   insn=0x00000000003235EC string=0x00000000003235F0 "h"
 *   insn=0x00000000003235FC string=0x0000000000323610 "0K"
 *   insn=0x0000000000323610 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000323614 string=0x0000000000323618 ""
 *   insn=0x0000000000323618 string=0x000000000032361C ""
 *   insn=0x000000000032361C string=0x0000000000323620 "A"
 *   insn=0x0000000000323620 string=0x0000000000323624 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::OrbitControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.OrbitControllerComponent");
}

