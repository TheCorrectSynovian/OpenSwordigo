/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003175C4
 * Mangled: _ZNK5Caver5Proto16ProgramComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ProgramComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000003175D0 string=0x00000000003175D4 "S"
 *   insn=0x00000000003175D4 string=0x00000000003175D8 "i"
 *   insn=0x00000000003175E0 string=0x000000000058BF17 "Caver.Proto.ProgramComponent"
 *   insn=0x00000000003175EC string=0x00000000003175F0 "r=\t"
 *   insn=0x00000000003175F0 string=0x00000000003175F4 "h"
 *   insn=0x0000000000317600 string=0x0000000000317614 "/{"
 *   insn=0x0000000000317614 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000317618 string=0x000000000031761C "h"
 *   insn=0x000000000031761C string=0x0000000000317620 ""
 *   insn=0x000000000031762C string=0x0000000000317630 "A"
 *   insn=0x0000000000317630 string=0x0000000000317634 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ProgramComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ProgramComponent");
}

