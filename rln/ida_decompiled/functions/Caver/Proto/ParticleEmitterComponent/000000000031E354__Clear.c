/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031E354
 * Mangled: _ZN5Caver5Proto24ParticleEmitterComponent5ClearEv
 * Demangled: Caver::Proto::ParticleEmitterComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 16
 *   insn=0x000000000031E360 string=0x000000000031E364 "h"
 *   insn=0x000000000031E368 string=0x000000000031E36C "@"
 *   insn=0x000000000031E380 string=0x000000000031E384 "`>@"
 *   insn=0x000000000031E384 string=0x000000000031E388 "`"
 *   insn=0x000000000031E388 string=0x000000000031E38C "U"
 *   insn=0x000000000031E38C string=0x000000000031E390 "h"
 *   insn=0x000000000031E394 string=0x000000000031E398 "`B@"
 *   insn=0x000000000031E394 string=0x000000000031E3A4 "hJ@"
 *   insn=0x000000000031E398 string=0x000000000031E39C "@"
 *   insn=0x000000000031E39C string=0x000000000031E3A0 "P"
 *   insn=0x000000000031E3AC string=0x000000000031E3B0 "k"
 *   insn=0x000000000031E3B4 string=0x000000000031E3B8 "h"@"
 *   insn=0x000000000031E3BC string=0x000000000031E3C0 ""
 *   insn=0x000000000031E3C0 string=0x000000000031E3C4 ""
 *   insn=0x000000000031E3C8 string=0x000000000031E3CC "hJ"
 *   insn=0x000000000031E3D4 string=0x000000000031E3D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitterComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  int v3; // w8
  __int64 v4; // x20
  __int64 v5; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 136);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 24) = 0;
    *(_BYTE *)(this + 28) = 0;
    *(_BYTE *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    if ( (v2 & 0x80) != 0 )
    {
      this = *(_QWORD *)(this + 120);
      if ( this )
      {
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
        v2 = *(_DWORD *)(v1 + 136);
      }
    }
  }
  if ( (v2 & 0x100) != 0 )
  {
    this = *(_QWORD *)(v1 + 128);
    if ( this )
      this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
  }
  v3 = *(_DWORD *)(v1 + 72);
  *(_DWORD *)(v1 + 40) = 0;
  if ( v3 >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v1 + 64) + 8 * v4);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      ++v4;
    }
    while ( v4 < *(int *)(v1 + 72) );
  }
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 136) = 0;
  return this;
}

