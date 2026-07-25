/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BF80
 * Mangled: _ZNK5Caver23MagicSpellCastComponent9classNameEv
 * Demangled: Caver::MagicSpellCastComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000028BF8C string=0x000000000028BF90 "S"
 *   insn=0x000000000028BF90 string=0x000000000028BF94 "i"
 *   insn=0x000000000028BF9C string=0x000000000058579B "MagicSpellCast"
 *   insn=0x000000000028BFAC string=0x000000000028BFB0 "h"
 *   insn=0x000000000028BFD0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MagicSpellCastComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "MagicSpellCast");
}

