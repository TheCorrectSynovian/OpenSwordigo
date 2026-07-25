/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333D24
 * Mangled: _ZNK5Caver5Proto23MagicExplosionComponent11GetTypeNameEv
 * Demangled: Caver::Proto::MagicExplosionComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000333D30 string=0x0000000000333D34 "S"
 *   insn=0x0000000000333D34 string=0x0000000000333D38 "i"
 *   insn=0x0000000000333D40 string=0x000000000058C5AD "Caver.Proto.MagicExplosionComponent"
 *   insn=0x0000000000333D50 string=0x0000000000333D54 "h"
 *   insn=0x0000000000333D60 string=0x0000000000333D74 "W\t"
 *   insn=0x0000000000333D74 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000333D7C string=0x0000000000333D80 "eD"
 *   insn=0x0000000000333D88 string=0x0000000000333D8C ")"
 *   insn=0x0000000000333D8C string=0x0000000000333D90 "A"
 *   insn=0x0000000000333D90 string=0x0000000000333D94 ""
 *   insn=0x0000000000333D98 string=0x0000000000333D9C "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MagicExplosionComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MagicExplosionComponent");
}

