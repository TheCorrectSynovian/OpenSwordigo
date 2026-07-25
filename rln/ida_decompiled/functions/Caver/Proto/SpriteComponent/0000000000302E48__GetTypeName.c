/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302E48
 * Mangled: _ZNK5Caver5Proto15SpriteComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SpriteComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000302E54 string=0x0000000000302E58 "S"
 *   insn=0x0000000000302E58 string=0x0000000000302E5C "i"
 *   insn=0x0000000000302E60 string=0x0000000000302E64 "A"
 *   insn=0x0000000000302E64 string=0x000000000058BB67 "Caver.Proto.SpriteComponent"
 *   insn=0x0000000000302E70 string=0x0000000000302E74 "Q"
 *   insn=0x0000000000302E74 string=0x0000000000302E78 "h"
 *   insn=0x0000000000302E98 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000302E9C string=0x0000000000302EA0 ""
 *   insn=0x0000000000302EA0 string=0x0000000000302EA4 ""
 *   insn=0x0000000000302EA8 string=0x0000000000302EAC ")"
 *   insn=0x0000000000302EAC string=0x0000000000302EB0 ")"
 *   insn=0x0000000000302EB0 string=0x0000000000302EB4 "A"
 *   insn=0x0000000000302EC8 string=0x0000000000302ECC "\t"
 *   insn=0x0000000000302ECC string=0x0000000000302ED0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SpriteComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SpriteComponent");
}

