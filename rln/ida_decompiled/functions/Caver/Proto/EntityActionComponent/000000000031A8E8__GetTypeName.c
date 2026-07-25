/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A8E8
 * Mangled: _ZNK5Caver5Proto21EntityActionComponent11GetTypeNameEv
 * Demangled: Caver::Proto::EntityActionComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000031A8F4 string=0x000000000031A8F8 "S"
 *   insn=0x000000000031A8F8 string=0x000000000031A8FC "i"
 *   insn=0x000000000031A904 string=0x000000000058BFC5 "Caver.Proto.EntityActionComponent"
 *   insn=0x000000000031A914 string=0x000000000031A918 "h"
 *   insn=0x000000000031A924 string=0x000000000031A938 "fn"
 *   insn=0x000000000031A938 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031A93C string=0x000000000031A940 "H"
 *   insn=0x000000000031A940 string=0x000000000031A944 ""
 *   insn=0x000000000031A948 string=0x000000000031A94C "A"
 *   insn=0x000000000031A94C string=0x000000000031A950 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::EntityActionComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.EntityActionComponent");
}

