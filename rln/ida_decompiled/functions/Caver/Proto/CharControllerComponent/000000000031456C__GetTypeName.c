/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031456C
 * Mangled: _ZNK5Caver5Proto23CharControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::CharControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000314578 string=0x000000000031457C "S"
 *   insn=0x000000000031457C string=0x0000000000314580 "i"
 *   insn=0x0000000000314588 string=0x000000000058BE42 "Caver.Proto.CharControllerComponent"
 *   insn=0x0000000000314598 string=0x000000000031459C "h"
 *   insn=0x00000000003145A8 string=0x00000000003145BC "E"
 *   insn=0x00000000003145BC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003145C4 string=0x00000000003145C8 "UG"
 *   insn=0x00000000003145CC string=0x00000000003145D0 " 1E"
 *   insn=0x00000000003145D4 string=0x00000000003145D8 "A"
 *   insn=0x00000000003145D8 string=0x00000000003145DC "\n@"
 *   insn=0x00000000003145DC string=0x00000000003145E0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::CharControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.CharControllerComponent");
}

