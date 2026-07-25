/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000314B50
 * Mangled: _ZNK5Caver5Proto15EntityComponent11GetTypeNameEv
 * Demangled: Caver::Proto::EntityComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000314B5C string=0x0000000000314B60 "S"
 *   insn=0x0000000000314B60 string=0x0000000000314B64 "i"
 *   insn=0x0000000000314B6C string=0x000000000058BE66 "Caver.Proto.EntityComponent"
 *   insn=0x0000000000314B7C string=0x0000000000314B80 "h"
 *   insn=0x0000000000314BA0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000314BA8 string=0x0000000000314BAC "IF"
 *   insn=0x0000000000314BB4 string=0x0000000000314BB8 "A"
 *   insn=0x0000000000314BB8 string=0x0000000000314BBC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::EntityComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.EntityComponent");
}

