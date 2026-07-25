/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000233044
 * Mangled: _ZNK5Caver16ProgramComponent9classNameEv
 * Demangled: Caver::ProgramComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000233050 string=0x0000000000233054 "S"
 *   insn=0x0000000000233054 string=0x0000000000233058 "i"
 *   insn=0x0000000000233060 string=0x000000000058A53F "Program"
 *   insn=0x0000000000233070 string=0x0000000000233074 "h"
 *   insn=0x0000000000233094 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ProgramComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Program");
}

