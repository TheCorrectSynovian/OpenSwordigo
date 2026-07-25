/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D4920
 * Mangled: _ZN5Caver5Proto4Font5ClearEv
 * Demangled: Caver::Proto::Font::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F60B0  Caver::Proto::Texture::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 24
 *   insn=0x00000000002D492C string=0x00000000002D4930 "h"
 *   insn=0x00000000002D4934 string=0x00000000002D49D0 "h*@"
 *   insn=0x00000000002D493C string=0x00000000002D4940 "`\n@"
 *   insn=0x00000000002D4940 string=0x00000000002D4944 ")AA"
 *   insn=0x00000000002D494C string=0x00000000002D4950 ""
 *   insn=0x00000000002D4960 string=0x00000000002D4964 "hr@"
 *   insn=0x00000000002D4968 string=0x00000000002D496C "`"
 *   insn=0x00000000002D496C string=0x00000000002D4970 "`"
 *   insn=0x00000000002D4974 string=0x00000000002D4978 "hr@"
 *   insn=0x00000000002D4974 string=0x00000000001F60B0 "0'"
 *   insn=0x00000000002D4980 string=0x00000000002D4984 "`.@"
 *   insn=0x00000000002D4984 string=0x00000000002D4988 ")"
 *   insn=0x00000000002D4990 string=0x00000000002D4994 ""
 *   insn=0x00000000002D49A4 string=0x00000000002D49A8 "hr@"
 *   insn=0x00000000002D49AC string=0x00000000002D49B0 ""
 *   insn=0x00000000002D49B0 string=0x00000000002D49B4 "h6@"
 *   insn=0x00000000002D49B8 string=0x00000000002D49BC "\tq@9i"
 *   insn=0x00000000002D49BC string=0x00000000002D49C0 "i"
 *   insn=0x00000000002D49D4 string=0x00000000002D49D8 "k"
 *   insn=0x00000000002D49DC string=0x00000000002D49E0 "h"
 *   insn=0x00000000002D49E4 string=0x00000000002D49E8 ""
 *   insn=0x00000000002D49E8 string=0x00000000002D49EC ""
 *   insn=0x00000000002D49F0 string=0x00000000002D49F4 "h*"
 *   insn=0x00000000002D49FC string=0x00000000002D4A00 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 112);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 112) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::Font::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 112);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
      {
        this = Caver::Proto::Texture::Clear((Caver::Proto::Texture *)this);
        v2 = *(_DWORD *)(v1 + 112);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 88);
      if ( (__int64 *)this != &Caver::Proto::Font::_default_kerning_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 112);
      }
    }
    *(_DWORD *)(v1 + 96) = 0;
    if ( (v2 & 0x20) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 104);
      if ( v3 )
      {
        if ( *(_BYTE *)(v3 + 28) )
        {
          *(_QWORD *)(v3 + 20) = 0;
          *(_QWORD *)(v3 + 12) = 0;
        }
        *(_DWORD *)(v3 + 28) = 0;
      }
    }
  }
  if ( *(int *)(v1 + 40) >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v1 + 32) + 8 * v4);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      ++v4;
    }
    while ( v4 < *(int *)(v1 + 40) );
  }
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 112) = 0;
  return this;
}

