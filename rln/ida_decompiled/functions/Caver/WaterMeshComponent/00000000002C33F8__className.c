/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C33F8
 * Mangled: _ZNK5Caver18WaterMeshComponent9classNameEv
 * Demangled: Caver::WaterMeshComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002C3404 string=0x00000000002C3408 "S"
 *   insn=0x00000000002C3408 string=0x00000000002C340C "i"
 *   insn=0x00000000002C3414 string=0x0000000000585449 "WaterMesh"
 *   insn=0x00000000002C3424 string=0x00000000002C3428 "h"
 *   insn=0x00000000002C3448 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::WaterMeshComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "WaterMesh");
}

