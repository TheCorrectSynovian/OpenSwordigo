/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023BB0C
 * Mangled: _ZNK5Caver19SpawnPointComponent9classNameEv
 * Demangled: Caver::SpawnPointComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000023BB18 string=0x000000000023BB1C "S"
 *   insn=0x000000000023BB1C string=0x000000000023BB20 "i"
 *   insn=0x000000000023BB24 string=0x000000000023BB28 "A"
 *   insn=0x000000000023BB28 string=0x00000000005848E1 "SpawnPoint"
 *   insn=0x000000000023BB34 string=0x000000000023BB38 " "
 *   insn=0x000000000023BB38 string=0x000000000023BB3C "h"
 *   insn=0x000000000023BB5C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023BB60 string=0x000000000023BB64 "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::SpawnPointComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "SpawnPoint");
}

