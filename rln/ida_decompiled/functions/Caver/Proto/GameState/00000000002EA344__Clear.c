/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EA344
 * Mangled: _ZN5Caver5Proto9GameState5ClearEv
 * Demangled: Caver::Proto::GameState::Clear(void)
 *
 * Callers: 1
 *   0x00000000001FEE80  Caver::Proto::GameState::Clear(void)
 *
 * Callees: 2
 *   0x00000000001F4E90  Caver::Proto::CharacterState::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 73
 *   insn=0x00000000002EA354 string=0x00000000002EA358 "h"
 *   insn=0x00000000002EA364 string=0x00000000002EA368 "`\n@"
 *   insn=0x00000000002EA368 string=0x00000000002EA36C "`"
 *   insn=0x00000000002EA370 string=0x00000000002EA374 "h"
 *   insn=0x00000000002EA370 string=0x00000000001F4E90 "P'"
 *   insn=0x00000000002EA37C string=0x00000000002EA380 "`*@"
 *   insn=0x00000000002EA380 string=0x00000000002EA384 ")"
 *   insn=0x00000000002EA38C string=0x00000000002EA390 ""
 *   insn=0x00000000002EA39C string=0x00000000002EA3A0 "F"
 *   insn=0x00000000002EA3A0 string=0x00000000002EA3A4 "h"
 *   insn=0x00000000002EA3AC string=0x00000000002EA3B0 "`.@"
 *   insn=0x00000000002EA3B0 string=0x00000000002EA3B4 ")"
 *   insn=0x00000000002EA3BC string=0x00000000002EA3C0 ""
 *   insn=0x00000000002EA3CC string=0x00000000002EA3D0 ":"
 *   insn=0x00000000002EA3D0 string=0x00000000002EA3D4 "h"
 *   insn=0x00000000002EA3DC string=0x00000000002EA3E0 "`2@"
 *   insn=0x00000000002EA3E0 string=0x00000000002EA3E4 ")9C"
 *   insn=0x00000000002EA3EC string=0x00000000002EA3F0 ""
 *   insn=0x00000000002EA3FC string=0x00000000002EA400 "."
 *   insn=0x00000000002EA400 string=0x00000000002EA404 "h"
 *   insn=0x00000000002EA40C string=0x00000000002EA410 "`6@"
 *   insn=0x00000000002EA410 string=0x00000000002EA414 ")"
 *   insn=0x00000000002EA41C string=0x00000000002EA420 ""
 *   insn=0x00000000002EA42C string=0x00000000002EA430 """
 *   insn=0x00000000002EA430 string=0x00000000002EA434 "h"
 *   insn=0x00000000002EA43C string=0x00000000002EA440 "`:@"
 *   insn=0x00000000002EA440 string=0x00000000002EA444 ")UC"
 *   insn=0x00000000002EA44C string=0x00000000002EA450 ""
 *   insn=0x00000000002EA460 string=0x00000000002EA464 "h"
 *   insn=0x00000000002EA46C string=0x00000000002EA470 "`>@"
 *   insn=0x00000000002EA470 string=0x00000000002EA474 ")"
 *   insn=0x00000000002EA47C string=0x00000000002EA480 ""
 *   insn=0x00000000002EA48C string=0x00000000002EA490 "\n"
 *   insn=0x00000000002EA490 string=0x00000000002EA494 "h"
 *   insn=0x00000000002EA498 string=0x00000000002EA49C "`"
 *   insn=0x00000000002EA4A0 string=0x00000000002EA4A4 "t^@"
 *   insn=0x00000000002EA4A4 string=0x00000000002EA4A8 "t"
 *   insn=0x00000000002EA4C8 string=0x00000000002EA4CC ""
 *   insn=0x00000000002EA4EC string=0x00000000002EA4F0 "h"
 *   insn=0x00000000002EA4F8 string=0x00000000002EA4FC "`b@"
 *   insn=0x00000000002EA4FC string=0x00000000002EA500 ")aG"
 *   insn=0x00000000002EA508 string=0x00000000002EA50C ""
 *   insn=0x00000000002EA51C string=0x00000000002EA520 "h"
 *   insn=0x00000000002EA52C string=0x00000000002EA530 "`j@"
 *   insn=0x00000000002EA530 string=0x00000000002EA534 ")"
 *   insn=0x00000000002EA53C string=0x00000000002EA540 ""
 *   insn=0x00000000002EA550 string=0x00000000002EA554 "h"
 *   insn=0x00000000002EA55C string=0x00000000002EA560 "`n@"
 *   insn=0x00000000002EA560 string=0x00000000002EA564 ")"
 *   insn=0x00000000002EA56C string=0x00000000002EA570 ""
 *   insn=0x00000000002EA580 string=0x00000000002EA584 "h"
 *   insn=0x00000000002EA588 string=0x00000000002EA58C "@"
 *   insn=0x00000000002EA58C string=0x00000000002EA594 "h"@"
 *   insn=0x00000000002EA598 string=0x00000000002EA59C "k"
 *   insn=0x00000000002EA59C string=0x00000000002EA5C8 "h"
 *   insn=0x00000000002EA5A0 string=0x00000000002EA5A4 "h"
 *   insn=0x00000000002EA5A8 string=0x00000000002EA5AC ""
 *   insn=0x00000000002EA5AC string=0x00000000002EA5B0 ""
 *   insn=0x00000000002EA5B4 string=0x00000000002EA5B8 "h""
 *   insn=0x00000000002EA5C0 string=0x00000000002EA5C4 ""
 *   insn=0x00000000002EA5D0 string=0x00000000002EA5D4 "k"
 *   insn=0x00000000002EA5D4 string=0x00000000002EA600 "h"
 *   insn=0x00000000002EA5D8 string=0x00000000002EA5DC "hB@"
 *   insn=0x00000000002EA5E0 string=0x00000000002EA5E4 ""
 *   insn=0x00000000002EA5E4 string=0x00000000002EA5E8 ""
 *   insn=0x00000000002EA5EC string=0x00000000002EA5F0 "h"
 *   insn=0x00000000002EA5F8 string=0x00000000002EA5FC ""
 *   insn=0x00000000002EA608 string=0x00000000002EA60C "k"
 *   insn=0x00000000002EA610 string=0x00000000002EA614 "hr@"
 *   insn=0x00000000002EA618 string=0x00000000002EA61C ""
 *   insn=0x00000000002EA61C string=0x00000000002EA620 ""
 *   insn=0x00000000002EA624 string=0x00000000002EA628 "h"
 *   insn=0x00000000002EA630 string=0x00000000002EA634 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameState::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x21
  _QWORD *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x0
  int v8; // w8
  __int64 v9; // x20
  __int64 v10; // x0
  int v11; // w8
  __int64 v12; // x20
  __int64 v13; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 284);
  if ( (_BYTE)v2 )
  {
    if ( (v2 & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::CharacterState::Clear((Caver::Proto::CharacterState *)this);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 80);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_current_level_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 88);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_current_spawn_point_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 96);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_previous_portal_level_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    if ( (v2 & 0x20) != 0 )
    {
      this = *(_QWORD *)(v1 + 104);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_current_map_node_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      this = *(_QWORD *)(v1 + 112);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_carried_object_template_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    if ( (v2 & 0x80) != 0 )
    {
      this = *(_QWORD *)(v1 + 120);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_carried_object_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
  }
  if ( (v2 & 0x1FE00) != 0 )
  {
    if ( (v2 & 0x200) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 184);
      if ( v3 )
      {
        if ( *(int *)(v3 + 24) >= 1 )
        {
          v4 = 0;
          do
          {
            v5 = *(_QWORD **)(*(_QWORD *)(v3 + 16) + 8 * v4);
            this = sub_568CB8(v5, 0, *(_QWORD *)(*v5 - 24LL), 0);
            ++v4;
          }
          while ( v4 < *(int *)(v3 + 24) );
        }
        *(_DWORD *)(v3 + 24) = 0;
        *(_DWORD *)(v3 + 72) = 0;
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    if ( (v2 & 0x400) != 0 )
    {
      this = *(_QWORD *)(v1 + 192);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_selected_menu_tab_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    *(_WORD *)(v1 + 200) = 0;
    if ( (v2 & 0x2000) != 0 )
    {
      this = *(_QWORD *)(v1 + 208);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_flashing_item_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
    if ( (v2 & 0x4000) != 0 )
    {
      this = *(_QWORD *)(v1 + 216);
      if ( (__int64 *)this != &Caver::Proto::GameState::_default_flashing_skill_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 284);
      }
    }
  }
  if ( (v2 & 0xFF0000) != 0 )
    *(_DWORD *)(v1 + 280) = 0;
  if ( *(int *)(v1 + 32) >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8 * v6);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      ++v6;
    }
    while ( v6 < *(int *)(v1 + 32) );
  }
  v8 = *(_DWORD *)(v1 + 136);
  *(_DWORD *)(v1 + 32) = 0;
  if ( v8 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v1 + 128) + 8 * v9);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      ++v9;
    }
    while ( v9 < *(int *)(v1 + 136) );
  }
  v11 = *(_DWORD *)(v1 + 232);
  *(_DWORD *)(v1 + 136) = 0;
  if ( v11 >= 1 )
  {
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v1 + 224) + 8 * v12);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
      ++v12;
    }
    while ( v12 < *(int *)(v1 + 232) );
  }
  *(_DWORD *)(v1 + 232) = 0;
  *(_DWORD *)(v1 + 284) = 0;
  return this;
}

