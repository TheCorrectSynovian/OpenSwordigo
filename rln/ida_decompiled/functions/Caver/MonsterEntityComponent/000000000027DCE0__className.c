/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DCE0
 * Mangled: _ZNK5Caver22MonsterEntityComponent9classNameEv
 * Demangled: Caver::MonsterEntityComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x000000000027DCEC string=0x000000000027DCF0 "S"
 *   insn=0x000000000027DCF0 string=0x000000000027DCF4 "i"
 *   insn=0x000000000027DCF8 string=0x000000000027DCFC "A"
 *   insn=0x000000000027DCFC string=0x0000000000585558 "MonsterEntity"
 *   insn=0x000000000027DD0C string=0x000000000027DD10 "h"
 *   insn=0x000000000027DD1C string=0x000000000027DD30 "h"
 *   insn=0x000000000027DD30 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MonsterEntityComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "MonsterEntity");
}

