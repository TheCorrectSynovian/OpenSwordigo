/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327210
 * Mangled: _ZNK5Caver5Proto32SkellyMonsterControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000032721C string=0x0000000000327220 "S"
 *   insn=0x0000000000327220 string=0x0000000000327224 "i"
 *   insn=0x0000000000327228 string=0x000000000032722C "!"
 *   insn=0x000000000032722C string=0x000000000058C295 "Caver.Proto.SkellyMonsterControllerComponent"
 *   insn=0x0000000000327238 string=0x000000000032723C "_"
 *   insn=0x000000000032723C string=0x0000000000327240 "h"
 *   insn=0x0000000000327260 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000327268 string=0x000000000032726C "%D"
 *   insn=0x000000000032726C string=0x0000000000327270 "*"
 *   insn=0x0000000000327270 string=0x0000000000327274 "@9B"
 *   insn=0x0000000000327274 string=0x0000000000327278 "\t"
 *   insn=0x0000000000327278 string=0x000000000032727C "A"
 *   insn=0x0000000000327280 string=0x0000000000327284 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SkellyMonsterControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SkellyMonsterControllerComponent");
}

