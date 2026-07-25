/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6E18
 * Mangled: _ZN5Caver5Proto13GUIViewLayout5ClearEv
 * Demangled: Caver::Proto::GUIViewLayout::Clear(void)
 *
 * Callers: 1
 *   0x0000000000202290  Caver::Proto::GUIViewLayout::Clear(void)
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 17
 *   insn=0x00000000002D6E24 string=0x00000000002D6E28 "hbA9"
 *   insn=0x00000000002D6E2C string=0x00000000002D6E80 "h"@"
 *   insn=0x00000000002D6E30 string=0x00000000002D6E34 "i "
 *   insn=0x00000000002D6E30 string=0x00000000002D6E60 ""
 *   insn=0x00000000002D6E34 string=0x00000000002D6E38 "`\n@"
 *   insn=0x00000000002D6E38 string=0x00000000002D6E3C ")YE"
 *   insn=0x00000000002D6E44 string=0x00000000002D6E48 ""
 *   insn=0x00000000002D6E58 string=0x00000000002D6E5C "hZ@"
 *   insn=0x00000000002D6E60 string=0x00000000002D6E64 "h*@"
 *   insn=0x00000000002D6E68 string=0x00000000002D6E6C "\tq@9i"
 *   insn=0x00000000002D6E6C string=0x00000000002D6E70 "i"
 *   insn=0x00000000002D6E84 string=0x00000000002D6E88 "k"
 *   insn=0x00000000002D6E8C string=0x00000000002D6E90 "h"
 *   insn=0x00000000002D6E94 string=0x00000000002D6E98 ""
 *   insn=0x00000000002D6E98 string=0x00000000002D6E9C ""
 *   insn=0x00000000002D6EA0 string=0x00000000002D6EA4 "h""
 *   insn=0x00000000002D6EAC string=0x00000000002D6EB0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIViewLayout::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 88);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 88) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::GUIViewLayout::_default_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 88);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 80);
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
  if ( *(int *)(v1 + 32) >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8 * v4);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      ++v4;
    }
    while ( v4 < *(int *)(v1 + 32) );
  }
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 88) = 0;
  return this;
}

