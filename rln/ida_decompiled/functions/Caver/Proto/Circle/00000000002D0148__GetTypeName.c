/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0148
 * Mangled: _ZNK5Caver5Proto6Circle11GetTypeNameEv
 * Demangled: Caver::Proto::Circle::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000002D0154 string=0x00000000002D0158 "S"
 *   insn=0x00000000002D0158 string=0x00000000002D015C "i"
 *   insn=0x00000000002D0164 string=0x000000000058A477 "Caver.Proto.Circle"
 *   insn=0x00000000002D0174 string=0x00000000002D0178 "h"
 *   insn=0x00000000002D0184 string=0x00000000002D0198 "N"
 *   insn=0x00000000002D0198 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D01A0 string=0x00000000002D01A4 ""
 *   insn=0x00000000002D01A4 string=0x00000000002D01A8 "\t"
 *   insn=0x00000000002D01B0 string=0x00000000002D01B4 "A"
 *   insn=0x00000000002D01B4 string=0x00000000002D01B8 "\t|"
 *   insn=0x00000000002D01BC string=0x00000000002D01C0 "\n "
 *   insn=0x00000000002D01C0 string=0x00000000002D01C4 ""
 *   insn=0x00000000002D01C4 string=0x00000000002D01C8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Circle::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Circle");
}

