/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DE714
 * Mangled: _ZN5Caver5Proto7MapZone5ClearEv
 * Demangled: Caver::Proto::MapZone::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 26
 *   insn=0x00000000002DE720 string=0x00000000002DE724 "h"
 *   insn=0x00000000002DE728 string=0x00000000002DE7BC "h*@"
 *   insn=0x00000000002DE72C string=0x00000000002DE730 ") "
 *   insn=0x00000000002DE730 string=0x00000000002DE734 "`\n@"
 *   insn=0x00000000002DE734 string=0x00000000002DE738 ")"
 *   insn=0x00000000002DE740 string=0x00000000002DE744 ""
 *   insn=0x00000000002DE750 string=0x00000000002DE754 "Y)\n"
 *   insn=0x00000000002DE754 string=0x00000000002DE758 "hj@"
 *   insn=0x00000000002DE75C string=0x00000000002DE760 "I "
 *   insn=0x00000000002DE760 string=0x00000000002DE764 "`"
 *   insn=0x00000000002DE764 string=0x00000000002DE768 ")"
 *   insn=0x00000000002DE770 string=0x00000000002DE774 ""
 *   insn=0x00000000002DE780 string=0x00000000002DE784 "M)\n"
 *   insn=0x00000000002DE784 string=0x00000000002DE788 "hj@"
 *   insn=0x00000000002DE78C string=0x00000000002DE790 "h"
 *   insn=0x00000000002DE790 string=0x00000000002DE794 "( "
 *   insn=0x00000000002DE794 string=0x00000000002DE798 "`2@"
 *   insn=0x00000000002DE798 string=0x00000000002DE79C ""
 *   insn=0x00000000002DE7A4 string=0x00000000002DE7A8 ""
 *   insn=0x00000000002DE7B4 string=0x00000000002DE7B8 "@)\n"
 *   insn=0x00000000002DE7C0 string=0x00000000002DE7C4 "k"
 *   insn=0x00000000002DE7C8 string=0x00000000002DE7CC "h"
 *   insn=0x00000000002DE7D0 string=0x00000000002DE7D4 ""
 *   insn=0x00000000002DE7D4 string=0x00000000002DE7D8 ""
 *   insn=0x00000000002DE7DC string=0x00000000002DE7E0 "h*"
 *   insn=0x00000000002DE7E8 string=0x00000000002DE7EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapZone::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 104);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 104) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::MapZone::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 104);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::MapZone::_default_title_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 104);
      }
    }
    *(_DWORD *)(v1 + 88) = 0;
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 96);
      if ( (__int64 *)this != &Caver::Proto::MapZone::_default_music_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
  }
  if ( *(int *)(v1 + 40) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 32) + 8 * v3);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 40) );
  }
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 104) = 0;
  return this;
}

