/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEB84
 * Mangled: _ZNK5Caver5Proto7Vector311GetTypeNameEv
 * Demangled: Caver::Proto::Vector3::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000002CEB90 string=0x00000000002CEB94 "S"
 *   insn=0x00000000002CEB94 string=0x00000000002CEB98 "i"
 *   insn=0x00000000002CEBA0 string=0x000000000058A43D "Caver.Proto.Vector3"
 *   insn=0x00000000002CEBB0 string=0x00000000002CEBB4 "h"
 *   insn=0x00000000002CEBD4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CEBDC string=0x00000000002CEBE0 ""
 *   insn=0x00000000002CEBE4 string=0x00000000002CEBE8 "A"
 *   insn=0x00000000002CEBE8 string=0x00000000002CEBEC "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Vector3::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Vector3");
}

