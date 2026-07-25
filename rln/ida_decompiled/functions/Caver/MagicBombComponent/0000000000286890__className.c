/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286890
 * Mangled: _ZNK5Caver18MagicBombComponent9classNameEv
 * Demangled: Caver::MagicBombComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000028689C string=0x00000000002868A0 "S"
 *   insn=0x00000000002868A0 string=0x00000000002868A4 "i"
 *   insn=0x00000000002868AC string=0x000000000058574B "MagicBomb"
 *   insn=0x00000000002868BC string=0x00000000002868C0 "h"
 *   insn=0x00000000002868CC string=0x00000000002868E0 "|"
 *   insn=0x00000000002868E0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MagicBombComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "MagicBomb");
}

