/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE760
 * Mangled: _ZNK5Caver28GroundMeshGeneratorComponent9classNameEv
 * Demangled: Caver::GroundMeshGeneratorComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000021C130  Caver::GroundMeshComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002BE76C string=0x00000000002BE770 "S"
 *   insn=0x00000000002BE770 string=0x00000000002BE774 "i"
 *   insn=0x00000000002BE778 string=0x00000000002BE77C "!"
 *   insn=0x00000000002BE77C string=0x0000000000585435 "GroundMeshGenerator"
 *   insn=0x00000000002BE788 string=0x00000000002BE78C ""
 *   insn=0x00000000002BE78C string=0x00000000002BE790 "h"
 *   insn=0x00000000002BE7B0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BE7B4 string=0x00000000002BE7B8 "@!"
 *   insn=0x00000000002BE7BC string=0x000000000021C130 "@&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GroundMeshGeneratorComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "GroundMeshGenerator");
}

