/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EF47C
 * Mangled: _ZN5Caver5Proto14CharacterState5ClearEv
 * Demangled: Caver::Proto::CharacterState::Clear(void)
 *
 * Callers: 1
 *   0x00000000001F4E90  Caver::Proto::CharacterState::Clear(void)
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 37
 *   insn=0x00000000002EF488 string=0x00000000002EF48C "h"
 *   insn=0x00000000002EF4A8 string=0x00000000002EF4AC "`.@"
 *   insn=0x00000000002EF4AC string=0x00000000002EF4B0 ")yC"
 *   insn=0x00000000002EF4B8 string=0x00000000002EF4BC ""
 *   insn=0x00000000002EF4CC string=0x00000000002EF4D0 "h"
 *   insn=0x00000000002EF4D8 string=0x00000000002EF4DC "`2@"
 *   insn=0x00000000002EF4DC string=0x00000000002EF4E0 ")"
 *   insn=0x00000000002EF4E8 string=0x00000000002EF4EC ""
 *   insn=0x00000000002EF4FC string=0x00000000002EF500 "h"
 *   insn=0x00000000002EF504 string=0x00000000002EF508 "@"
 *   insn=0x00000000002EF508 string=0x00000000002EF5D0 "h*@"
 *   insn=0x00000000002EF510 string=0x00000000002EF514 "`R@"
 *   insn=0x00000000002EF514 string=0x00000000002EF518 ")u@"
 *   insn=0x00000000002EF520 string=0x00000000002EF524 ""
 *   insn=0x00000000002EF534 string=0x00000000002EF538 "h"
 *   insn=0x00000000002EF540 string=0x00000000002EF544 "`V@"
 *   insn=0x00000000002EF544 string=0x00000000002EF548 ")"
 *   insn=0x00000000002EF550 string=0x00000000002EF554 ""
 *   insn=0x00000000002EF564 string=0x00000000002EF568 "h"
 *   insn=0x00000000002EF56C string=0x00000000002EF59C "h"
 *   insn=0x00000000002EF570 string=0x00000000002EF574 "`Z@"
 *   insn=0x00000000002EF574 string=0x00000000002EF578 ")"
 *   insn=0x00000000002EF580 string=0x00000000002EF584 ""
 *   insn=0x00000000002EF594 string=0x00000000002EF598 "h"
 *   insn=0x00000000002EF5A0 string=0x00000000002EF5A4 "`^@"
 *   insn=0x00000000002EF5A4 string=0x00000000002EF5A8 ""
 *   insn=0x00000000002EF5B0 string=0x00000000002EF5B4 ""
 *   insn=0x00000000002EF5D4 string=0x00000000002EF5D8 "k"
 *   insn=0x00000000002EF5D8 string=0x00000000002EF604 "hr@"
 *   insn=0x00000000002EF5DC string=0x00000000002EF5E0 "h"
 *   insn=0x00000000002EF5E4 string=0x00000000002EF5E8 ""
 *   insn=0x00000000002EF5E8 string=0x00000000002EF5EC ""
 *   insn=0x00000000002EF5F0 string=0x00000000002EF5F4 "h*"
 *   insn=0x00000000002EF5FC string=0x00000000002EF600 ""
 *   insn=0x00000000002EF614 string=0x00000000002EF618 "h6@"
 *   insn=0x00000000002EF624 string=0x00000000002EF628 ""
 *   insn=0x00000000002EF630 string=0x00000000002EF634 "hr"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0
  int v5; // w8
  __int64 v6; // x20
  _QWORD *v7; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 204);
  if ( (_BYTE)v2 )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 28) = 0;
    if ( (v2 & 0x40) != 0 )
    {
      this = *(_QWORD *)(this + 88);
      if ( (__int64 *)this != &Caver::Proto::CharacterState::_default_equipped_weapon_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 204);
      }
    }
    if ( (v2 & 0x80) != 0 )
    {
      this = *(_QWORD *)(v1 + 96);
      if ( (__int64 *)this != &Caver::Proto::CharacterState::_default_equipped_armor_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 204);
      }
    }
  }
  if ( (v2 & 0x1FE00) != 0 )
  {
    if ( (v2 & 0x200) != 0 )
    {
      this = *(_QWORD *)(v1 + 160);
      if ( (__int64 *)this != &Caver::Proto::CharacterState::_default_current_skill_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 204);
      }
    }
    if ( (v2 & 0x400) != 0 )
    {
      this = *(_QWORD *)(v1 + 168);
      if ( (__int64 *)this != &Caver::Proto::CharacterState::_default_weapon_trinket_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 204);
      }
    }
    if ( (v2 & 0x800) != 0 )
    {
      this = *(_QWORD *)(v1 + 176);
      if ( (__int64 *)this != &Caver::Proto::CharacterState::_default_armor_trinket_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 204);
      }
    }
    if ( (v2 & 0x1000) != 0 )
    {
      this = *(_QWORD *)(v1 + 184);
      if ( (__int64 *)this != &Caver::Proto::CharacterState::_default_skill_trinket_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_QWORD *)(v1 + 192) = 0;
    *(_DWORD *)(v1 + 200) = 0;
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
  v5 = *(_DWORD *)(v1 + 112);
  *(_DWORD *)(v1 + 40) = 0;
  if ( v5 >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = *(_QWORD **)(*(_QWORD *)(v1 + 104) + 8 * v6);
      this = sub_568CB8(v7, 0, *(_QWORD *)(*v7 - 24LL), 0);
      ++v6;
    }
    while ( v6 < *(int *)(v1 + 112) );
  }
  *(_DWORD *)(v1 + 112) = 0;
  *(_DWORD *)(v1 + 204) = 0;
  return this;
}

