/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330FD8
 * Mangled: _ZNK5Caver5Proto17ItemDropComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ItemDropComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x0000000000330FE4 string=0x0000000000330FE8 "S"
 *   insn=0x0000000000330FE8 string=0x0000000000330FEC "i"
 *   insn=0x0000000000330FF4 string=0x000000000058C52D "Caver.Proto.ItemDropComponent"
 *   insn=0x0000000000331004 string=0x0000000000331008 "h"
 *   insn=0x0000000000331028 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000331030 string=0x0000000000331034 ""
 *   insn=0x0000000000331040 string=0x0000000000331044 ")\tG"
 *   insn=0x0000000000331044 string=0x0000000000331048 "J"
 *   insn=0x0000000000331048 string=0x000000000033104C "A"
 *   insn=0x000000000033104C string=0x0000000000331050 ""
 *   insn=0x0000000000331050 string=0x0000000000331054 "\t|"
 *   insn=0x0000000000331054 string=0x0000000000331058 "\n|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ItemDropComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ItemDropComponent");
}

