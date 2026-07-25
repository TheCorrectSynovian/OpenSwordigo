/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294B58
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent6UpdateEf
 * Demangled: Caver::BouncingMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000203360  Caver::BouncingMonsterControllerComponent::Update(float)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FBEF0  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000001FDF60  Caver::PhysicsObjectState::velocity(void)
 *   0x0000000000203360  Caver::BouncingMonsterControllerComponent::Update(float)
 *   0x0000000000203700  Caver::BouncingMonsterControllerComponent::Jump(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 118
 *   insn=0x0000000000294B6C string=0x0000000000294B70 "V"
 *   insn=0x0000000000294B78 string=0x0000000000294B7C ""
 *   insn=0x0000000000294B80 string=0x0000000000294B84 "hB@"
 *   insn=0x0000000000294B88 string=0x0000000000294B8C "`"
 *   insn=0x0000000000294B88 string=0x0000000000294BA0 "hN@"
 *   insn=0x0000000000294B94 string=0x0000000000294B98 "hB@"
 *   insn=0x0000000000294B94 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000294BA4 string=0x0000000000294BA8 "`""
 *   insn=0x0000000000294BB0 string=0x0000000000294BB4 "hN@"
 *   insn=0x0000000000294BB4 string=0x0000000000294BB8 ""
 *   insn=0x0000000000294BC0 string=0x0000000000294BC4 "@"
 *   insn=0x0000000000294BC0 string=0x0000000000294BD4 "t"
 *   insn=0x0000000000294BC4 string=0x0000000000294BC8 "H"
 *   insn=0x0000000000294BC8 string=0x0000000000294BCC ""
 *   insn=0x0000000000294BC8 string=0x0000000000294C30 "h"
 *   insn=0x0000000000294BD0 string=0x0000000000294C28 ""
 *   insn=0x0000000000294BDC string=0x0000000000294BE0 ")\t"
 *   insn=0x0000000000294BF0 string=0x0000000000294BF4 "@"
 *   insn=0x0000000000294BF4 string=0x0000000000294BF8 ""
 *   insn=0x0000000000294BF8 string=0x0000000000294BFC ""
 *   insn=0x0000000000294C00 string=0x0000000000294C04 ""
 *   insn=0x0000000000294C04 string=0x0000000000294C08 ""
 *   insn=0x0000000000294C10 string=0x0000000000294C14 ""
 *   insn=0x0000000000294C34 string=0x0000000000294C38 "`B@"
 *   insn=0x0000000000294C34 string=0x0000000000294C88 "`B@"
 *   insn=0x0000000000294C38 string=0x0000000000294C3C "`"
 *   insn=0x0000000000294C3C string=0x0000000000294C48 "`"
 *   insn=0x0000000000294C50 string=0x0000000000294C54 "`B@"
 *   insn=0x0000000000294C54 string=0x0000000000294C58 "h"
 *   insn=0x0000000000294C60 string=0x0000000000294C64 " "
 *   insn=0x0000000000294C64 string=0x0000000000294C68 "t"
 *   insn=0x0000000000294C6C string=0x0000000000294C70 "`"
 *   insn=0x0000000000294C78 string=0x0000000000294C7C "`B@"
 *   insn=0x0000000000294C84 string=0x00000000001FD020 "0'"
 *   insn=0x0000000000294C8C string=0x0000000000294C90 "`"
 *   insn=0x0000000000294C98 string=0x0000000000294C9C "`B@"
 *   insn=0x0000000000294CB0 string=0x0000000000294DC0 "hbD9"
 *   insn=0x0000000000294CB4 string=0x0000000000294CB8 "  "
 *   insn=0x0000000000294CB8 string=0x0000000000294CBC "-"
 *   insn=0x0000000000294CBC string=0x0000000000294CC0 ""
 *   insn=0x0000000000294CC0 string=0x0000000000294CC4 ""
 *   insn=0x0000000000294CC4 string=0x0000000000294CC8 "h"
 *   insn=0x0000000000294CCC string=0x0000000000294CD0 "h"
 *   insn=0x0000000000294CD0 string=0x0000000000294CD4 "a"
 *   insn=0x0000000000294CDC string=0x0000000000294CE0 "e"
 *   insn=0x0000000000294CE0 string=0x0000000000294CE4 "h"
 *   insn=0x0000000000294CE0 string=0x0000000000294D8C "b"
 *   insn=0x0000000000294CE8 string=0x0000000000294CEC "`"
 *   insn=0x0000000000294CF0 string=0x0000000000294CF4 "h"
 *   insn=0x0000000000294CF8 string=0x0000000000294CFC "."
 *   insn=0x0000000000294D00 string=0x0000000000294D04 "{"
 *   insn=0x0000000000294D04 string=0x00000000001FBEF0 "0'"
 *   insn=0x0000000000294D08 string=0x0000000000294D0C "t"
 *   insn=0x0000000000294D14 string=0x0000000000294D18 "\n"
 *   insn=0x0000000000294D18 string=0x0000000000294D1C ""
 *   insn=0x0000000000294D20 string=0x0000000000294D24 "i"
 *   insn=0x0000000000294D24 string=0x0000000000294D28 "!q@"
 *   insn=0x0000000000294D28 string=0x0000000000294D2C "i"
 *   insn=0x0000000000294D30 string=0x0000000000294D34 "  "
 *   insn=0x0000000000294D34 string=0x0000000000294D38 "U"
 *   insn=0x0000000000294D38 string=0x0000000000294D3C "?"
 *   insn=0x0000000000294D3C string=0x0000000000294D40 "`"
 *   insn=0x0000000000294D40 string=0x0000000000294D44 "`B@"
 *   insn=0x0000000000294D40 string=0x0000000000294D6C ""
 *   insn=0x0000000000294D44 string=0x0000000000294D48 "u"
 *   insn=0x0000000000294D4C string=0x0000000000294D50 "`"
 *   insn=0x0000000000294D54 string=0x0000000000294D58 "b"
 *   insn=0x0000000000294D58 string=0x0000000000294D5C "`B@"
 *   insn=0x0000000000294D70 string=0x0000000000294D74 "!"
 *   insn=0x0000000000294D7C string=0x0000000000294D80 ""
 *   insn=0x0000000000294D8C string=0x0000000000294D90 "!(""
 *   insn=0x0000000000294D94 string=0x0000000000294D98 ""
 *   insn=0x0000000000294D98 string=0x0000000000294D9C "h"
 *   insn=0x0000000000294DA4 string=0x0000000000294DA8 ""
 *   insn=0x0000000000294DAC string=0x0000000000294DB0 "h"
 *   insn=0x0000000000294DB8 string=0x0000000000294DBC "Q"
 *   insn=0x0000000000294DC4 string=0x0000000000294DC8 "hfD9"
 *   insn=0x0000000000294DC4 string=0x0000000000294E3C "`B@"
 *   insn=0x0000000000294DCC string=0x0000000000294DD0 "hB@"
 *   insn=0x0000000000294DD4 string=0x0000000000294DD8 "`"
 *   insn=0x0000000000294DDC string=0x0000000000294DE0 "@"
 *   insn=0x0000000000294DE0 string=0x0000000000294DE4 "hB@"
 *   insn=0x0000000000294DEC string=0x0000000000294DF0 "\"
 *   insn=0x0000000000294DF0 string=0x00000000001FDF60 "0'"
 *   insn=0x0000000000294DF4 string=0x0000000000294DF8 "  "
 *   insn=0x0000000000294DFC string=0x0000000000294E00 "h"
 *   insn=0x0000000000294E04 string=0x0000000000294E08 "\tY"
 *   insn=0x0000000000294E08 string=0x0000000000294E0C "`~@"
 *   insn=0x0000000000294E10 string=0x0000000000294E14 "`"
 *   insn=0x0000000000294E10 string=0x0000000000294E24 ""
 *   insn=0x0000000000294E18 string=0x0000000000294E1C "1"
 *   insn=0x0000000000294E1C string=0x0000000000294E20 "`~@"
 *   insn=0x0000000000294E24 string=0x0000000000294E28 ""
 *   insn=0x0000000000294E34 string=0x0000000000294E38 "hf"
 *   insn=0x0000000000294E40 string=0x0000000000294E44 "h"
 *   insn=0x0000000000294E40 string=0x0000000000294E50 "t"
 *   insn=0x0000000000294E44 string=0x0000000000294E48 ""
 *   insn=0x0000000000294E48 string=0x0000000000294E4C ""
 *   insn=0x0000000000294E4C string=0x0000000000294E80 ""
 *   insn=0x0000000000294E58 string=0x0000000000294E5C "!"
 *   insn=0x0000000000294E5C string=0x0000000000294E60 "`B@"
 *   insn=0x0000000000294E60 string=0x0000000000294E64 "h"
 *   insn=0x0000000000294E64 string=0x0000000000294E68 ""
 *   insn=0x0000000000294E78 string=0x0000000000294E7C "`B@"
 *   insn=0x0000000000294E84 string=0x0000000000294E88 "e@"
 *   insn=0x0000000000294E8C string=0x0000000000294E90 "`N@"
 *   insn=0x0000000000294E94 string=0x0000000000294E98 "`""
 *   insn=0x0000000000294E94 string=0x0000000000294EA8 ""
 *   insn=0x0000000000294EA0 string=0x0000000000294EA4 "`N@"
 *   insn=0x0000000000294EAC string=0x0000000000294EB0 "e@"
 *   insn=0x0000000000294EE0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000294EE8 string=0x0000000000294EEC ""
 *   insn=0x0000000000294EF8 string=0x0000000000294EFC ""
 *   insn=0x0000000000294F04 string=0x0000000000294F08 "\n"
 *   insn=0x0000000000294F10 string=0x0000000000294F14 ""
 *   insn=0x0000000000294F20 string=0x0000000000294F24 ""
 *   insn=0x0000000000294F30 string=0x0000000000294F34 "d"
 *   insn=0x0000000000294F3C string=0x0000000000294F40 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::BouncingMonsterControllerComponent::Update(
        Caver::BouncingMonsterControllerComponent *this,
        long double a2)
{
  __int64 *result; // x0
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x20
  _DWORD *v8; // x0
  int v9; // w8
  int v10; // w8
  Caver::EntityComponent *v11; // x0
  int v12; // w8
  int v13; // w20
  __int64 v14; // x0
  float v15; // s1
  float v16; // s0
  int v17; // w1
  __int64 NearestEnemy; // x0
  _DWORD *v19; // x20
  float v20; // s0
  int v21; // w8
  int v22; // w21
  Caver::EntityComponent *v23; // x0
  int v24; // w8
  __int64 v25; // x8
  long double v26; // q0
  __int64 v27; // x0
  _DWORD *v28; // x0
  __int64 v29; // x0
  __int64 v30[2]; // [xsp+0h] [xbp-40h] BYREF

  v30[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_QWORD *)this + 16) )
  {
    result = (__int64 *)Caver::ComponentOutletBase::Connect(
                          (Caver::BouncingMonsterControllerComponent *)((char *)this + 112),
                          this);
    if ( !*((_QWORD *)this + 16) )
      return result;
  }
  v5 = *((_QWORD *)this + 19);
  if ( !v5 )
  {
    result = (__int64 *)Caver::ComponentOutletBase::Connect(
                          (Caver::BouncingMonsterControllerComponent *)((char *)this + 136),
                          this);
    v5 = *((_QWORD *)this + 19);
    if ( !v5 )
      return result;
  }
  result = *(__int64 **)(v5 + 160);
  if ( result )
  {
    if ( !*((_DWORD *)result + 2) )
    {
      v6 = *result;
LABEL_14:
      (*(void (__fastcall **)(__int64 *))(v6 + 8))(result);
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 32);
    if ( !v7 )
      return result;
    *(_DWORD *)(v7 + 8) += 2;
    v8 = *(_DWORD **)(v5 + 160);
    *(_QWORD *)(v5 + 160) = v7;
    if ( v8 )
    {
      v9 = v8[2] - 1;
      v8[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    v10 = *(_DWORD *)(v7 + 8) - 1;
    *(_DWORD *)(v7 + 8) = v10;
    if ( !v10 )
    {
      v6 = *(_QWORD *)v7;
      result = (__int64 *)v7;
      goto LABEL_14;
    }
  }
  if ( !*((_DWORD *)this + 68) )
  {
    v11 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
    if ( v11 )
    {
      v12 = 0;
    }
    else
    {
      Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 112), this);
      v11 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
      v12 = *((_DWORD *)this + 68);
    }
    v13 = *((_DWORD *)v11 + 28);
    if ( v12 != v13 )
    {
      *((_DWORD *)this + 68) = v13;
      if ( !v11 )
      {
        Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 112), this);
        v11 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
      }
      Caver::EntityComponent::SetFacingDirection(v11, v13);
    }
  }
  v14 = *((_QWORD *)this + 16);
  if ( !v14 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 112), this);
    v14 = *((_QWORD *)this + 16);
  }
  if ( *(float *)(v14 + 128) >= 0.1 || *(float *)(v14 + 140) <= 0.0 )
    goto LABEL_46;
  *(_DWORD *)(v14 + 180) = 1145569280;
  if ( !*((_DWORD *)this + 42) )
  {
    NearestEnemy = Caver::MonsterControllerComponent::FindNearestEnemy(this);
    v19 = (_DWORD *)NearestEnemy;
    if ( NearestEnemy )
    {
      v20 = *(float *)(NearestEnemy + 112);
      v21 = *(_DWORD *)(NearestEnemy + 8) + 1;
      *(_DWORD *)(NearestEnemy + 8) = v21;
      if ( (float)(v20 - *(float *)(*((_QWORD *)this + 5) + 112LL)) > 0.0 )
        v22 = 1;
      else
        v22 = -1;
      if ( *((_DWORD *)this + 68) != v22 )
      {
        v23 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
        *((_DWORD *)this + 68) = v22;
        if ( !v23 )
        {
          Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 112), this);
          v23 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
        }
        Caver::EntityComponent::SetFacingDirection(v23, v22);
        v21 = v19[2];
      }
      v24 = v21 - 1;
      v19[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
    }
    goto LABEL_45;
  }
  v15 = *((float *)this + 46);
  v16 = *(float *)(*((_QWORD *)this + 5) + 112LL);
  if ( v16 >= v15 )
  {
    if ( v16 <= (float)(v15 + *((float *)this + 48)) || *((_DWORD *)this + 68) == -1 )
      goto LABEL_45;
    v17 = -1;
    *((_DWORD *)this + 68) = -1;
    goto LABEL_44;
  }
  if ( *((_DWORD *)this + 68) != 1 )
  {
    *((_DWORD *)this + 68) = 1;
    v17 = 1;
LABEL_44:
    Caver::EntityComponent::SetFacingDirection((Caver::EntityComponent *)v14, v17);
  }
LABEL_45:
  Caver::BouncingMonsterControllerComponent::Jump(this);
LABEL_46:
  if ( *((_BYTE *)this + 280) && !*((_BYTE *)this + 281) )
  {
    v25 = *((_QWORD *)this + 16);
    if ( !v25 )
    {
      Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 112), this);
      v25 = *((_QWORD *)this + 16);
    }
    Caver::PhysicsObjectState::velocity(v30, (Caver::PhysicsObjectState *)(v25 + 120));
    LODWORD(v26) = HIDWORD(v30[0]);
    if ( *((float *)v30 + 1) < 0.0 )
    {
      *(_WORD *)(*((_QWORD *)this + 32) + 44LL) = 256;
      v27 = *((_QWORD *)this + 31);
      if ( !v27 )
      {
        Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 232), this);
        v27 = *((_QWORD *)this + 31);
      }
      *(_DWORD *)((*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v27 + 264LL))(v27, v26) + 12) = 0;
      *((_BYTE *)this + 281) = 1;
    }
  }
  v28 = (_DWORD *)*((_QWORD *)this + 16);
  if ( v28 )
  {
    v28[44] = *((_DWORD *)this + 69);
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 112), this);
    v28 = (_DWORD *)*((_QWORD *)this + 16);
    v28[44] = *((_DWORD *)this + 69);
    if ( !v28 )
    {
      Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 112), this);
      v28 = (_DWORD *)*((_QWORD *)this + 16);
    }
  }
  (*(void (__fastcall **)(_DWORD *, long double))(*(_QWORD *)v28 + 200LL))(v28, a2);
  v29 = *((_QWORD *)this + 19);
  if ( !v29 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 136), this);
    v29 = *((_QWORD *)this + 19);
  }
  return (__int64 *)(*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v29 + 200LL))(v29, a2);
}

