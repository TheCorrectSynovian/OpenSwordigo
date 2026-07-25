/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332854
 * Mangled: _ZNK5Caver5Proto21PortalEffectComponent11GetTypeNameEv
 * Demangled: Caver::Proto::PortalEffectComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x0000000000332860 string=0x0000000000332864 "S"
 *   insn=0x0000000000332864 string=0x0000000000332868 "i"
 *   insn=0x0000000000332870 string=0x000000000058C56C "Caver.Proto.PortalEffectComponent"
 *   insn=0x0000000000332880 string=0x0000000000332884 "h"
 *   insn=0x00000000003328A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003328AC string=0x00000000003328B0 "YF"
 *   insn=0x00000000003328B8 string=0x00000000003328BC "A"
 *   insn=0x00000000003328BC string=0x00000000003328C0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::PortalEffectComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.PortalEffectComponent");
}

