/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293550
 * Mangled: _ZN5Caver29BatMonsterControllerComponent6UpdateEf
 * Demangled: Caver::BatMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001F8660  Caver::BatMonsterControllerComponent::Update(float)
 *
 * Callees: 11
 *   0x00000000001F4B80  Caver::PhysicsObjectState::setVelocity(Caver::Vector2 const&)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8660  Caver::BatMonsterControllerComponent::Update(float)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FDF60  Caver::PhysicsObjectState::velocity(void)
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 111
 *   insn=0x0000000000293568 string=0x000000000029356C "U"
 *   insn=0x0000000000293574 string=0x0000000000293578 ""
 *   insn=0x000000000029357C string=0x0000000000293580 "hB@"
 *   insn=0x0000000000293584 string=0x0000000000293588 "`"
 *   insn=0x0000000000293584 string=0x000000000029359C "vN@"
 *   insn=0x000000000029358C string=0x0000000000293590 "T"
 *   insn=0x0000000000293590 string=0x0000000000293594 "hB@"
 *   insn=0x0000000000293590 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002935A0 string=0x00000000002935A4 "`""
 *   insn=0x00000000002935A8 string=0x00000000002935AC "M"
 *   insn=0x00000000002935AC string=0x00000000002935B0 "vN@"
 *   insn=0x00000000002935BC string=0x00000000002935C0 "@"
 *   insn=0x00000000002935BC string=0x00000000002935D0 "`r@"
 *   insn=0x00000000002935C0 string=0x00000000002935C4 ""
 *   insn=0x00000000002935C4 string=0x00000000002935C8 ""
 *   insn=0x00000000002935C4 string=0x0000000000293644 "h~@"
 *   insn=0x00000000002935CC string=0x000000000029363C ""
 *   insn=0x00000000002935D0 string=0x00000000002935D4 "@"
 *   insn=0x00000000002935D4 string=0x00000000002935D8 ""
 *   insn=0x00000000002935D4 string=0x000000000029385C "`B"
 *   insn=0x00000000002935D8 string=0x00000000002935DC ""
 *   insn=0x00000000002935EC string=0x00000000002935F0 "\t"
 *   insn=0x0000000000293600 string=0x0000000000293604 "@"
 *   insn=0x0000000000293600 string=0x0000000000293620 "4"
 *   insn=0x0000000000293604 string=0x0000000000293608 ""
 *   insn=0x0000000000293608 string=0x000000000029360C ""
 *   insn=0x0000000000293610 string=0x0000000000293614 ""
 *   insn=0x0000000000293614 string=0x0000000000293618 ""
 *   insn=0x0000000000293624 string=0x0000000000293628 ""
 *   insn=0x0000000000293648 string=0x000000000029364C "`"
 *   insn=0x0000000000293648 string=0x0000000000293660 "`r@"
 *   insn=0x0000000000293650 string=0x0000000000293654 "#"
 *   insn=0x0000000000293654 string=0x0000000000293658 "h~@"
 *   insn=0x0000000000293658 string=0x000000000029365C ""
 *   insn=0x000000000029365C string=0x00000000002936BC "`"
 *   insn=0x0000000000293660 string=0x0000000000293664 "i"
 *   insn=0x0000000000293668 string=0x000000000029366C "`B"
 *   insn=0x0000000000293668 string=0x000000000029367C ""
 *   insn=0x0000000000293670 string=0x0000000000293674 ""
 *   insn=0x0000000000293674 string=0x0000000000293678 "`r@"
 *   insn=0x000000000029367C string=0x0000000000293680 ""
 *   insn=0x0000000000293690 string=0x0000000000293694 " ! "
 *   insn=0x0000000000293694 string=0x0000000000293698 "-"
 *   insn=0x0000000000293698 string=0x000000000029369C "`~@"
 *   insn=0x00000000002936A0 string=0x00000000002936A4 "`"
 *   insn=0x00000000002936A0 string=0x00000000002936B4 ";"
 *   insn=0x00000000002936A8 string=0x00000000002936AC ""
 *   insn=0x00000000002936AC string=0x00000000002936B0 "`~@"
 *   insn=0x00000000002936B4 string=0x00000000001F4FA0 "P'"
 *   insn=0x00000000002936C0 string=0x00000000002936C4 "a"
 *   insn=0x00000000002936CC string=0x00000000002936D0 "*"
 *   insn=0x00000000002936D4 string=0x00000000002936D8 "`"
 *   insn=0x00000000002936D8 string=0x00000000002936DC " ""
 *   insn=0x00000000002936F0 string=0x00000000002936F4 "a"
 *   insn=0x00000000002936FC string=0x0000000000293700 "!#"
 *   insn=0x0000000000293700 string=0x0000000000293704 "\t""
 *   insn=0x0000000000293704 string=0x0000000000293708 " "
 *   insn=0x0000000000293710 string=0x0000000000293714 "W"
 *   insn=0x000000000029371C string=0x0000000000293720 "!9F"
 *   insn=0x0000000000293720 string=0x0000000000293724 "B"
 *   insn=0x0000000000293724 string=0x0000000000293728 "hB@"
 *   insn=0x0000000000293728 string=0x000000000029372C "!"
 *   insn=0x000000000029372C string=0x0000000000293730 "\n\t""
 *   insn=0x0000000000293734 string=0x0000000000293738 "`"
 *   insn=0x0000000000293740 string=0x0000000000293744 "hB@"
 *   insn=0x0000000000293750 string=0x00000000001FDF60 "0'"
 *   insn=0x0000000000293754 string=0x0000000000293758 "!9 "
 *   insn=0x0000000000293758 string=0x000000000029375C "`9""
 *   insn=0x000000000029375C string=0x0000000000293760 ""!"
 *   insn=0x0000000000293764 string=0x0000000000293768 "B(#"
 *   insn=0x0000000000293768 string=0x000000000029376C "C\t*"
 *   insn=0x000000000029376C string=0x0000000000293770 "@ #"
 *   insn=0x0000000000293770 string=0x0000000000293774 "e"
 *   insn=0x0000000000293788 string=0x00000000001F8E10 "0'"
 *   insn=0x0000000000293790 string=0x0000000000293794 "@\t "
 *   insn=0x00000000002937A0 string=0x00000000002937A4 "A\t""
 *   insn=0x00000000002937A4 string=0x00000000002937A8 "+( "
 *   insn=0x00000000002937AC string=0x00000000002937B0 "hB@"
 *   insn=0x00000000002937B4 string=0x00000000002937B8 "`"
 *   insn=0x00000000002937C0 string=0x00000000002937C4 "hB@"
 *   insn=0x00000000002937D0 string=0x00000000002937D4 "`"
 *   insn=0x00000000002937D0 string=0x00000000001F4B80 "P'"
 *   insn=0x00000000002937D4 string=0x00000000002937D8 "`B@"
 *   insn=0x00000000002937DC string=0x00000000002937E0 "`"
 *   insn=0x00000000002937E4 string=0x00000000002937E8 "`"
 *   insn=0x00000000002937E4 string=0x00000000002937F8 ""
 *   insn=0x00000000002937F0 string=0x00000000002937F4 "`B@"
 *   insn=0x00000000002937FC string=0x0000000000293800 "e@"
 *   insn=0x0000000000293804 string=0x0000000000293808 "`N@"
 *   insn=0x000000000029380C string=0x0000000000293810 "`""
 *   insn=0x000000000029380C string=0x0000000000293820 ""
 *   insn=0x0000000000293818 string=0x000000000029381C "`N@"
 *   insn=0x0000000000293824 string=0x0000000000293828 "e@"
 *   insn=0x0000000000293838 string=0x000000000029383C "A"
 *   insn=0x0000000000293864 string=0x0000000000293868 "`r@"
 *   insn=0x0000000000293868 string=0x000000000029386C " "
 *   insn=0x000000000029386C string=0x0000000000293870 "vN@"
 *   insn=0x0000000000293870 string=0x0000000000293874 "6"
 *   insn=0x0000000000293874 string=0x0000000000293878 "`""
 *   insn=0x0000000000293880 string=0x0000000000293884 "`r@"
 *   insn=0x0000000000293884 string=0x0000000000293888 "vN@"
 *   insn=0x0000000000293888 string=0x000000000029388C "`"
 *   insn=0x000000000029388C string=0x0000000000293890 "`B"
 *   insn=0x0000000000293898 string=0x000000000029389C "`r@"
 *   insn=0x000000000029389C string=0x00000000002938A0 "N"
 *   insn=0x00000000002938A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002938A8 string=0x00000000002938AC "4"
 *   insn=0x00000000002938B0 string=0x00000000002938B4 ""
 *   insn=0x00000000002938C0 string=0x00000000002938C4 ""
 *   insn=0x00000000002938DC string=0x00000000002938E0 "`"
 *   insn=0x00000000002938E0 string=0x00000000001F8660 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BatMonsterControllerComponent::Update(
        Caver::BatMonsterControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x20
  _DWORD *v10; // x0
  int v11; // w8
  int v12; // w8
  __int64 v13; // x0
  float v14; // s9
  Caver::SoundEffectComponent *v15; // x0
  float v16; // s1
  float v17; // s0
  float v18; // s9
  float v19; // s0
  float v20; // s0
  __int64 v21; // x8
  float v22; // s11
  float v23; // s10
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  float v27; // [xsp+8h] [xbp-58h] BYREF
  float v28; // [xsp+Ch] [xbp-54h]
  __int64 v29[2]; // [xsp+10h] [xbp-50h] BYREF

  v29[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_QWORD *)this + 16) )
  {
    result = Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 112), this);
    if ( !*((_QWORD *)this + 16) )
      return result;
  }
  v5 = *((_QWORD *)this + 19);
  if ( !v5 )
  {
    result = Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 136), this);
    v5 = *((_QWORD *)this + 19);
    if ( !v5 )
      return result;
  }
  v6 = *(_QWORD *)(v5 + 160);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) )
      goto LABEL_18;
    v7 = *(_QWORD *)v6;
  }
  else
  {
    result = *((_QWORD *)this + 28);
    if ( !result )
    {
      Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 208), this);
      result = *((_QWORD *)this + 28);
      if ( !result )
        return result;
      v5 = *((_QWORD *)this + 19);
      if ( !v5 )
      {
        Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 136), this);
        result = *((_QWORD *)this + 28);
        v5 = *((_QWORD *)this + 19);
        if ( !result )
        {
          Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 208), this);
          result = *((_QWORD *)this + 28);
        }
      }
    }
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 264LL))(result);
    v9 = v8;
    if ( v8 )
      *(_DWORD *)(v8 + 8) += 2;
    v10 = *(_DWORD **)(v5 + 160);
    *(_QWORD *)(v5 + 160) = v9;
    if ( v10 )
    {
      v11 = v10[2] - 1;
      v10[2] = v11;
      if ( !v11 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    if ( !v9 )
      goto LABEL_18;
    v12 = *(_DWORD *)(v9 + 8) - 1;
    *(_DWORD *)(v9 + 8) = v12;
    if ( v12 )
      goto LABEL_18;
    v7 = *(_QWORD *)v9;
    v6 = v9;
  }
  (*(void (__fastcall **)(__int64))(v7 + 8))(v6);
LABEL_18:
  if ( *((_QWORD *)this + 31)
    || (Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 232), this),
        *((_QWORD *)this + 31)) )
  {
    v13 = *((_QWORD *)this + 28);
    v14 = *((float *)this + 65);
    if ( !v13 )
    {
      Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 208), this);
      v13 = *((_QWORD *)this + 28);
    }
    if ( v14 > (float)(*(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 264LL))(v13) + 40) * 5.0) )
    {
      v15 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 31);
      if ( !v15 )
      {
        Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 232), this);
        v15 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 31);
      }
      Caver::SoundEffectComponent::Play(v15);
      *((_DWORD *)this + 65) = 0;
    }
  }
  v16 = *((float *)this + 64);
  *((float *)this + 65) = *((float *)this + 65) + *(float *)&a2;
  v17 = (float)(v16 * 0.2) * 6.28318531;
  v18 = cosf(v17) * 200.0;
  v19 = (float)(*((float *)this + 64) * 0.5) * 6.28318531;
  v20 = sinf(v19);
  v21 = *((_QWORD *)this + 16);
  v22 = v20 * 250.0;
  v23 = *(float *)&a2 * 600.0;
  if ( !v21 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 112), this);
    v21 = *((_QWORD *)this + 16);
  }
  Caver::PhysicsObjectState::velocity(v29, (Caver::PhysicsObjectState *)(v21 + 120));
  if ( (float)((float)((float)(v18 - *(float *)v29) * (float)(v18 - *(float *)v29))
             + (float)((float)(v22 - *((float *)v29 + 1)) * (float)(v22 - *((float *)v29 + 1)))) >= (float)(v23 * v23) )
  {
    v27 = v18 - *(float *)v29;
    v28 = v22 - *((float *)v29 + 1);
    Caver::Vector2::Normalize((Caver::Vector2 *)&v27);
    *(float *)v29 = (float)(v23 * v27) + *(float *)v29;
    v22 = (float)(v23 * v28) + *((float *)v29 + 1);
  }
  else
  {
    *(float *)v29 = v18;
  }
  *((float *)v29 + 1) = v22;
  v24 = *((_QWORD *)this + 16);
  if ( !v24 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 112), this);
    v24 = *((_QWORD *)this + 16);
  }
  Caver::PhysicsObjectState::setVelocity((Caver::PhysicsObjectState *)(v24 + 120), (const Caver::Vector2 *)v29);
  v25 = *((_QWORD *)this + 16);
  *((float *)this + 64) = *((float *)this + 64) + *(float *)&a2;
  if ( !v25 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 112), this);
    v25 = *((_QWORD *)this + 16);
  }
  (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v25 + 200LL))(v25, a2);
  v26 = *((_QWORD *)this + 19);
  if ( !v26 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BatMonsterControllerComponent *)((char *)this + 136), this);
    v26 = *((_QWORD *)this + 19);
  }
  return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v26 + 200LL))(v26, a2);
}

