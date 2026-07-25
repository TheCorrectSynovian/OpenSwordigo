/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE5A4
 * Mangled: _ZNK5Caver5Proto7Vector211GetTypeNameEv
 * Demangled: Caver::Proto::Vector2::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002CE5B0 string=0x00000000002CE5B4 "S"
 *   insn=0x00000000002CE5B4 string=0x00000000002CE5B8 "i"
 *   insn=0x00000000002CE5C0 string=0x000000000058A429 "Caver.Proto.Vector2"
 *   insn=0x00000000002CE5CC string=0x00000000002CE5D0 "za\n"
 *   insn=0x00000000002CE5D0 string=0x00000000002CE5D4 "h"
 *   insn=0x00000000002CE5E0 string=0x00000000002CE5F4 "7"
 *   insn=0x00000000002CE5F4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CE5FC string=0x00000000002CE600 ""
 *   insn=0x00000000002CE608 string=0x00000000002CE60C "A"
 *   insn=0x00000000002CE60C string=0x00000000002CE610 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Vector2::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Vector2");
}

