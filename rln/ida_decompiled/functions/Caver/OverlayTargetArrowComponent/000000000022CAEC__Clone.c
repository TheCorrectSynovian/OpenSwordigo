/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022CAEC
 * Mangled: _ZNK5Caver27OverlayTargetArrowComponent5CloneEv
 * Demangled: Caver::OverlayTargetArrowComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000022CAB4  Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5810  Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202B50  Caver::OverlayComponent::OverlayComponent(void)
 *   0x000000000022CB78  Caver::OverlayTargetArrowComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x000000000022CB00 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022CB0C string=0x000000000022CB10 "mF"
 *   insn=0x000000000022CB1C string=0x000000000022CB20 "\tA"
 *   insn=0x000000000022CB24 string=0x000000000022CB28 "\t"
 *   insn=0x000000000022CB28 string=0x000000000022CB2C ""
 *   insn=0x000000000022CB2C string=0x000000000022CB30 " "
 *   insn=0x000000000022CB4C string=0x000000000022CB50 "0#"
 *   insn=0x000000000022CB50 string=0x00000000001F5810 "P'"
 *   insn=0x000000000022CB6C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022CB70 string=0x000000000022CB74 "TS"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTargetArrowComponent::Clone(Caver::OverlayTargetArrowComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0xB8u);
  Caver::OverlayComponent::OverlayComponent((Caver::OverlayComponent *)v2);
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)v2 = off_6BA950;
  *(_QWORD *)&v3 = &off_6BAA70;
  *((_QWORD *)&v3 + 1) = &off_6BAAB0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_BYTE *)(v2 + 154) = 0;
  *(_WORD *)(v2 + 152) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 160) = 0;
  *(_QWORD *)(v2 + 168) = 0;
  Caver::OverlayComponent::InitWithComponent((Caver::OverlayComponent *)v2, this);
  return v2;
}

