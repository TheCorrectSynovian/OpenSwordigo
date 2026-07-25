/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292794
 * Mangled: _ZN5Caver15AttackComponent6UpdateEf
 * Demangled: Caver::AttackComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001F91B0  Caver::AttackComponent::Update(float)
 *
 * Callees: 3
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *
 * Referenced strings: 135
 *   insn=0x00000000002927A4 string=0x00000000002927A8 "h"
 *   insn=0x00000000002927AC string=0x00000000002927B0 "a"
 *   insn=0x00000000002927AC string=0x0000000000292A28 "a"
 *   insn=0x00000000002927B0 string=0x00000000002927B4 "`B@"
 *   insn=0x00000000002927B4 string=0x00000000002927B8 " ( "
 *   insn=0x00000000002927B8 string=0x00000000002927BC "`"
 *   insn=0x00000000002927C0 string=0x00000000002927C4 "`"
 *   insn=0x00000000002927C0 string=0x00000000002927D4 ""
 *   insn=0x00000000002927CC string=0x00000000002927D0 "`B@"
 *   insn=0x00000000002927CC string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002927D4 string=0x00000000002927D8 ""
 *   insn=0x00000000002927E0 string=0x00000000002927E4 "a2A"
 *   insn=0x00000000002927E8 string=0x00000000002927EC "e"
 *   insn=0x00000000002927EC string=0x00000000002927F0 "h"
 *   insn=0x00000000002927EC string=0x0000000000292818 "`B@"
 *   insn=0x00000000002927F4 string=0x00000000002927F8 "`f@"
 *   insn=0x00000000002927FC string=0x0000000000292800 "`"
 *   insn=0x0000000000292808 string=0x000000000029280C "`f@"
 *   insn=0x000000000029280C string=0x0000000000292810 "@"
 *   insn=0x0000000000292814 string=0x00000000001F4FA0 "P'"
 *   insn=0x000000000029281C string=0x0000000000292820 "`"
 *   insn=0x000000000029281C string=0x0000000000292830 ""
 *   insn=0x0000000000292828 string=0x000000000029282C "`B@"
 *   insn=0x0000000000292830 string=0x0000000000292834 ""
 *   insn=0x0000000000292838 string=0x000000000029283C "`"
 *   insn=0x000000000029283C string=0x0000000000292840 "a"
 *   insn=0x0000000000292844 string=0x0000000000292848 "5G"
 *   insn=0x0000000000292844 string=0x0000000000583734 "o"
 *   insn=0x0000000000292848 string=0x000000000029284C ""
 *   insn=0x0000000000292854 string=0x0000000000292858 "h2"
 *   insn=0x000000000029285C string=0x0000000000292860 "`B@"
 *   insn=0x000000000029285C string=0x0000000000292918 "`"A"
 *   insn=0x0000000000292864 string=0x0000000000292868 "`"
 *   insn=0x0000000000292864 string=0x0000000000292878 ""
 *   insn=0x0000000000292870 string=0x0000000000292874 "`B@"
 *   insn=0x0000000000292878 string=0x000000000029287C ""
 *   insn=0x0000000000292884 string=0x0000000000292888 "a"
 *   insn=0x000000000029288C string=0x0000000000292890 "M"
 *   insn=0x0000000000292890 string=0x0000000000292894 "h"
 *   insn=0x0000000000292898 string=0x000000000029289C "`B@"
 *   insn=0x0000000000292898 string=0x00000000002928D0 "h"
 *   insn=0x00000000002928A0 string=0x00000000002928A4 "`"
 *   insn=0x00000000002928A0 string=0x00000000002928B4 ""
 *   insn=0x00000000002928AC string=0x00000000002928B0 "`B@"
 *   insn=0x00000000002928B4 string=0x00000000002928B8 ""
 *   insn=0x00000000002928C0 string=0x00000000002928C4 "a"
 *   insn=0x00000000002928C8 string=0x00000000002928CC "e"
 *   insn=0x00000000002928D4 string=0x00000000002928D8 "i"
 *   insn=0x00000000002928D8 string=0x00000000002928DC "("
 *   insn=0x00000000002928DC string=0x00000000002928E0 "`N@"
 *   insn=0x00000000002928DC string=0x00000000002929E0 "`B@"
 *   insn=0x00000000002928E4 string=0x00000000002928E8 "`""
 *   insn=0x00000000002928EC string=0x00000000002928F0 "|"
 *   insn=0x00000000002928F0 string=0x00000000002928F4 "`N@"
 *   insn=0x00000000002928F4 string=0x00000000002928F8 "`"
 *   insn=0x0000000000292900 string=0x00000000001FD0F0 "0'"
 *   insn=0x0000000000292904 string=0x0000000000292908 "h"
 *   insn=0x0000000000292908 string=0x000000000029290C "`B@"
 *   insn=0x000000000029290C string=0x0000000000292910 "@"
 *   insn=0x0000000000292910 string=0x0000000000292914 "5"
 *   insn=0x0000000000292910 string=0x00000000002929F8 ""
 *   insn=0x0000000000292914 string=0x00000000002929E8 "`"
 *   insn=0x0000000000292918 string=0x000000000029291C "a"
 *   insn=0x0000000000292924 string=0x0000000000292928 "M"
 *   insn=0x0000000000292928 string=0x000000000029292C "`B@"
 *   insn=0x0000000000292928 string=0x00000000002929B0 "h"
 *   insn=0x0000000000292930 string=0x0000000000292934 "`"
 *   insn=0x0000000000292930 string=0x0000000000292944 ""
 *   insn=0x0000000000292938 string=0x000000000029293C "i"
 *   insn=0x000000000029293C string=0x0000000000292940 "`B@"
 *   insn=0x0000000000292944 string=0x0000000000292948 ""
 *   insn=0x0000000000292950 string=0x0000000000292954 "a"
 *   insn=0x000000000029295C string=0x0000000000292960 "h"
 *   insn=0x0000000000292964 string=0x0000000000292968 "`B@"
 *   insn=0x0000000000292964 string=0x000000000029299C "h"
 *   insn=0x000000000029296C string=0x0000000000292970 "`"
 *   insn=0x000000000029296C string=0x0000000000292980 ""
 *   insn=0x0000000000292974 string=0x0000000000292978 "Z"
 *   insn=0x0000000000292978 string=0x000000000029297C "`B@"
 *   insn=0x0000000000292980 string=0x0000000000292984 ""
 *   insn=0x000000000029298C string=0x0000000000292990 "a"A"
 *   insn=0x00000000002929A0 string=0x00000000002929A4 "i"
 *   insn=0x00000000002929B0 string=0x00000000002929B4 "h"
 *   insn=0x00000000002929B4 string=0x00000000002929B8 "`N@"
 *   insn=0x00000000002929BC string=0x00000000002929C0 "`""
 *   insn=0x00000000002929C4 string=0x00000000002929C8 "F"
 *   insn=0x00000000002929C8 string=0x00000000002929CC "`N@"
 *   insn=0x00000000002929CC string=0x00000000002929D0 "`"
 *   insn=0x00000000002929EC string=0x00000000002929F0 "<"
 *   insn=0x00000000002929F0 string=0x00000000002929F4 "`B@"
 *   insn=0x00000000002929F8 string=0x00000000002929FC ""
 *   insn=0x0000000000292A00 string=0x0000000000292A04 "\t"
 *   insn=0x0000000000292A04 string=0x0000000000292A08 "h"
 *   insn=0x0000000000292A08 string=0x0000000000292A0C "i"
 *   insn=0x0000000000292A10 string=0x0000000000292A14 "`"
 *   insn=0x0000000000292A10 string=0x0000000000292AC8 "`~@"
 *   insn=0x0000000000292A14 string=0x0000000000292A18 "a\nA"
 *   insn=0x0000000000292A20 string=0x0000000000292A24 "'"
 *   insn=0x0000000000292A20 string=0x0000000000292A90 "h"
 *   insn=0x0000000000292A24 string=0x0000000000292AC0 "h"
 *   insn=0x0000000000292A28 string=0x0000000000292A2C " ( "
 *   insn=0x0000000000292A2C string=0x0000000000292A30 "`"
 *   insn=0x0000000000292A30 string=0x0000000000292A34 "D"
 *   insn=0x0000000000292A38 string=0x0000000000292A3C "`B@"
 *   insn=0x0000000000292A40 string=0x0000000000292A44 "`"
 *   insn=0x0000000000292A40 string=0x0000000000292A54 ""
 *   insn=0x0000000000292A48 string=0x0000000000292A4C "%"
 *   insn=0x0000000000292A4C string=0x0000000000292A50 "`B@"
 *   insn=0x0000000000292A54 string=0x0000000000292A58 ""
 *   insn=0x0000000000292A5C string=0x0000000000292A60 ""
 *   insn=0x0000000000292A60 string=0x0000000000292A64 "h"
 *   insn=0x0000000000292A7C string=0x0000000000292A80 "A#"
 *   insn=0x0000000000292A90 string=0x0000000000292A94 "h"
 *   insn=0x0000000000292A94 string=0x0000000000292A98 "h~@"
 *   insn=0x0000000000292A9C string=0x0000000000292AA0 "i"
 *   insn=0x0000000000292AA0 string=0x0000000000292AA4 ") "
 *   insn=0x0000000000292AA8 string=0x0000000000292AAC "\tY"
 *   insn=0x0000000000292AB0 string=0x0000000000292AB4 ""
 *   insn=0x0000000000292AB4 string=0x0000000000292AB8 ""
 *   insn=0x0000000000292AC0 string=0x0000000000292AC4 ""
 *   insn=0x0000000000292ACC string=0x0000000000292AD0 "@"
 *   insn=0x0000000000292AD0 string=0x0000000000292AD4 "\t @"
 *   insn=0x0000000000292AD4 string=0x0000000000292AD8 "("
 *   insn=0x0000000000292AD8 string=0x0000000000292ADC " !("
 *   insn=0x0000000000292AD8 string=0x0000000000292AFC ""
 *   insn=0x0000000000292AE0 string=0x0000000000292B10 "h"
 *   insn=0x0000000000292AEC string=0x0000000000000020 "@"
 *   insn=0x0000000000292AFC string=0x0000000000292B00 ""
 *   insn=0x0000000000292B04 string=0x0000000000292B08 " !("
 *   insn=0x0000000000292B14 string=0x0000000000292B18 "h"
 *   insn=0x0000000000292B18 string=0x0000000000292B1C "`N@"
 *   insn=0x0000000000292B20 string=0x0000000000292B24 "`""
 *   insn=0x0000000000292B2C string=0x0000000000292B30 "`N@"
 *   insn=0x0000000000292B30 string=0x0000000000292B34 "`"
 *   insn=0x0000000000292B38 string=0x0000000000292B3C "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AttackComponent::Update(Caver::AttackComponent *this, float a2)
{
  float v3; // s1
  __int64 v4; // x0
  Caver::SoundEffectComponent *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  float v8; // s0
  __int64 v9; // x0
  __int64 v10; // x0
  int v11; // w8
  Caver::CollisionShapeComponent *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  int v16; // w8
  Caver::CollisionShapeComponent *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  float v23; // s9
  int v24; // w8
  Caver::CollisionShapeComponent *v25; // x0

  if ( !*((_BYTE *)this + 256) )
  {
    *((float *)this + 68) = *((float *)this + 68) + a2;
    return;
  }
  v3 = *((float *)this + 67);
  v4 = *((_QWORD *)this + 16);
  *((float *)this + 67) = v3 + a2;
  if ( !v4 )
  {
    Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 112), this);
    v4 = *((_QWORD *)this + 16);
  }
  if ( *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 264LL))(v4) + 12) < *((float *)this + 76) )
  {
    *(_WORD *)((char *)this + 293) = 0;
    v5 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 25);
    if ( v5
      || (Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 184), this),
          (v5 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 25)) != 0) )
    {
      Caver::SoundEffectComponent::Play(v5);
    }
  }
  v6 = *((_QWORD *)this + 16);
  if ( !v6 )
  {
    Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 112), this);
    v6 = *((_QWORD *)this + 16);
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
  v8 = *((float *)this + 70) - *((float *)this + 69);
  *((_DWORD *)this + 76) = *(_DWORD *)(v7 + 12);
  if ( v8 <= 0.001 )
    goto LABEL_31;
  v9 = *((_QWORD *)this + 16);
  if ( !v9 )
  {
    Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 112), this);
    v9 = *((_QWORD *)this + 16);
  }
  if ( *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 264LL))(v9) + 12) <= *((float *)this + 69) )
    goto LABEL_31;
  if ( *((_BYTE *)this + 293) )
  {
    v10 = *((_QWORD *)this + 16);
    if ( !v10 )
    {
      Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 112), this);
      v10 = *((_QWORD *)this + 16);
    }
    if ( *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 264LL))(v10) + 12) >= *((float *)this + 70) )
    {
LABEL_31:
      if ( (float)(*((float *)this + 72) - *((float *)this + 71)) <= 0.001 )
        goto LABEL_67;
      v14 = *((_QWORD *)this + 16);
      if ( !v14 )
      {
        Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 112), this);
        v14 = *((_QWORD *)this + 16);
      }
      if ( *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 264LL))(v14) + 12) <= *((float *)this + 71) )
        goto LABEL_67;
      if ( !*((_BYTE *)this + 294) )
        goto LABEL_32;
      v15 = *((_QWORD *)this + 16);
      if ( !v15 )
      {
        Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 112), this);
        v15 = *((_QWORD *)this + 16);
      }
      if ( *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 264LL))(v15) + 12) >= *((float *)this + 72) )
      {
LABEL_67:
        if ( *((_BYTE *)this + 292) )
        {
          v17 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19);
          if ( v17
            || (Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 136), this),
                (v17 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19)) != 0) )
          {
            Caver::CollisionShapeComponent::SetEnabled(v17);
          }
          *((_BYTE *)this + 292) = 0;
        }
      }
      else
      {
LABEL_32:
        v16 = *((unsigned __int8 *)this + 292);
        *((_BYTE *)this + 294) = 1;
        if ( !v16 )
          goto LABEL_19;
      }
LABEL_39:
      v13 = *((_QWORD *)this + 16);
      if ( v13 )
        goto LABEL_41;
      goto LABEL_40;
    }
  }
  v11 = *((unsigned __int8 *)this + 292);
  *((_BYTE *)this + 293) = 1;
  if ( v11 )
    goto LABEL_39;
LABEL_19:
  v12 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19);
  if ( v12
    || (Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 136), this),
        (v12 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19)) != 0) )
  {
    Caver::CollisionShapeComponent::SetEnabled(v12);
  }
  *((_BYTE *)this + 292) = 1;
  v13 = *((_QWORD *)this + 16);
  if ( !v13 )
  {
LABEL_40:
    Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 112), this);
    v13 = *((_QWORD *)this + 16);
  }
LABEL_41:
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 264LL))(v13) + 44) )
  {
    if ( *((_BYTE *)this + 257) )
      goto LABEL_54;
    if ( *((float *)this + 67) <= *((float *)this + 66) )
      goto LABEL_53;
    goto LABEL_51;
  }
  if ( *((_BYTE *)this + 257) )
    goto LABEL_54;
  v18 = *((_QWORD *)this + 16);
  if ( !v18 )
  {
    Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 112), this);
    v18 = *((_QWORD *)this + 16);
  }
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 264LL))(v18);
  if ( *(_BYTE *)(v19 + 44)
    || (float)((float)(*(float *)(v19 + 40) - *(float *)(v19 + 12))
             / (float)(*(float *)(v19 + 48) * *(float *)(v19 + 52))) < 0.1 )
  {
LABEL_51:
    if ( *((_BYTE *)this + 256) )
    {
      v20 = *((_QWORD *)this + 31);
      *((_BYTE *)this + 257) = 1;
      v21 = *(_QWORD *)(v20 + 16);
      *(_WORD *)(v20 + 44) = 257;
      (*(void (__fastcall **)(__int64, float))(*(_QWORD *)v21 + 48LL))(v21, 0.0);
    }
  }
LABEL_53:
  if ( !*((_BYTE *)this + 257) )
    return;
LABEL_54:
  v22 = *((_QWORD *)this + 31);
  if ( v22 )
  {
    v23 = *(float *)(v22 + 32);
    if ( *(_DWORD *)(v22 + 8) )
    {
      if ( v23 >= 0.001 )
        return;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      if ( v23 >= 0.001 )
        return;
    }
  }
  v24 = *((unsigned __int8 *)this + 292);
  *((_WORD *)this + 128) = 0;
  if ( v24 )
  {
    v25 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19);
    if ( v25
      || (Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 136), this),
          (v25 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19)) != 0) )
    {
      Caver::CollisionShapeComponent::SetEnabled(v25);
    }
    *((_BYTE *)this + 292) = 0;
  }
}

