/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315228
 * Mangled: _ZNK5Caver5Proto23BushControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::BushControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000315234 string=0x0000000000315238 "S"
 *   insn=0x0000000000315238 string=0x000000000031523C "i"
 *   insn=0x0000000000315244 string=0x000000000058BE82 "Caver.Proto.BushControllerComponent"
 *   insn=0x0000000000315250 string=0x0000000000315254 "YF\t"
 *   insn=0x0000000000315254 string=0x0000000000315258 "h"
 *   insn=0x0000000000315278 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031527C string=0x0000000000315280 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::BushControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.BushControllerComponent");
}

