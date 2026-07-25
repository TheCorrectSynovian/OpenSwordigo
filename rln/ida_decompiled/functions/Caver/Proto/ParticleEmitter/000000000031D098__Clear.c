/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031D098
 * Mangled: _ZN5Caver5Proto15ParticleEmitter5ClearEv
 * Demangled: Caver::Proto::ParticleEmitter::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 9
 *   insn=0x000000000031D0A4 string=0x000000000031D0A8 "hBA9"
 *   insn=0x000000000031D0B4 string=0x000000000031D0B8 "`\n@"
 *   insn=0x000000000031D0B8 string=0x000000000031D0BC "`"
 *   insn=0x000000000031D0BC string=0x000000000031D0C0 ""
 *   insn=0x000000000031D0C0 string=0x000000000031D0C4 "hR@"
 *   insn=0x000000000031D0C8 string=0x000000000031D0CC "`"
 *   insn=0x000000000031D0CC string=0x000000000031D0D0 "@"
 *   insn=0x000000000031D0D0 string=0x000000000031D0D4 "wz"
 *   insn=0x000000000031D0D4 string=0x00000000001FBAB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitter::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 80);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
        v2 = *(_DWORD *)(v1 + 80);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
    *(_QWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 40) = 0;
  }
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 80) = 0;
  return this;
}

