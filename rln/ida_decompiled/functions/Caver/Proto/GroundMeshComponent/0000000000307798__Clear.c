/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000307798
 * Mangled: _ZN5Caver5Proto19GroundMeshComponent5ClearEv
 * Demangled: Caver::Proto::GroundMeshComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *   0x00000000001FCDE0  Caver::Proto::Rectangle::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 41
 *   insn=0x00000000003077A4 string=0x00000000003077A8 "hrC9h"
 *   insn=0x00000000003077A8 string=0x00000000003077AC "h"
 *   insn=0x00000000003077AC string=0x0000000000307838 "h*@"
 *   insn=0x00000000003077B4 string=0x00000000003077B8 "`\n@"
 *   insn=0x00000000003077B8 string=0x00000000003077BC ")!G"
 *   insn=0x00000000003077C4 string=0x00000000003077C8 ""
 *   insn=0x00000000003077D4 string=0x00000000003077D8 "8"
 *   insn=0x00000000003077D8 string=0x00000000003077DC "h"
 *   insn=0x00000000003077E4 string=0x00000000003077E8 "`"
 *   insn=0x00000000003077E8 string=0x00000000003077EC ")"
 *   insn=0x00000000003077F4 string=0x00000000003077F8 ""
 *   insn=0x0000000000307804 string=0x0000000000307808 ","
 *   insn=0x0000000000307808 string=0x000000000030780C "h"
 *   insn=0x0000000000307810 string=0x0000000000307814 "`.@"
 *   insn=0x0000000000307814 string=0x0000000000307818 "`"
 *   insn=0x0000000000307818 string=0x000000000030781C "q"
 *   insn=0x000000000030781C string=0x0000000000307820 "h"
 *   insn=0x000000000030781C string=0x00000000001FCDE0 "0'"
 *   insn=0x0000000000307824 string=0x0000000000307828 "`j@"
 *   insn=0x0000000000307828 string=0x000000000030782C "@"
 *   insn=0x0000000000307830 string=0x00000000001FBAB0 "0'"
 *   insn=0x000000000030783C string=0x0000000000307840 "k"
 *   insn=0x0000000000307840 string=0x000000000030786C "hj@"
 *   insn=0x0000000000307844 string=0x0000000000307848 "h"
 *   insn=0x000000000030784C string=0x0000000000307850 ""
 *   insn=0x0000000000307850 string=0x0000000000307854 ""
 *   insn=0x0000000000307858 string=0x000000000030785C "h*"
 *   insn=0x0000000000307864 string=0x0000000000307868 ""
 *   insn=0x0000000000307874 string=0x0000000000307878 "k"
 *   insn=0x0000000000307878 string=0x00000000003078A4 "h"
 *   insn=0x000000000030787C string=0x0000000000307880 "h2@"
 *   insn=0x0000000000307884 string=0x0000000000307888 ""
 *   insn=0x0000000000307888 string=0x000000000030788C ""
 *   insn=0x0000000000307890 string=0x0000000000307894 "hj"
 *   insn=0x000000000030789C string=0x00000000003078A0 ""
 *   insn=0x00000000003078AC string=0x00000000003078B0 "k"
 *   insn=0x00000000003078B4 string=0x00000000003078B8 "hN@"
 *   insn=0x00000000003078BC string=0x00000000003078C0 ""
 *   insn=0x00000000003078C0 string=0x00000000003078C4 ""
 *   insn=0x00000000003078C8 string=0x00000000003078CC "h"
 *   insn=0x00000000003078D4 string=0x00000000003078D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0
  int v5; // w8
  __int64 v6; // x20
  __int64 v7; // x0
  int v8; // w8
  __int64 v9; // x20
  __int64 v10; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 220);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 220) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::GroundMeshComponent::_default_vertex_data_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 220);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::GroundMeshComponent::_default_indices_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 220);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 88);
      if ( this )
      {
        this = Caver::Proto::Rectangle::Clear((Caver::Proto::Rectangle *)this);
        v2 = *(_DWORD *)(v1 + 220);
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      this = *(_QWORD *)(v1 + 208);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
    *(_BYTE *)(v1 + 216) = 0;
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
  v5 = *(_DWORD *)(v1 + 104);
  *(_DWORD *)(v1 + 40) = 0;
  if ( v5 >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 8 * v6);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      ++v6;
    }
    while ( v6 < *(int *)(v1 + 104) );
  }
  v8 = *(_DWORD *)(v1 + 160);
  *(_DWORD *)(v1 + 104) = 0;
  if ( v8 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v1 + 152) + 8 * v9);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      ++v9;
    }
    while ( v9 < *(int *)(v1 + 160) );
  }
  *(_DWORD *)(v1 + 160) = 0;
  *(_DWORD *)(v1 + 220) = 0;
  return this;
}

