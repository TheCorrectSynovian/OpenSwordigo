/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310DE8
 * Mangled: _ZNK5Caver5Proto15ShadowComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ShadowComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000310DF4 string=0x0000000000310DF8 "S"
 *   insn=0x0000000000310DF8 string=0x0000000000310DFC "i"
 *   insn=0x0000000000310E04 string=0x000000000058BDB4 "Caver.Proto.ShadowComponent"
 *   insn=0x0000000000310E10 string=0x0000000000310E14 "iW\t"
 *   insn=0x0000000000310E14 string=0x0000000000310E18 "h"
 *   insn=0x0000000000310E24 string=0x0000000000310E38 "&"
 *   insn=0x0000000000310E38 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000310E40 string=0x0000000000310E44 "UB"
 *   insn=0x0000000000310E50 string=0x0000000000310E54 ")"
 *   insn=0x0000000000310E54 string=0x0000000000310E58 "@"
 *   insn=0x0000000000310E58 string=0x0000000000310E5C "A"
 *   insn=0x0000000000310E5C string=0x0000000000310E60 ""
 *   insn=0x0000000000310E60 string=0x0000000000310E64 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ShadowComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ShadowComponent");
}

