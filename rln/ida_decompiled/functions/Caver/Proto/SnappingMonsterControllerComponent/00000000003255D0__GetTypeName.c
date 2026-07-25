/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003255D0
 * Mangled: _ZNK5Caver5Proto34SnappingMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000003255DC string=0x00000000003255E0 "S"
 *   insn=0x00000000003255E0 string=0x00000000003255E4 "i"
 *   insn=0x00000000003255E8 string=0x00000000003255EC "!"
 *   insn=0x00000000003255EC string=0x000000000058C21C "Caver.Proto.SnappingMonsterControllerComponent"
 *   insn=0x00000000003255F8 string=0x00000000003255FC "o"
 *   insn=0x00000000003255FC string=0x0000000000325600 "h"
 *   insn=0x000000000032560C string=0x0000000000325620 ",C"
 *   insn=0x0000000000325620 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000325624 string=0x0000000000325628 ""
 *   insn=0x0000000000325628 string=0x000000000032562C "QC"
 *   insn=0x0000000000325638 string=0x000000000032563C "A"
 *   insn=0x0000000000325644 string=0x0000000000325648 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SnappingMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SnappingMonsterControllerComponent");
}

