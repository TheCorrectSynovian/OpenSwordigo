/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029F8EC
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent6UpdateEf
 * Demangled: Caver::SnappingMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FEBE0  Caver::SnappingMonsterControllerComponent::Update(float)
 *
 * Callees: 8
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB950  Caver::SnappingMonsterControllerComponent::Attack(void)
 *   0x00000000001FBEF0  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *   0x00000000001FEBE0  Caver::SnappingMonsterControllerComponent::Update(float)
 *   0x0000000000202030  Caver::ShapeComponent::ContainsWorldPoint(Caver::Vector2 const&)
 *   0x0000000000202F50  Caver::SnappingMonsterControllerComponent::StopAttacking(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 83
 *   insn=0x000000000029F900 string=0x000000000029F904 "hB@"
 *   insn=0x000000000029F904 string=0x000000000029F908 ""
 *   insn=0x000000000029F90C string=0x000000000029F910 "`"
 *   insn=0x000000000029F90C string=0x000000000029F924 "uN@"
 *   insn=0x000000000029F914 string=0x000000000029F918 "r`"
 *   insn=0x000000000029F918 string=0x000000000029F91C "hB@"
 *   insn=0x000000000029F918 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029F928 string=0x000000000029F92C "`""
 *   insn=0x000000000029F930 string=0x000000000029F934 "k`"
 *   insn=0x000000000029F934 string=0x000000000029F938 "uN@"
 *   insn=0x000000000029F944 string=0x000000000029F948 "@"
 *   insn=0x000000000029F944 string=0x000000000029F958 "`"
 *   insn=0x000000000029F94C string=0x000000000029F950 ""
 *   insn=0x000000000029F94C string=0x000000000029FA04 "h"E9H"
 *   insn=0x000000000029F950 string=0x000000000029F954 "*"
 *   insn=0x000000000029F954 string=0x000000000029F9FC ""
 *   insn=0x000000000029F95C string=0x000000000029F960 "`"
 *   insn=0x000000000029F95C string=0x000000000029F974 ""
 *   insn=0x000000000029F964 string=0x000000000029F968 "^`"
 *   insn=0x000000000029F968 string=0x000000000029F96C "`"
 *   insn=0x000000000029F974 string=0x000000000029F978 ""
 *   insn=0x000000000029F98C string=0x000000000029F990 "\t"
 *   insn=0x000000000029F994 string=0x000000000029F998 ""
 *   insn=0x000000000029F9C0 string=0x000000000029F9C4 "@"
 *   insn=0x000000000029F9C0 string=0x000000000029F9E0 "6"
 *   insn=0x000000000029F9C4 string=0x000000000029F9C8 ""
 *   insn=0x000000000029F9C8 string=0x000000000029F9CC ""
 *   insn=0x000000000029F9D0 string=0x000000000029F9D4 ""
 *   insn=0x000000000029F9D4 string=0x000000000029F9D8 ""
 *   insn=0x000000000029F9E4 string=0x000000000029F9E8 ""
 *   insn=0x000000000029FA04 string=0x000000000029FA08 "H"
 *   insn=0x000000000029FA08 string=0x000000000029FA0C "`~@"
 *   insn=0x000000000029FA08 string=0x000000000029FA50 "`NA"
 *   insn=0x000000000029FA10 string=0x000000000029FA14 "t"
 *   insn=0x000000000029FA10 string=0x000000000029FA2C ""
 *   insn=0x000000000029FA1C string=0x000000000029FA20 "0`"
 *   insn=0x000000000029FA20 string=0x000000000029FA24 "`~@"
 *   insn=0x000000000029FA2C string=0x000000000029FA30 ""
 *   insn=0x000000000029FA38 string=0x000000000029FA3C "`~@"
 *   insn=0x000000000029FA3C string=0x000000000029FA40 "\t@"
 *   insn=0x000000000029FA44 string=0x000000000029FA48 "t"
 *   insn=0x000000000029FA44 string=0x000000000029FAF8 ""
 *   insn=0x000000000029FA48 string=0x000000000029FA4C "'"
 *   insn=0x000000000029FA5C string=0x000000000029FA60 "`N"
 *   insn=0x000000000029FA60 string=0x000000000029FA64 ""
 *   insn=0x000000000029FA64 string=0x000000000029FB24 "`B@"
 *   insn=0x000000000029FA68 string=0x000000000029FA6C "!q"
 *   insn=0x000000000029FA6C string=0x00000000001FBEF0 "0'"
 *   insn=0x000000000029FA78 string=0x000000000029FA7C ""
 *   insn=0x000000000029FA80 string=0x000000000029FA84 "`"
 *   insn=0x000000000029FA88 string=0x000000000029FA8C "`b"
 *   insn=0x000000000029FA94 string=0x000000000029FA98 "`"
 *   insn=0x000000000029FAA0 string=0x000000000029FAA4 "c"
 *   insn=0x000000000029FAA4 string=0x000000000029FAA8 "`"
 *   insn=0x000000000029FAB0 string=0x00000000001FB950 "0'"
 *   insn=0x000000000029FAB4 string=0x000000000029FAB8 ""
 *   insn=0x000000000029FABC string=0x000000000029FAC0 "!"
 *   insn=0x000000000029FAC8 string=0x000000000029FACC ""
 *   insn=0x000000000029FAD0 string=0x000000000029FAD4 "`B@"
 *   insn=0x000000000029FAD4 string=0x000000000029FAD8 " "
 *   insn=0x000000000029FAD8 string=0x000000000029FB3C ""
 *   insn=0x000000000029FADC string=0x000000000029FB2C "`"
 *   insn=0x000000000029FAE0 string=0x000000000029FAE4 "\t"
 *   insn=0x000000000029FAF0 string=0x000000000029FAF4 "`~@"
 *   insn=0x000000000029FAF8 string=0x000000000029FAFC ""
 *   insn=0x000000000029FB00 string=0x000000000029FB04 "H"
 *   insn=0x000000000029FB04 string=0x0000000000587828 "33s?"
 *   insn=0x000000000029FB10 string=0x000000000029FB14 " ! "
 *   insn=0x000000000029FB14 string=0x000000000029FB18 "m"
 *   insn=0x000000000029FB34 string=0x000000000029FB38 "`B@"
 *   insn=0x000000000029FB40 string=0x000000000029FB44 "e@"
 *   insn=0x000000000029FB48 string=0x000000000029FB4C "`N@"
 *   insn=0x000000000029FB50 string=0x000000000029FB54 "`""
 *   insn=0x000000000029FB50 string=0x000000000029FB64 ""
 *   insn=0x000000000029FB5C string=0x000000000029FB60 "`N@"
 *   insn=0x000000000029FB7C string=0x000000000029FB80 " "
 *   insn=0x000000000029FB84 string=0x000000000029FB88 "v"
 *   insn=0x000000000029FB8C string=0x000000000029FB90 ""
 *   insn=0x000000000029FB9C string=0x000000000029FBA0 ""
 *   insn=0x000000000029FBA8 string=0x000000000029FBAC "\n"
 *   insn=0x000000000029FBB4 string=0x000000000029FBB8 ""
 *   insn=0x000000000029FBC4 string=0x000000000029FBC8 ""
 *   insn=0x000000000029FBD4 string=0x000000000029FBD8 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SnappingMonsterControllerComponent::Update(
        Caver::SnappingMonsterControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x20
  char v11; // w22
  _DWORD *v12; // x0
  int v13; // w8
  int v14; // w8
  __int64 v15; // x0
  Caver::ComponentOutletBase *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0
  float v19; // s9
  float v20; // s0
  __int64 NearestEnemy; // x0
  _DWORD *v22; // x20
  char v23; // w0
  int v24; // w8
  __int64 v25; // x0
  __int64 v26; // x0

  if ( *((_QWORD *)this + 16)
    || (result = Caver::ComponentOutletBase::Connect(
                   (Caver::SnappingMonsterControllerComponent *)((char *)this + 112),
                   this),
        *((_QWORD *)this + 16)) )
  {
    v5 = *((_QWORD *)this + 19);
    if ( v5
      || (result = Caver::ComponentOutletBase::Connect(
                     (Caver::SnappingMonsterControllerComponent *)((char *)this + 136),
                     this),
          (v5 = *((_QWORD *)this + 19)) != 0) )
    {
      v6 = *(_QWORD *)(v5 + 160);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 8) )
          goto LABEL_22;
        v7 = *(_QWORD *)v6;
        goto LABEL_21;
      }
      v8 = *((_QWORD *)this + 34);
      if ( v8
        || (Caver::ComponentOutletBase::Connect((Caver::SnappingMonsterControllerComponent *)((char *)this + 256), this),
            (v8 = *((_QWORD *)this + 34)) != 0) )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 264LL))(v8);
        v10 = v9;
        if ( v9 )
        {
          v11 = 0;
          *(_DWORD *)(v9 + 8) += 2;
          goto LABEL_15;
        }
      }
      else
      {
        v10 = 0;
      }
      v11 = 1;
LABEL_15:
      v12 = *(_DWORD **)(v5 + 160);
      *(_QWORD *)(v5 + 160) = v10;
      if ( v12 )
      {
        v13 = v12[2] - 1;
        v12[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
      }
      if ( (v11 & 1) != 0 || (v14 = *(_DWORD *)(v10 + 8) - 1, (*(_DWORD *)(v10 + 8) = v14) != 0) )
      {
LABEL_22:
        if ( !*((_BYTE *)this + 328) )
        {
          v20 = *((float *)this + 83) + *(float *)&a2;
          *((float *)this + 83) = v20;
          if ( v20 > 2.0 )
          {
            NearestEnemy = Caver::MonsterControllerComponent::FindNearestEnemy(this);
            v22 = (_DWORD *)NearestEnemy;
            if ( NearestEnemy )
            {
              ++*(_DWORD *)(NearestEnemy + 8);
              if ( *((_QWORD *)this + 37)
                || (Caver::ComponentOutletBase::Connect(
                      (Caver::SnappingMonsterControllerComponent *)((char *)this + 280),
                      this),
                    *((_QWORD *)this + 37)) )
              {
                Caver::ShapeComponent::ContainsWorldPoint();
                if ( (v23 & 1) != 0 )
                  Caver::SnappingMonsterControllerComponent::Attack(this);
              }
              v24 = v22[2] - 1;
              v22[2] = v24;
              if ( !v24 )
              {
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
                v25 = *((_QWORD *)this + 16);
                if ( !v25 )
                  goto LABEL_41;
                goto LABEL_42;
              }
            }
          }
LABEL_40:
          v25 = *((_QWORD *)this + 16);
          if ( !v25 )
          {
LABEL_41:
            Caver::ComponentOutletBase::Connect((Caver::SnappingMonsterControllerComponent *)((char *)this + 112), this);
            v25 = *((_QWORD *)this + 16);
          }
LABEL_42:
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v25 + 200LL))(v25, a2);
          v26 = *((_QWORD *)this + 19);
          if ( !v26 )
          {
            Caver::ComponentOutletBase::Connect((Caver::SnappingMonsterControllerComponent *)((char *)this + 136), this);
            v26 = *((_QWORD *)this + 19);
          }
          return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v26 + 200LL))(v26, a2);
        }
        v15 = *((_QWORD *)this + 31);
        if ( v15
          || (v16 = (Caver::SnappingMonsterControllerComponent *)((char *)this + 232),
              Caver::ComponentOutletBase::Connect(
                (Caver::SnappingMonsterControllerComponent *)((char *)this + 232),
                this),
              (v15 = *((_QWORD *)this + 31)) != 0) )
        {
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 264LL))(v15);
          v18 = *((_QWORD *)this + 31);
          v19 = *(float *)(v17 + 12);
          if ( v18 )
            goto LABEL_38;
          v16 = (Caver::SnappingMonsterControllerComponent *)((char *)this + 232);
        }
        else
        {
          v19 = 0.0;
        }
        Caver::ComponentOutletBase::Connect(v16, this);
        v18 = *((_QWORD *)this + 31);
LABEL_38:
        if ( v19 > (float)(*(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 264LL))(v18) + 40) * 0.95) )
          Caver::SnappingMonsterControllerComponent::StopAttacking(this);
        goto LABEL_40;
      }
      v7 = *(_QWORD *)v10;
      v6 = v10;
LABEL_21:
      (*(void (__fastcall **)(__int64))(v7 + 8))(v6);
      goto LABEL_22;
    }
  }
  return result;
}

