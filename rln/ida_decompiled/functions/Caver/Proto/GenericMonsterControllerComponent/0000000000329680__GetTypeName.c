/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329680
 * Mangled: _ZNK5Caver5Proto33GenericMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x000000000032968C string=0x0000000000329690 "S"
 *   insn=0x0000000000329690 string=0x0000000000329694 "i"
 *   insn=0x000000000032969C string=0x000000000058C3A3 "Caver.Proto.GenericMonsterControllerComponent"
 *   insn=0x00000000003296A8 string=0x00000000003296AC "C"
 *   insn=0x00000000003296AC string=0x00000000003296B0 "h"
 *   insn=0x00000000003296D0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003296D8 string=0x00000000003296DC "%E"
 *   insn=0x00000000003296E8 string=0x00000000003296EC "A"
 *   insn=0x00000000003296F0 string=0x00000000003296F4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::GenericMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.GenericMonsterControllerComponent");
}

