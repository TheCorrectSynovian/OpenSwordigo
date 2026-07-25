/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000321C34
 * Mangled: _ZNK5Caver5Proto20FireEmitterComponent11GetTypeNameEv
 * Demangled: Caver::Proto::FireEmitterComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000321C40 string=0x0000000000321C44 "S"
 *   insn=0x0000000000321C44 string=0x0000000000321C48 "i"
 *   insn=0x0000000000321C4C string=0x0000000000321C50 "A"
 *   insn=0x0000000000321C50 string=0x000000000058C0EB "Caver.Proto.FireEmitterComponent"
 *   insn=0x0000000000321C60 string=0x0000000000321C64 "h"
 *   insn=0x0000000000321C84 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000321C88 string=0x0000000000321C8C "("
 *   insn=0x0000000000321C8C string=0x0000000000321C90 ""
 *   insn=0x0000000000321C9C string=0x0000000000321CA0 "A"
 *   insn=0x0000000000321CA4 string=0x0000000000321CA8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::FireEmitterComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.FireEmitterComponent");
}

