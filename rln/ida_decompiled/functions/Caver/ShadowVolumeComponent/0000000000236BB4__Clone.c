/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236BB4
 * Mangled: _ZNK5Caver21ShadowVolumeComponent5CloneEv
 * Demangled: Caver::ShadowVolumeComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000236A9C  Caver::ShadowVolumeComponent::~ShadowVolumeComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 13
 *   insn=0x0000000000236BC8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000236BD8 string=0x0000000000236BDC "h%"
 *   insn=0x0000000000236BDC string=0x0000000000236BE0 ""
 *   insn=0x0000000000236BE0 string=0x0000000000236BE4 "j%"
 *   insn=0x0000000000236BE4 string=0x0000000000236BE8 "J"
 *   insn=0x0000000000236BEC string=0x0000000000236BF0 "a"
 *   insn=0x0000000000236BF0 string=0x0000000000236BF4 ""
 *   insn=0x0000000000236BF4 string=0x0000000000236BF8 "H"
 *   insn=0x0000000000236BFC string=0x0000000000236C00 "H"
 *   insn=0x0000000000236C00 string=0x0000000000236C04 "KA"
 *   insn=0x0000000000236C04 string=0x0000000000236C08 "?"
 *   insn=0x0000000000236C2C string=0x0000000000236C30 "h"@"
 *   insn=0x0000000000236C30 string=0x0000000000236C34 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowVolumeComponent::Clone(Caver::ShadowVolumeComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0x90u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)&v3 = &off_6BB528;
  *(_QWORD *)(v2 + 72) = 0;
  *((_QWORD *)&v3 + 1) = &off_6BB568;
  *(_QWORD *)v2 = off_6BB410;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_DWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

