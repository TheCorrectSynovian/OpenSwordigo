/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EBECC
 * Mangled: _ZNK5Caver5Proto13PlayerProfile11GetTypeNameEv
 * Demangled: Caver::Proto::PlayerProfile::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000002EBED8 string=0x00000000002EBEDC "S"
 *   insn=0x00000000002EBEDC string=0x00000000002EBEE0 "i"
 *   insn=0x00000000002EBEE8 string=0x000000000058B157 "Caver.Proto.PlayerProfile"
 *   insn=0x00000000002EBEF4 string=0x00000000002EBEF8 "0"
 *   insn=0x00000000002EBEF8 string=0x00000000002EBEFC "h"
 *   insn=0x00000000002EBF1C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002EBF24 string=0x00000000002EBF28 "IA"
 *   insn=0x00000000002EBF28 string=0x00000000002EBF2C "\t"
 *   insn=0x00000000002EBF30 string=0x00000000002EBF34 "\t|"
 *   insn=0x00000000002EBF34 string=0x00000000002EBF38 "A"
 *   insn=0x00000000002EBF3C string=0x00000000002EBF40 "\n "
 *   insn=0x00000000002EBF40 string=0x00000000002EBF44 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PlayerProfile::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PlayerProfile");
}

