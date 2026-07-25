/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE098
 * Mangled: _ZNK5Caver5Proto8DateTime11GetTypeNameEv
 * Demangled: Caver::Proto::DateTime::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x00000000002CE0A4 string=0x00000000002CE0A8 "S"
 *   insn=0x00000000002CE0A8 string=0x00000000002CE0AC "i"
 *   insn=0x00000000002CE0B4 string=0x000000000058A414 "Caver.Proto.DateTime"
 *   insn=0x00000000002CE0C4 string=0x00000000002CE0C8 "h"
 *   insn=0x00000000002CE0D4 string=0x00000000002CE0E8 "z"
 *   insn=0x00000000002CE0E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CE0F0 string=0x00000000002CE0F4 ""
 *   insn=0x00000000002CE0F8 string=0x00000000002CE0FC "A"
 *   insn=0x00000000002CE0FC string=0x00000000002CE100 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::DateTime::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.DateTime");
}

