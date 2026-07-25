/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003332F4
 * Mangled: _ZNK5Caver5Proto18MagicBoltComponent11GetTypeNameEv
 * Demangled: Caver::Proto::MagicBoltComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000333300 string=0x0000000000333304 "S"
 *   insn=0x0000000000333304 string=0x0000000000333308 "i"
 *   insn=0x0000000000333310 string=0x000000000058C58E "Caver.Proto.MagicBoltComponent"
 *   insn=0x000000000033331C string=0x0000000000333320 "&"
 *   insn=0x0000000000333320 string=0x0000000000333324 "h"
 *   insn=0x0000000000333344 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000033334C string=0x0000000000333350 "YD"
 *   insn=0x0000000000333358 string=0x000000000033335C "A"
 *   insn=0x000000000033335C string=0x0000000000333360 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MagicBoltComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MagicBoltComponent");
}

