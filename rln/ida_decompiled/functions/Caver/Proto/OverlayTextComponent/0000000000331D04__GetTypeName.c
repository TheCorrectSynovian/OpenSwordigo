/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331D04
 * Mangled: _ZNK5Caver5Proto20OverlayTextComponent11GetTypeNameEv
 * Demangled: Caver::Proto::OverlayTextComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000331D10 string=0x0000000000331D14 "S"
 *   insn=0x0000000000331D14 string=0x0000000000331D18 "i"
 *   insn=0x0000000000331D20 string=0x000000000058C54B "Caver.Proto.OverlayTextComponent"
 *   insn=0x0000000000331D30 string=0x0000000000331D34 "h"
 *   insn=0x0000000000331D40 string=0x0000000000331D54 "_"
 *   insn=0x0000000000331D54 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000331D5C string=0x0000000000331D60 "]B"
 *   insn=0x0000000000331D6C string=0x0000000000331D70 "A"
 *   insn=0x0000000000331D70 string=0x0000000000331D74 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::OverlayTextComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.OverlayTextComponent");
}

