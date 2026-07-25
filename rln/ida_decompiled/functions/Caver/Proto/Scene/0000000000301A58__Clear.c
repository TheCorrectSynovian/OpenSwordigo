/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000301A58
 * Mangled: _ZN5Caver5Proto5Scene5ClearEv
 * Demangled: Caver::Proto::Scene::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *   0x00000000001F7FE0  Caver::Proto::ObjectLibrary::Clear(void)
 *   0x00000000001FCDE0  Caver::Proto::Rectangle::Clear(void)
 *
 * Referenced strings: 27
 *   insn=0x0000000000301A64 string=0x0000000000301A68 "h"
 *   insn=0x0000000000301A70 string=0x0000000000301AAC "h"
 *   insn=0x0000000000301A74 string=0x0000000000301A78 "`B@"
 *   insn=0x0000000000301A78 string=0x0000000000301A7C "`"
 *   insn=0x0000000000301A7C string=0x0000000000301A80 "X"
 *   insn=0x0000000000301A80 string=0x0000000000301A84 "h"
 *   insn=0x0000000000301A80 string=0x00000000001F7FE0 "0'"
 *   insn=0x0000000000301A88 string=0x0000000000301A8C "`F@"
 *   insn=0x0000000000301A8C string=0x0000000000301A90 "`"
 *   insn=0x0000000000301A94 string=0x0000000000301A98 "h"
 *   insn=0x0000000000301A94 string=0x00000000001FCDE0 "0'"
 *   insn=0x0000000000301A9C string=0x0000000000301AA0 "`J@"
 *   insn=0x0000000000301AA0 string=0x0000000000301AA4 "@"
 *   insn=0x0000000000301AA8 string=0x00000000001F4DE0 "P'"
 *   insn=0x0000000000301AB0 string=0x0000000000301AB4 "k"
 *   insn=0x0000000000301AB4 string=0x0000000000301AE0 "hR@"
 *   insn=0x0000000000301AB8 string=0x0000000000301ABC "h\n@"
 *   insn=0x0000000000301AC0 string=0x0000000000301AC4 ""
 *   insn=0x0000000000301AC4 string=0x0000000000301AC8 ""
 *   insn=0x0000000000301ACC string=0x0000000000301AD0 "h"
 *   insn=0x0000000000301AD8 string=0x0000000000301ADC ""
 *   insn=0x0000000000301AE8 string=0x0000000000301AEC "k"
 *   insn=0x0000000000301AF0 string=0x0000000000301AF4 "h&@"
 *   insn=0x0000000000301AF8 string=0x0000000000301AFC ""
 *   insn=0x0000000000301AFC string=0x0000000000301B00 ""
 *   insn=0x0000000000301B04 string=0x0000000000301B08 "hR"
 *   insn=0x0000000000301B10 string=0x0000000000301B14 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0
  int v5; // w8
  __int64 v6; // x20
  __int64 v7; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 152);
  if ( (v2 & 0x3FC) != 0 )
  {
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(this + 128);
      if ( this )
      {
        this = Caver::Proto::ObjectLibrary::Clear((Caver::Proto::ObjectLibrary *)this);
        v2 = *(_DWORD *)(v1 + 152);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 136);
      if ( this )
      {
        this = Caver::Proto::Rectangle::Clear((Caver::Proto::Rectangle *)this);
        v2 = *(_DWORD *)(v1 + 152);
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 144);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
    }
  }
  if ( *(int *)(v1 + 24) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8 * v3);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 24) );
  }
  v5 = *(_DWORD *)(v1 + 80);
  *(_DWORD *)(v1 + 24) = 0;
  if ( v5 >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v6);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      ++v6;
    }
    while ( v6 < *(int *)(v1 + 80) );
  }
  *(_DWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 152) = 0;
  return this;
}

