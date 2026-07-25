/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327B10
 * Mangled: _ZNK5Caver5Proto32StaticMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000327B1C string=0x0000000000327B20 "S"
 *   insn=0x0000000000327B20 string=0x0000000000327B24 "i"
 *   insn=0x0000000000327B28 string=0x0000000000327B2C "!"
 *   insn=0x0000000000327B2C string=0x000000000058C2C2 "Caver.Proto.StaticMonsterControllerComponent"
 *   insn=0x0000000000327B3C string=0x0000000000327B40 "h"
 *   insn=0x0000000000327B60 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000327B68 string=0x0000000000327B6C ""
 *   insn=0x0000000000327B70 string=0x0000000000327B74 "A"
 *   insn=0x0000000000327B74 string=0x0000000000327B78 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::StaticMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.StaticMonsterControllerComponent");
}

