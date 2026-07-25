/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D71C
 * Mangled: _ZNK5Caver5Proto15PortalComponent11GetTypeNameEv
 * Demangled: Caver::Proto::PortalComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x000000000032D728 string=0x000000000032D72C "S"
 *   insn=0x000000000032D72C string=0x000000000032D730 "i"
 *   insn=0x000000000032D738 string=0x000000000058C481 "Caver.Proto.PortalComponent"
 *   insn=0x000000000032D748 string=0x000000000032D74C "h"
 *   insn=0x000000000032D76C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000032D774 string=0x000000000032D778 "mG"
 *   insn=0x000000000032D780 string=0x000000000032D784 "A"
 *   insn=0x000000000032D784 string=0x000000000032D788 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PortalComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PortalComponent");
}

