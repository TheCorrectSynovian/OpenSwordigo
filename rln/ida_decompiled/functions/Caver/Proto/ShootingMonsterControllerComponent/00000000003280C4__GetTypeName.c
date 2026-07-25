/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003280C4
 * Mangled: _ZNK5Caver5Proto34ShootingMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000003280D0 string=0x00000000003280D4 "S"
 *   insn=0x00000000003280D4 string=0x00000000003280D8 "i"
 *   insn=0x00000000003280DC string=0x00000000003280E0 "!"
 *   insn=0x00000000003280E0 string=0x000000000058C2EF "Caver.Proto.ShootingMonsterControllerComponent"
 *   insn=0x00000000003280F0 string=0x00000000003280F4 "h"
 *   insn=0x0000000000328100 string=0x0000000000328114 "o8"
 *   insn=0x0000000000328114 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032811C string=0x0000000000328120 "aB"
 *   insn=0x0000000000328124 string=0x0000000000328128 "A"
 *   insn=0x0000000000328128 string=0x000000000032812C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ShootingMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ShootingMonsterControllerComponent");
}

