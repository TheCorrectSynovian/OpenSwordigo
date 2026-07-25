/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C5B0
 * Mangled: _ZNK5Caver5Proto19WeaponGlowComponent11GetTypeNameEv
 * Demangled: Caver::Proto::WeaponGlowComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000032C5BC string=0x000000000032C5C0 "S"
 *   insn=0x000000000032C5C0 string=0x000000000032C5C4 "i"
 *   insn=0x000000000032C5CC string=0x000000000058C440 "Caver.Proto.WeaponGlowComponent"
 *   insn=0x000000000032C5D8 string=0x000000000032C5DC "w"
 *   insn=0x000000000032C5DC string=0x000000000032C5E0 "h"
 *   insn=0x000000000032C5EC string=0x000000000032C600 "4'"
 *   insn=0x000000000032C600 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032C608 string=0x000000000032C60C ""
 *   insn=0x000000000032C618 string=0x000000000032C61C "A"
 *   insn=0x000000000032C61C string=0x000000000032C620 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::WeaponGlowComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.WeaponGlowComponent");
}

