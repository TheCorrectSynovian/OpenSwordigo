/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EA15C
 * Mangled: _ZN5Caver5Proto13PlayerProfile5ClearEv
 * Demangled: Caver::Proto::PlayerProfile::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7310  Caver::Proto::DateTime::Clear(void)
 *   0x00000000001FEE80  Caver::Proto::GameState::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 48
 *   insn=0x00000000002EA168 string=0x00000000002EA16C "h"
 *   insn=0x00000000002EA17C string=0x00000000002EA180 "`\n@"
 *   insn=0x00000000002EA180 string=0x00000000002EA184 ")"
 *   insn=0x00000000002EA18C string=0x00000000002EA190 ""
 *   insn=0x00000000002EA1A0 string=0x00000000002EA1A4 "h"
 *   insn=0x00000000002EA1A8 string=0x00000000002EA1AC "`"
 *   insn=0x00000000002EA1AC string=0x00000000002EA1B0 "`"
 *   insn=0x00000000002EA1B0 string=0x00000000002EA1B4 "W4"
 *   insn=0x00000000002EA1B4 string=0x00000000002EA1B8 "h"
 *   insn=0x00000000002EA1B4 string=0x00000000001F7310 "0'"
 *   insn=0x00000000002EA1C0 string=0x00000000002EA1C4 "`"
 *   insn=0x00000000002EA1C4 string=0x00000000002EA1C8 ")Q@"
 *   insn=0x00000000002EA1D0 string=0x00000000002EA1D4 ""
 *   insn=0x00000000002EA1E4 string=0x00000000002EA1E8 "h"
 *   insn=0x00000000002EA1F0 string=0x00000000002EA1F4 "`"
 *   insn=0x00000000002EA1F4 string=0x00000000002EA1F8 "`"
 *   insn=0x00000000002EA1F8 string=0x00000000002EA1FC "!S"
 *   insn=0x00000000002EA1FC string=0x00000000002EA200 "h"
 *   insn=0x00000000002EA208 string=0x00000000002EA20C "`"@"
 *   insn=0x00000000002EA20C string=0x00000000002EA210 ")"
 *   insn=0x00000000002EA218 string=0x00000000002EA21C ""
 *   insn=0x00000000002EA22C string=0x00000000002EA230 "h"
 *   insn=0x00000000002EA234 string=0x00000000002EA238 " "
 *   insn=0x00000000002EA238 string=0x00000000002EA2FC "hj@"
 *   insn=0x00000000002EA240 string=0x00000000002EA244 "`&@"
 *   insn=0x00000000002EA244 string=0x00000000002EA248 ")QG"
 *   insn=0x00000000002EA250 string=0x00000000002EA254 ""
 *   insn=0x00000000002EA264 string=0x00000000002EA268 "h"
 *   insn=0x00000000002EA270 string=0x00000000002EA274 "`*@"
 *   insn=0x00000000002EA274 string=0x00000000002EA278 ")"
 *   insn=0x00000000002EA280 string=0x00000000002EA284 ""
 *   insn=0x00000000002EA294 string=0x00000000002EA298 "h"
 *   insn=0x00000000002EA2A0 string=0x00000000002EA2A4 "`.@"
 *   insn=0x00000000002EA2A4 string=0x00000000002EA2A8 ")"
 *   insn=0x00000000002EA2B0 string=0x00000000002EA2B4 ""
 *   insn=0x00000000002EA2C0 string=0x00000000002EA2C4 "}"
 *   insn=0x00000000002EA2C4 string=0x00000000002EA2C8 "h"
 *   insn=0x00000000002EA2CC string=0x00000000002EA2D0 "h"
 *   insn=0x00000000002EA2D4 string=0x00000000002EA2D8 "`R@"
 *   insn=0x00000000002EA2D8 string=0x00000000002EA2DC "uF"
 *   insn=0x00000000002EA2E4 string=0x00000000002EA2E8 ""
 *   insn=0x00000000002EA2F4 string=0x00000000002EA2F8 "p"
 *   insn=0x00000000002EA300 string=0x00000000002EA304 "k"
 *   insn=0x00000000002EA308 string=0x00000000002EA30C "h2@"
 *   insn=0x00000000002EA310 string=0x00000000002EA314 ""
 *   insn=0x00000000002EA314 string=0x00000000002EA318 ""
 *   insn=0x00000000002EA31C string=0x00000000002EA320 "hj"
 *   insn=0x00000000002EA328 string=0x00000000002EA32C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 168);
  if ( (_BYTE)v2 )
  {
    if ( (v2 & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::PlayerProfile::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 168);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
      {
        this = Caver::Proto::DateTime::Clear((Caver::Proto::DateTime *)this);
        v2 = *(_DWORD *)(v1 + 168);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::PlayerProfile::_default_current_level_title_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 168);
      }
    }
    *(_QWORD *)(v1 + 40) = 0;
    *(_QWORD *)(v1 + 48) = 0;
    if ( (v2 & 0x40) != 0 )
    {
      this = *(_QWORD *)(v1 + 56);
      if ( this )
      {
        this = Caver::Proto::GameState::Clear((Caver::Proto::GameState *)this);
        v2 = *(_DWORD *)(v1 + 168);
      }
    }
    if ( (v2 & 0x80) != 0 )
    {
      this = *(_QWORD *)(v1 + 64);
      if ( (__int64 *)this != &Caver::Proto::PlayerProfile::_default_equipped_weapon_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 168);
      }
    }
  }
  if ( (v2 & 0xFF00) != 0 )
  {
    if ( (v2 & 0x100) != 0 )
    {
      this = *(_QWORD *)(v1 + 72);
      if ( (__int64 *)this != &Caver::Proto::PlayerProfile::_default_equipped_armor_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 168);
      }
    }
    if ( (v2 & 0x200) != 0 )
    {
      this = *(_QWORD *)(v1 + 80);
      if ( (__int64 *)this != &Caver::Proto::PlayerProfile::_default_weapon_trinket_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 168);
      }
    }
    if ( (v2 & 0x400) != 0 )
    {
      this = *(_QWORD *)(v1 + 88);
      if ( (__int64 *)this != &Caver::Proto::PlayerProfile::_default_armor_trinket_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 168);
      }
    }
    *(_BYTE *)(v1 + 152) = 0;
    if ( (v2 & 0x2000) != 0 )
    {
      this = *(_QWORD *)(v1 + 160);
      if ( (__int64 *)this != &Caver::Proto::PlayerProfile::_default_identifier_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
  }
  if ( *(int *)(v1 + 104) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 8 * v3);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 104) );
  }
  *(_DWORD *)(v1 + 104) = 0;
  *(_DWORD *)(v1 + 168) = 0;
  return this;
}

