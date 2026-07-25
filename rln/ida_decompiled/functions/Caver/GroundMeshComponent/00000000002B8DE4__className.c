/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8DE4
 * Mangled: _ZNK5Caver19GroundMeshComponent9classNameEv
 * Demangled: Caver::GroundMeshComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002B8DF0 string=0x00000000002B8DF4 "S"
 *   insn=0x00000000002B8DF4 string=0x00000000002B8DF8 "i"
 *   insn=0x00000000002B8DFC string=0x00000000002B8E00 "a"
 *   insn=0x00000000002B8E00 string=0x000000000058542A "GroundMesh"
 *   insn=0x00000000002B8E0C string=0x00000000002B8E10 "j"
 *   insn=0x00000000002B8E10 string=0x00000000002B8E14 "h"
 *   insn=0x00000000002B8E20 string=0x00000000002B8E34 "'"
 *   insn=0x00000000002B8E34 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B8E3C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GroundMeshComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "GroundMesh");
}

