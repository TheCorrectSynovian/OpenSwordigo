/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2BBC
 * Mangled: _ZN5Caver5Proto7Texture5ClearEv
 * Demangled: Caver::Proto::Texture::Clear(void)
 *
 * Callers: 1
 *   0x00000000001F60B0  Caver::Proto::Texture::Clear(void)
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 19
 *   insn=0x00000000002D2BC8 string=0x00000000002D2BCC "h"
 *   insn=0x00000000002D2BCC string=0x00000000002D2BD0 ""
 *   insn=0x00000000002D2BD0 string=0x00000000002D2C30 "h*@"
 *   insn=0x00000000002D2BD8 string=0x00000000002D2BDC "`\n@"
 *   insn=0x00000000002D2BDC string=0x00000000002D2BE0 ")"
 *   insn=0x00000000002D2BE8 string=0x00000000002D2BEC ""
 *   insn=0x00000000002D2BF8 string=0x00000000002D2BFC "/X\n"
 *   insn=0x00000000002D2BFC string=0x00000000002D2C00 "hj@"
 *   insn=0x00000000002D2C04 string=0x00000000002D2C08 "i"
 *   insn=0x00000000002D2C0C string=0x00000000002D2C10 ""
 *   insn=0x00000000002D2C10 string=0x00000000002D2C14 "h2@"
 *   insn=0x00000000002D2C18 string=0x00000000002D2C1C "\tq@9i"
 *   insn=0x00000000002D2C1C string=0x00000000002D2C20 "i"
 *   insn=0x00000000002D2C34 string=0x00000000002D2C38 "k"
 *   insn=0x00000000002D2C3C string=0x00000000002D2C40 "h"
 *   insn=0x00000000002D2C44 string=0x00000000002D2C48 ""
 *   insn=0x00000000002D2C48 string=0x00000000002D2C4C ""
 *   insn=0x00000000002D2C50 string=0x00000000002D2C54 "h*"
 *   insn=0x00000000002D2C5C string=0x00000000002D2C60 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 104);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 104) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::Texture::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 104);
      }
    }
    *(_DWORD *)(v1 + 24) = 1;
    *(_DWORD *)(v1 + 88) = 0;
    if ( (v2 & 0x10) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 96);
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
  *(_DWORD *)(v1 + 104) = 0;
  return this;
}

