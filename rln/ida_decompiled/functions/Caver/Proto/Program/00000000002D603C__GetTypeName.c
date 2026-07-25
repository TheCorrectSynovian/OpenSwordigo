/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D603C
 * Mangled: _ZNK5Caver5Proto7Program11GetTypeNameEv
 * Demangled: Caver::Proto::Program::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002D6048 string=0x00000000002D604C "S"
 *   insn=0x00000000002D604C string=0x00000000002D6050 "i"
 *   insn=0x00000000002D6058 string=0x000000000058A533 "Caver.Proto.Program"
 *   insn=0x00000000002D6068 string=0x00000000002D606C "h"
 *   insn=0x00000000002D608C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D6090 string=0x00000000002D6094 "h "
 *   insn=0x00000000002D6094 string=0x00000000002D6098 ""
 *   insn=0x00000000002D609C string=0x00000000002D60A0 "A"
 *   insn=0x00000000002D60A0 string=0x00000000002D60A4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Program::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Program");
}

