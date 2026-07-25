/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023CC4C
 * Mangled: _ZNK5Caver15SpriteComponent9classNameEv
 * Demangled: Caver::SpriteComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000023CC58 string=0x000000000023CC5C "S"
 *   insn=0x000000000023CC5C string=0x000000000023CC60 "i"
 *   insn=0x000000000023CC64 string=0x000000000023CC68 "A"
 *   insn=0x000000000023CC68 string=0x000000000058490E "Sprite"
 *   insn=0x000000000023CC78 string=0x000000000023CC7C "h"
 *   insn=0x000000000023CC9C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023CCA0 string=0x000000000023CCA4 "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SpriteComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Sprite");
}

