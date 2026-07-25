/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003094B4
 * Mangled: _ZNK5Caver5Proto28GroundMeshGeneratorComponent11GetTypeNameEv
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000003094C0 string=0x00000000003094C4 "S"
 *   insn=0x00000000003094C4 string=0x00000000003094C8 "i"
 *   insn=0x00000000003094D0 string=0x000000000058BC5A "Caver.Proto.GroundMeshGeneratorComponent"
 *   insn=0x00000000003094E0 string=0x00000000003094E4 "h"
 *   insn=0x00000000003094F0 string=0x0000000000309504 "s"
 *   insn=0x0000000000309504 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000030950C string=0x0000000000309510 "q@"
 *   insn=0x0000000000309518 string=0x000000000030951C ")-F"
 *   insn=0x000000000030951C string=0x0000000000309520 "A"
 *   insn=0x0000000000309528 string=0x000000000030952C "\t"
 *   insn=0x000000000030952C string=0x0000000000309530 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GroundMeshGeneratorComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GroundMeshGeneratorComponent");
}

