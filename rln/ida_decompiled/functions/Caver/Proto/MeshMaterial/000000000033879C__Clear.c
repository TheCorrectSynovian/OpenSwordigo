/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033879C
 * Mangled: _ZN5Caver5Proto12MeshMaterial5ClearEv
 * Demangled: Caver::Proto::MeshMaterial::Clear(void)
 *
 * Callers: 1
 *   0x00000000001FE970  Caver::Proto::MeshMaterial::Clear(void)
 *
 * Callees: 2
 *   0x00000000001F60B0  Caver::Proto::Texture::Clear(void)
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 15
 *   insn=0x00000000003387A8 string=0x00000000003387AC "h"
 *   insn=0x00000000003387B4 string=0x00000000003387B8 "`\n@"
 *   insn=0x00000000003387B8 string=0x00000000003387BC "`"
 *   insn=0x00000000003387C0 string=0x00000000003387C4 "h:@"
 *   insn=0x00000000003387C0 string=0x00000000001FBAB0 "0'"
 *   insn=0x00000000003387C8 string=0x00000000003387CC "`"
 *   insn=0x00000000003387CC string=0x00000000003387D0 "`"
 *   insn=0x00000000003387D4 string=0x00000000003387D8 "h:@"
 *   insn=0x00000000003387DC string=0x00000000003387E0 "`"
 *   insn=0x00000000003387E0 string=0x00000000003387E4 "`"
 *   insn=0x00000000003387E8 string=0x00000000003387EC "h:@"
 *   insn=0x00000000003387F4 string=0x00000000003387F8 "`"
 *   insn=0x00000000003387F8 string=0x00000000003387FC "@"
 *   insn=0x00000000003387FC string=0x0000000000338800 ","
 *   insn=0x0000000000338800 string=0x00000000001F60B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 56);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 56) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 56);
      }
    }
    *(_DWORD *)(v1 + 40) = 0;
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 48);
      if ( this )
        this = Caver::Proto::Texture::Clear((Caver::Proto::Texture *)this);
    }
  }
  *(_DWORD *)(v1 + 56) = 0;
  return this;
}

