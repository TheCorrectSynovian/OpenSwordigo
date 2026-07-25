/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000269C04
 * Mangled: _ZNK5Caver15EntityComponent9classNameEv
 * Demangled: Caver::EntityComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000269C10 string=0x0000000000269C14 "S"
 *   insn=0x0000000000269C14 string=0x0000000000269C18 "i"
 *   insn=0x0000000000269C20 string=0x000000000058548F "Entity"
 *   insn=0x0000000000269C30 string=0x0000000000269C34 "h"
 *   insn=0x0000000000269C54 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::EntityComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Entity");
}

