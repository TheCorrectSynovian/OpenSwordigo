/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B778
 * Mangled: _ZNK5Caver29ObjectLinkControllerComponent5CloneEv
 * Demangled: Caver::ObjectLinkControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000022B11C  sub_22B11C
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F77F0  Caver::ObjectLinkControllerComponent::InitWithComponent(Caver::ObjectLinkControllerComponent const*)
 *
 * Referenced strings: 10
 *   insn=0x000000000022B78C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022B7A0 string=0x000000000022B7A4 ""
 *   insn=0x000000000022B7A4 string=0x000000000022B7A8 "J"
 *   insn=0x000000000022B7B0 string=0x000000000022B7B4 "a"
 *   insn=0x000000000022B7B4 string=0x000000000022B7B8 "L"
 *   insn=0x000000000022B7B8 string=0x000000000022B7BC "KA"
 *   insn=0x000000000022B7C0 string=0x000000000022B7C4 "J"
 *   insn=0x000000000022B7CC string=0x000000000022B7D0 " "
 *   insn=0x000000000022B7D8 string=0x000000000022B7DC "A"
 *   insn=0x000000000022B814 string=0x00000000001F77F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLinkControllerComponent::Clone(Caver::ObjectLinkControllerComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q1

  v2 = operator new(0x128u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6BA6D8;
  *(_OWORD *)(v2 + 32) = 0u;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_OWORD *)(v2 + 72) = 0u;
  *(_QWORD *)v2 = off_6BA5C0;
  *((_QWORD *)&v3 + 1) = &off_6BA718;
  *(_OWORD *)(v2 + 96) = 0u;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 144) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 112) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 120) = 0;
  *(_BYTE *)(v2 + 128) = 0;
  *(_BYTE *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 288) = 0;
  *(_OWORD *)(v2 + 152) = 0u;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 265) = 0;
  *(_OWORD *)(v2 + 252) = 0u;
  *(_OWORD *)(v2 + 236) = 0u;
  Caver::ObjectLinkControllerComponent::InitWithComponent((Caver::ObjectLinkControllerComponent *)v2, this);
  return v2;
}

