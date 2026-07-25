/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023AA08
 * Mangled: _ZNK5Caver20SoundEffectComponent9classNameEv
 * Demangled: Caver::SoundEffectComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000023AA14 string=0x000000000023AA18 "S"
 *   insn=0x000000000023AA18 string=0x000000000023AA1C "i"
 *   insn=0x000000000023AA24 string=0x000000000058A584 "SoundEffect"
 *   insn=0x000000000023AA30 string=0x000000000023AA34 "a"
 *   insn=0x000000000023AA34 string=0x000000000023AA38 "h"
 *   insn=0x000000000023AA58 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023AA5C string=0x000000000023AA60 "`%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SoundEffectComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "SoundEffect");
}

