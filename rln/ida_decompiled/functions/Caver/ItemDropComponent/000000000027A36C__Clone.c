/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027A36C
 * Mangled: _ZNK5Caver17ItemDropComponent5CloneEv
 * Demangled: Caver::ItemDropComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000027A0CC  Caver::ItemDropComponent::~ItemDropComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F77A0  Caver::ItemDropComponent::InitWithComponent(Caver::ItemDropComponent const*)
 *
 * Referenced strings: 12
 *   insn=0x000000000027A380 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027A38C string=0x000000000027A390 "H#"
 *   insn=0x000000000027A390 string=0x000000000027A394 ""
 *   insn=0x000000000027A394 string=0x000000000027A398 "J#"
 *   insn=0x000000000027A398 string=0x000000000027A39C "J1@"
 *   insn=0x000000000027A3A0 string=0x000000000027A3A4 "a"
 *   insn=0x000000000027A3B0 string=0x000000000027A3B4 "H"
 *   insn=0x000000000027A3B4 string=0x000000000027A3B8 "KA"
 *   insn=0x000000000027A3B8 string=0x000000000027A3BC " "
 *   insn=0x000000000027A3C4 string=0x000000000027A3C8 "J"
 *   insn=0x000000000027A3CC string=0x000000000027A3D0 "A"
 *   insn=0x000000000027A3F8 string=0x00000000001F77A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ItemDropComponent::Clone(Caver::ItemDropComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q1

  v2 = operator new(0xB0u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_OWORD *)(v2 + 72) = 0u;
  *(int64x2_t *)(v2 + 120) = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *(_QWORD *)&v3 = &off_6BF528;
  *((_QWORD *)&v3 + 1) = &off_6BF568;
  *(_QWORD *)v2 = off_6BF410;
  *(_OWORD *)(v2 + 96) = 0u;
  *(_WORD *)(v2 + 112) = 1;
  *(_QWORD *)(v2 + 168) = 0;
  *(_OWORD *)(v2 + 152) = 0u;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_OWORD *)(v2 + 32) = 0u;
  *(_OWORD *)(v2 + 136) = 0u;
  Caver::ItemDropComponent::InitWithComponent((Caver::ItemDropComponent *)v2, this);
  return v2;
}

