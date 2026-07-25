/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC030
 * Mangled: _ZN5Caver5Proto11SceneObject5ClearEv
 * Demangled: Caver::Proto::SceneObject::Clear(void)
 *
 * Callers: 1
 *   0x00000000001FA880  Caver::Proto::SceneObject::Clear(void)
 *
 * Callees: 4
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *   0x00000000001FCDE0  Caver::Proto::Rectangle::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 32
 *   insn=0x00000000002FC03C string=0x00000000002FC040 "h"
 *   insn=0x00000000002FC04C string=0x00000000002FC050 "I"
 *   insn=0x00000000002FC050 string=0x00000000002FC054 "`\n@"
 *   insn=0x00000000002FC054 string=0x00000000002FC058 ")9@"
 *   insn=0x00000000002FC060 string=0x00000000002FC064 ""
 *   insn=0x00000000002FC074 string=0x00000000002FC078 "h"
 *   insn=0x00000000002FC07C string=0x00000000002FC080 "I"
 *   insn=0x00000000002FC080 string=0x00000000002FC084 "`"
 *   insn=0x00000000002FC084 string=0x00000000002FC088 ")"
 *   insn=0x00000000002FC090 string=0x00000000002FC094 ""
 *   insn=0x00000000002FC0A4 string=0x00000000002FC0A8 "h"
 *   insn=0x00000000002FC0AC string=0x00000000002FC0B0 "`.@"
 *   insn=0x00000000002FC0B0 string=0x00000000002FC0B4 "`"
 *   insn=0x00000000002FC0B8 string=0x00000000002FC0BC "h"
 *   insn=0x00000000002FC0B8 string=0x00000000001F3B50 "P'"
 *   insn=0x00000000002FC0C4 string=0x00000000002FC0C8 "ij"
 *   insn=0x00000000002FC0CC string=0x00000000002FC0D0 "`:@"
 *   insn=0x00000000002FC0D0 string=0x00000000002FC0D4 "`"
 *   insn=0x00000000002FC0D4 string=0x00000000002FC0D8 "B"
 *   insn=0x00000000002FC0D8 string=0x00000000002FC0DC "h"
 *   insn=0x00000000002FC0D8 string=0x00000000001FCDE0 "0'"
 *   insn=0x00000000002FC0E4 string=0x00000000002FC0FC "h*@"
 *   insn=0x00000000002FC0EC string=0x00000000002FC0F0 "`B@"
 *   insn=0x00000000002FC0F0 string=0x00000000002FC0F4 "@"
 *   insn=0x00000000002FC0F4 string=0x00000000002FC0F8 ":"
 *   insn=0x00000000002FC0F8 string=0x00000000001F4DE0 "P'"
 *   insn=0x00000000002FC100 string=0x00000000002FC104 "k"
 *   insn=0x00000000002FC108 string=0x00000000002FC10C "h"
 *   insn=0x00000000002FC110 string=0x00000000002FC114 ""
 *   insn=0x00000000002FC114 string=0x00000000002FC118 ""
 *   insn=0x00000000002FC11C string=0x00000000002FC120 "h*"
 *   insn=0x00000000002FC128 string=0x00000000002FC12C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObject::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 136);
  if ( (_BYTE)v2 )
  {
    if ( (v2 & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::SceneObject::_default_template_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 136);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::SceneObject::_default_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 136);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 88);
      if ( this )
      {
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
        v2 = *(_DWORD *)(v1 + 136);
      }
    }
    *(_QWORD *)(v1 + 96) = 0;
    *(_DWORD *)(v1 + 104) = 1065353216;
    if ( (v2 & 0x80) != 0 )
    {
      this = *(_QWORD *)(v1 + 112);
      if ( this )
      {
        this = Caver::Proto::Rectangle::Clear((Caver::Proto::Rectangle *)this);
        v2 = *(_DWORD *)(v1 + 136);
      }
    }
  }
  if ( (v2 & 0xFF00) != 0 )
  {
    *(_BYTE *)(v1 + 120) = 0;
    if ( (v2 & 0x200) != 0 )
    {
      this = *(_QWORD *)(v1 + 128);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
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
  *(_DWORD *)(v1 + 136) = 0;
  return this;
}

