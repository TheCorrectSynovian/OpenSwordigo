/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236CA8
 * Mangled: _ZNK5Caver21ShadowVolumeComponent9classNameEv
 * Demangled: Caver::ShadowVolumeComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000236CB4 string=0x0000000000236CB8 "S"
 *   insn=0x0000000000236CB8 string=0x0000000000236CBC "i"
 *   insn=0x0000000000236CC0 string=0x0000000000236CC4 "a"
 *   insn=0x0000000000236CC4 string=0x0000000000584780 "ShadowVolume"
 *   insn=0x0000000000236CD4 string=0x0000000000236CD8 "h"
 *   insn=0x0000000000236CE4 string=0x0000000000236CF8 "v"
 *   insn=0x0000000000236CF8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000236CFC string=0x0000000000236D00 "`%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ShadowVolumeComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ShadowVolume");
}

