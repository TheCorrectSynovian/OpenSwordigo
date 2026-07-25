/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FD374
 * Mangled: _ZN5Caver5Proto13ObjectLibrary5ClearEv
 * Demangled: Caver::Proto::ObjectLibrary::Clear(void)
 *
 * Callers: 1
 *   0x00000000001F7FE0  Caver::Proto::ObjectLibrary::Clear(void)
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 33
 *   insn=0x00000000002FD380 string=0x00000000002FD384 "h"
 *   insn=0x00000000002FD384 string=0x00000000002FD388 "h"
 *   insn=0x00000000002FD388 string=0x00000000002FD38C "H"
 *   insn=0x00000000002FD388 string=0x00000000002FD3B4 "h"@"
 *   insn=0x00000000002FD38C string=0x00000000002FD390 "`\n@"
 *   insn=0x00000000002FD390 string=0x00000000002FD394 ""
 *   insn=0x00000000002FD39C string=0x00000000002FD3A0 ""
 *   insn=0x00000000002FD3AC string=0x00000000002FD3B0 "B"
 *   insn=0x00000000002FD3B8 string=0x00000000002FD3BC "k"
 *   insn=0x00000000002FD3BC string=0x00000000002FD3E8 "hZ@"
 *   insn=0x00000000002FD3C0 string=0x00000000002FD3C4 "h"
 *   insn=0x00000000002FD3C8 string=0x00000000002FD3CC ""
 *   insn=0x00000000002FD3CC string=0x00000000002FD3D0 ""
 *   insn=0x00000000002FD3D4 string=0x00000000002FD3D8 "h""
 *   insn=0x00000000002FD3E0 string=0x00000000002FD3E4 ""
 *   insn=0x00000000002FD3F4 string=0x00000000002FD428 "h"
 *   insn=0x00000000002FD3F8 string=0x00000000002FD3FC "h*@"
 *   insn=0x00000000002FD408 string=0x00000000002FD40C ""
 *   insn=0x00000000002FD410 string=0x00000000002FD414 ")"
 *   insn=0x00000000002FD414 string=0x00000000002FD418 "hZ"
 *   insn=0x00000000002FD430 string=0x00000000002FD434 "k"
 *   insn=0x00000000002FD434 string=0x00000000002FD460 "h"
 *   insn=0x00000000002FD438 string=0x00000000002FD43C "hF@"
 *   insn=0x00000000002FD440 string=0x00000000002FD444 ""
 *   insn=0x00000000002FD444 string=0x00000000002FD448 ""
 *   insn=0x00000000002FD44C string=0x00000000002FD450 "h"
 *   insn=0x00000000002FD458 string=0x00000000002FD45C ""
 *   insn=0x00000000002FD468 string=0x00000000002FD46C "k"
 *   insn=0x00000000002FD470 string=0x00000000002FD474 "hb@"
 *   insn=0x00000000002FD478 string=0x00000000002FD47C ""
 *   insn=0x00000000002FD47C string=0x00000000002FD480 ""
 *   insn=0x00000000002FD484 string=0x00000000002FD488 "h"
 *   insn=0x00000000002FD490 string=0x00000000002FD494 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLibrary::Clear(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x0
  int v4; // w8
  __int64 v5; // x20
  _QWORD *v6; // x0
  int v7; // w8
  __int64 v8; // x20
  __int64 v9; // x0
  int v10; // w8
  __int64 v11; // x20
  __int64 v12; // x0

  v1 = this;
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( (__int64 *)this != &Caver::Proto::ObjectLibrary::_default_name_ )
      this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
  }
  if ( *(int *)(v1 + 32) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8 * v2);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      ++v2;
    }
    while ( v2 < *(int *)(v1 + 32) );
  }
  v4 = *(_DWORD *)(v1 + 88);
  *(_DWORD *)(v1 + 32) = 0;
  if ( v4 >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD **)(*(_QWORD *)(v1 + 80) + 8 * v5);
      this = sub_568CB8(v6, 0, *(_QWORD *)(*v6 - 24LL), 0);
      ++v5;
    }
    while ( v5 < *(int *)(v1 + 88) );
  }
  v7 = *(_DWORD *)(v1 + 144);
  *(_DWORD *)(v1 + 88) = 0;
  if ( v7 >= 1 )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v1 + 136) + 8 * v8);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      ++v8;
    }
    while ( v8 < *(int *)(v1 + 144) );
  }
  v10 = *(_DWORD *)(v1 + 200);
  *(_DWORD *)(v1 + 144) = 0;
  if ( v10 >= 1 )
  {
    v11 = 0;
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v1 + 192) + 8 * v11);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
      ++v11;
    }
    while ( v11 < *(int *)(v1 + 200) );
  }
  *(_DWORD *)(v1 + 200) = 0;
  *(_DWORD *)(v1 + 248) = 0;
  return this;
}

