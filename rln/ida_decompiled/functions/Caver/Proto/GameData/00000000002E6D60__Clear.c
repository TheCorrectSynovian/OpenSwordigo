/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6D60
 * Mangled: _ZN5Caver5Proto8GameData5ClearEv
 * Demangled: Caver::Proto::GameData::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 35
 *   insn=0x00000000002E6D6C string=0x00000000002E6D70 "h"
 *   insn=0x00000000002E6D74 string=0x00000000002E6D78 "k"
 *   insn=0x00000000002E6D78 string=0x00000000002E6DA4 "hR@"
 *   insn=0x00000000002E6D7C string=0x00000000002E6D80 "h\n@"
 *   insn=0x00000000002E6D84 string=0x00000000002E6D88 ""
 *   insn=0x00000000002E6D88 string=0x00000000002E6D8C ""
 *   insn=0x00000000002E6D90 string=0x00000000002E6D94 "h"
 *   insn=0x00000000002E6D9C string=0x00000000002E6DA0 ""
 *   insn=0x00000000002E6DAC string=0x00000000002E6DB0 "k"
 *   insn=0x00000000002E6DB0 string=0x00000000002E6DDC "h"
 *   insn=0x00000000002E6DB4 string=0x00000000002E6DB8 "h&@"
 *   insn=0x00000000002E6DBC string=0x00000000002E6DC0 ""
 *   insn=0x00000000002E6DC0 string=0x00000000002E6DC4 ""
 *   insn=0x00000000002E6DC8 string=0x00000000002E6DCC "hR"
 *   insn=0x00000000002E6DD4 string=0x00000000002E6DD8 ""
 *   insn=0x00000000002E6DE4 string=0x00000000002E6DE8 "k"
 *   insn=0x00000000002E6DE8 string=0x00000000002E6E14 "h"
 *   insn=0x00000000002E6DEC string=0x00000000002E6DF0 "hB@"
 *   insn=0x00000000002E6DF4 string=0x00000000002E6DF8 ""
 *   insn=0x00000000002E6DF8 string=0x00000000002E6DFC ""
 *   insn=0x00000000002E6E00 string=0x00000000002E6E04 "h"
 *   insn=0x00000000002E6E0C string=0x00000000002E6E10 ""
 *   insn=0x00000000002E6E1C string=0x00000000002E6E20 "k"
 *   insn=0x00000000002E6E20 string=0x00000000002E6E4C "h"
 *   insn=0x00000000002E6E24 string=0x00000000002E6E28 "h^@"
 *   insn=0x00000000002E6E2C string=0x00000000002E6E30 ""
 *   insn=0x00000000002E6E30 string=0x00000000002E6E34 ""
 *   insn=0x00000000002E6E38 string=0x00000000002E6E3C "h"
 *   insn=0x00000000002E6E44 string=0x00000000002E6E48 ""
 *   insn=0x00000000002E6E54 string=0x00000000002E6E58 "k"
 *   insn=0x00000000002E6E5C string=0x00000000002E6E60 "hz@"
 *   insn=0x00000000002E6E64 string=0x00000000002E6E68 ""
 *   insn=0x00000000002E6E68 string=0x00000000002E6E6C ""
 *   insn=0x00000000002E6E70 string=0x00000000002E6E74 "h"
 *   insn=0x00000000002E6E7C string=0x00000000002E6E80 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameData::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x0
  int v4; // w8
  __int64 v5; // x20
  __int64 v6; // x0
  int v7; // w8
  __int64 v8; // x20
  __int64 v9; // x0
  int v10; // w8
  __int64 v11; // x20
  __int64 v12; // x0
  int v13; // w8
  __int64 v14; // x20
  __int64 v15; // x0

  v1 = this;
  if ( *(int *)(this + 24) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8 * v2);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      ++v2;
    }
    while ( v2 < *(int *)(v1 + 24) );
  }
  v4 = *(_DWORD *)(v1 + 80);
  *(_DWORD *)(v1 + 24) = 0;
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 8 * v5);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      ++v5;
    }
    while ( v5 < *(int *)(v1 + 80) );
  }
  v7 = *(_DWORD *)(v1 + 136);
  *(_DWORD *)(v1 + 80) = 0;
  if ( v7 >= 1 )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v1 + 128) + 8 * v8);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      ++v8;
    }
    while ( v8 < *(int *)(v1 + 136) );
  }
  v10 = *(_DWORD *)(v1 + 192);
  *(_DWORD *)(v1 + 136) = 0;
  if ( v10 >= 1 )
  {
    v11 = 0;
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v1 + 184) + 8 * v11);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
      ++v11;
    }
    while ( v11 < *(int *)(v1 + 192) );
  }
  v13 = *(_DWORD *)(v1 + 248);
  *(_DWORD *)(v1 + 192) = 0;
  if ( v13 >= 1 )
  {
    v14 = 0;
    do
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 8 * v14);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
      ++v14;
    }
    while ( v14 < *(int *)(v1 + 248) );
  }
  *(_DWORD *)(v1 + 248) = 0;
  *(_DWORD *)(v1 + 296) = 0;
  return this;
}

