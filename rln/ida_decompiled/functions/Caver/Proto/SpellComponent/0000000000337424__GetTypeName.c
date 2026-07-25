/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337424
 * Mangled: _ZNK5Caver5Proto14SpellComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SpellComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000337430 string=0x0000000000337434 "S"
 *   insn=0x0000000000337434 string=0x0000000000337438 "i"
 *   insn=0x0000000000337440 string=0x000000000058C69C "Caver.Proto.SpellComponent"
 *   insn=0x0000000000337450 string=0x0000000000337454 "h"
 *   insn=0x0000000000337474 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000337478 string=0x000000000033747C "h"
 *   insn=0x000000000033747C string=0x0000000000337480 "iC"
 *   insn=0x0000000000337480 string=0x0000000000337484 "A"
 *   insn=0x0000000000337484 string=0x0000000000337488 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SpellComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SpellComponent");
}

