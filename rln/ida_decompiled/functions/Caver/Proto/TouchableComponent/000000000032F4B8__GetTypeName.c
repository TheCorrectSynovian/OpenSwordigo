/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032F4B8
 * Mangled: _ZNK5Caver5Proto18TouchableComponent11GetTypeNameEv
 * Demangled: Caver::Proto::TouchableComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x000000000032F4C4 string=0x000000000032F4C8 "S"
 *   insn=0x000000000032F4C8 string=0x000000000032F4CC "i"
 *   insn=0x000000000032F4D4 string=0x000000000058C4E2 "Caver.Proto.TouchableComponent"
 *   insn=0x000000000032F4E4 string=0x000000000032F4E8 "h"
 *   insn=0x000000000032F4F4 string=0x000000000032F508 "r"
 *   insn=0x000000000032F508 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032F510 string=0x000000000032F514 ""
 *   insn=0x000000000032F51C string=0x000000000032F520 ")B"
 *   insn=0x000000000032F524 string=0x000000000032F528 "J"
 *   insn=0x000000000032F528 string=0x000000000032F52C "A"
 *   insn=0x000000000032F52C string=0x000000000032F530 " "
 *   insn=0x000000000032F530 string=0x000000000032F534 ""
 *   insn=0x000000000032F534 string=0x000000000032F538 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::TouchableComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.TouchableComponent");
}

