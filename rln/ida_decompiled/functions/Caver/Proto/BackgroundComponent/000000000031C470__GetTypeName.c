/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C470
 * Mangled: _ZNK5Caver5Proto19BackgroundComponent11GetTypeNameEv
 * Demangled: Caver::Proto::BackgroundComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000031C47C string=0x000000000031C480 "S"
 *   insn=0x000000000031C480 string=0x000000000031C484 "i"
 *   insn=0x000000000031C48C string=0x000000000058C04C "Caver.Proto.BackgroundComponent"
 *   insn=0x000000000031C49C string=0x000000000031C4A0 "h"
 *   insn=0x000000000031C4C0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031C4C4 string=0x000000000031C4C8 "H"
 *   insn=0x000000000031C4C8 string=0x000000000031C4CC "QG"
 *   insn=0x000000000031C4D8 string=0x000000000031C4DC "A"
 *   insn=0x000000000031C4DC string=0x000000000031C4E0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::BackgroundComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.BackgroundComponent");
}

