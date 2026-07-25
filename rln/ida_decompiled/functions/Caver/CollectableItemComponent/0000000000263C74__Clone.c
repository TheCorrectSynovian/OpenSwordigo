/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263C74
 * Mangled: _ZNK5Caver24CollectableItemComponent5CloneEv
 * Demangled: Caver::CollectableItemComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000263A3C  Caver::CollectableItemComponent::~CollectableItemComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FB520  Caver::CollectableItemComponent::InitWithComponent(Caver::CollectableItemComponent const*)
 *
 * Referenced strings: 15
 *   insn=0x0000000000263C84 string=0x0000000000263C88 "VF"
 *   insn=0x0000000000263C88 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000263C94 string=0x0000000000263C98 "$"
 *   insn=0x0000000000263C98 string=0x0000000000263C9C "\n$"
 *   insn=0x0000000000263C9C string=0x0000000000263CA0 ""
 *   insn=0x0000000000263CA0 string=0x0000000000263CA4 "JY@"
 *   insn=0x0000000000263CAC string=0x0000000000263CB0 "a"
 *   insn=0x0000000000263CB0 string=0x0000000000263CB4 "KA"
 *   insn=0x0000000000263CB8 string=0x0000000000263CBC " "
 *   insn=0x0000000000263CC0 string=0x0000000000263CC4 "K"
 *   insn=0x0000000000263CCC string=0x0000000000263CD0 "a"
 *   insn=0x0000000000263CD0 string=0x0000000000263CD4 "J"
 *   insn=0x0000000000263CD4 string=0x0000000000263CD8 "A"
 *   insn=0x0000000000263CFC string=0x0000000000263D00 "^"
 *   insn=0x0000000000263D00 string=0x00000000001FB520 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollectableItemComponent::Clone(Caver::CollectableItemComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q1

  v2 = operator new(0xB8u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_OWORD *)(v2 + 72) = 0u;
  *(_QWORD *)v2 = off_6BE340;
  *(int64x2_t *)(v2 + 120) = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *(_QWORD *)&v3 = &off_6BE458;
  *((_QWORD *)&v3 + 1) = &off_6BE498;
  *(_OWORD *)(v2 + 96) = 0u;
  *(_QWORD *)(v2 + 112) = 0;
  *(_BYTE *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 144) = &byte_6FD2F8;
  *(_OWORD *)(v2 + 168) = 0u;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_OWORD *)(v2 + 32) = 0u;
  *(_OWORD *)(v2 + 152) = 0u;
  Caver::CollectableItemComponent::InitWithComponent((Caver::CollectableItemComponent *)v2, this);
  return v2;
}

