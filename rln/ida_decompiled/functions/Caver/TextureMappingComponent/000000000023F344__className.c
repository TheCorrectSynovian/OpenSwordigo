/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F344
 * Mangled: _ZNK5Caver23TextureMappingComponent9classNameEv
 * Demangled: Caver::TextureMappingComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000023F350 string=0x000000000023F354 "S"
 *   insn=0x000000000023F354 string=0x000000000023F358 "i"
 *   insn=0x000000000023F35C string=0x000000000023F360 "!"
 *   insn=0x000000000023F360 string=0x0000000000584A5E "TextureMapping"
 *   insn=0x000000000023F370 string=0x000000000023F374 "h"
 *   insn=0x000000000023F394 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023F398 string=0x000000000023F39C "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::TextureMappingComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "TextureMapping");
}

