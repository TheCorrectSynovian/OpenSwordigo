/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B694
 * Mangled: _ZNK5Caver5Proto19EntityInfoComponent11GetTypeNameEv
 * Demangled: Caver::Proto::EntityInfoComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000031B6A0 string=0x000000000031B6A4 "S"
 *   insn=0x000000000031B6A4 string=0x000000000031B6A8 "i"
 *   insn=0x000000000031B6B0 string=0x000000000058C00C "Caver.Proto.EntityInfoComponent"
 *   insn=0x000000000031B6BC string=0x000000000031B6C0 ">-\t"
 *   insn=0x000000000031B6C0 string=0x000000000031B6C4 "h"
 *   insn=0x000000000031B6E4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031B6E8 string=0x000000000031B6EC "h"
 *   insn=0x000000000031B6EC string=0x000000000031B6F0 ""
 *   insn=0x000000000031B6FC string=0x000000000031B700 "A"
 *   insn=0x000000000031B700 string=0x000000000031B704 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::EntityInfoComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.EntityInfoComponent");
}

