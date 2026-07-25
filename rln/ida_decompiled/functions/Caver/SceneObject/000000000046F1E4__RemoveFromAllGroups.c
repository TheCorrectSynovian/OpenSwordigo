/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046F1E4
 * Mangled: _ZN5Caver11SceneObject19RemoveFromAllGroupsEb
 * Demangled: Caver::SceneObject::RemoveFromAllGroups(bool)
 *
 * Callers: 2
 *   0x00000000001FD330  Caver::SceneObject::RemoveFromAllGroups(bool)
 *   0x000000000046EE1C  Caver::SceneObject::~SceneObject()
 *
 * Callees: 8
 *   0x00000000001F4630  Caver::Scene::RegisterObjectForWorldBoundsUpdate(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F65B0  Caver::SceneObjectGroup::RemoveObject(Caver::SceneObject *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAA20  Caver::SceneObject::~SceneObject()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000046F51C  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 83
 *   insn=0x000000000046F204 string=0x000000000046F208 "V"
 *   insn=0x000000000046F218 string=0x000000000046F21C "u"
 *   insn=0x000000000046F220 string=0x000000000046F298 "`"
 *   insn=0x000000000046F224 string=0x000000000046F228 ""
 *   insn=0x000000000046F22C string=0x000000000046F230 " "
 *   insn=0x000000000046F23C string=0x000000000046F240 "\t"
 *   insn=0x000000000046F240 string=0x000000000046F244 ")i@"
 *   insn=0x000000000046F244 string=0x000000000046F248 " "
 *   insn=0x000000000046F268 string=0x000000000046F26C ""
 *   insn=0x000000000046F26C string=0x000000000046F270 "i@"
 *   insn=0x000000000046F27C string=0x000000000046F280 "I"
 *   insn=0x000000000046F294 string=0x00000000001F65B0 "0'"
 *   insn=0x000000000046F298 string=0x000000000046F29C " "
 *   insn=0x000000000046F29C string=0x000000000046F420 "h"
 *   insn=0x000000000046F2AC string=0x000000000046F2B0 ""
 *   insn=0x000000000046F2B4 string=0x000000000046F2B8 " @"
 *   insn=0x000000000046F2C8 string=0x000000000046F2CC "i"L"
 *   insn=0x000000000046F2C8 string=0x000000000046F3E4 "`"
 *   insn=0x000000000046F2CC string=0x000000000046F2D0 ""
 *   insn=0x000000000046F2D4 string=0x000000000046F2D8 " "
 *   insn=0x000000000046F2E4 string=0x000000000046F2E8 "\t"
 *   insn=0x000000000046F2E8 string=0x000000000046F2EC ")i@"
 *   insn=0x000000000046F2EC string=0x000000000046F2F0 " "
 *   insn=0x000000000046F2F0 string=0x000000000046F2F4 "_"
 *   insn=0x000000000046F2F8 string=0x000000000046F330 "`"
 *   insn=0x000000000046F300 string=0x000000000046F304 "hb@"
 *   insn=0x000000000046F310 string=0x000000000046F314 ""
 *   insn=0x000000000046F314 string=0x000000000046F318 "i@"
 *   insn=0x000000000046F31C string=0x000000000046F320 "{"
 *   insn=0x000000000046F320 string=0x000000000046F324 "_"
 *   insn=0x000000000046F324 string=0x000000000046F328 "I"
 *   insn=0x000000000046F33C string=0x000000000046F340 "4"
 *   insn=0x000000000046F340 string=0x000000000046F344 "`r@"
 *   insn=0x000000000046F34C string=0x000000000046F350 "!"
 *   insn=0x000000000046F350 string=0x000000000046F354 "  ("
 *   insn=0x000000000046F358 string=0x000000000046F35C "iv@"
 *   insn=0x000000000046F360 string=0x000000000046F364 "\t"
 *   insn=0x000000000046F368 string=0x000000000046F36C "av@"
 *   insn=0x000000000046F370 string=0x000000000046F374 ""8""
 *   insn=0x000000000046F374 string=0x000000000046F378 "B"
 *   insn=0x000000000046F378 string=0x000000000046F37C "@ ("
 *   insn=0x000000000046F37C string=0x000000000046F380 "\t"
 *   insn=0x000000000046F380 string=0x000000000046F384 ")"
 *   insn=0x000000000046F388 string=0x000000000046F38C "\t"
 *   insn=0x000000000046F390 string=0x000000000046F394 "h"
 *   insn=0x000000000046F3A4 string=0x000000000046F3A8 ""
 *   insn=0x000000000046F3B4 string=0x00000000001F4630 "P'"
 *   insn=0x000000000046F3BC string=0x000000000046F3C0 "@"
 *   insn=0x000000000046F3C0 string=0x000000000046F3C4 ""
 *   insn=0x000000000046F3C4 string=0x000000000046F3C8 ""
 *   insn=0x000000000046F3CC string=0x000000000046F3D0 ""
 *   insn=0x000000000046F3D0 string=0x000000000046F3D4 ""
 *   insn=0x000000000046F3EC string=0x000000000046F3F0 "L"
 *   insn=0x000000000046F3F4 string=0x000000000046F3F8 "`"
 *   insn=0x000000000046F3F8 string=0x000000000046F3FC "\t"
 *   insn=0x000000000046F3F8 string=0x000000000046F404 "@"
 *   insn=0x000000000046F404 string=0x000000000046F408 ""
 *   insn=0x000000000046F408 string=0x000000000046F40C ""
 *   insn=0x000000000046F410 string=0x000000000046F414 ""
 *   insn=0x000000000046F414 string=0x000000000046F418 ""
 *   insn=0x000000000046F42C string=0x000000000046F430 "+"
 *   insn=0x000000000046F430 string=0x000000000046F434 ""
 *   insn=0x000000000046F438 string=0x000000000046F43C ""
 *   insn=0x000000000046F440 string=0x000000000046F444 "["
 *   insn=0x000000000046F448 string=0x000000000046F44C "@"
 *   insn=0x000000000046F44C string=0x000000000046F450 "h"
 *   insn=0x000000000046F454 string=0x000000000046F458 ""
 *   insn=0x000000000046F458 string=0x000000000046F45C ""
 *   insn=0x000000000046F460 string=0x000000000046F464 "S"
 *   insn=0x000000000046F47C string=0x000000000046F480 "A"
 *   insn=0x000000000046F4A8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046F4B0 string=0x000000000046F4B4 "("
 *   insn=0x000000000046F4B4 string=0x000000000046F4B8 "\t\t@"
 *   insn=0x000000000046F4B8 string=0x000000000046F4BC ")"
 *   insn=0x000000000046F4BC string=0x000000000046F4C0 "\t\t"
 *   insn=0x000000000046F4C4 string=0x000000000046F4C8 "\t"
 *   insn=0x000000000046F4C8 string=0x000000000046F4CC ")"
 *   insn=0x000000000046F4D0 string=0x000000000046F4D4 " "
 *   insn=0x000000000046F4F0 string=0x000000000046F4F4 "K-"
 *   insn=0x000000000046F4F4 string=0x00000000001FAA20 "0'"
 *   insn=0x000000000046F500 string=0x000000000046F504 "k"
 *   insn=0x000000000046F504 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000046F50C string=0x000000000046F510 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::RemoveFromAllGroups(Caver::SceneObject *this, char a2)
{
  __int64 v4; // x21
  _QWORD *v5; // x9
  __int64 v6; // x8
  unsigned __int64 v7; // x23
  char v8; // w0
  unsigned __int64 v9; // x24
  __int64 v10; // x0
  char v11; // w0
  __int64 result; // x0
  __int64 v13; // x23
  __int64 v14; // x21
  _QWORD *v15; // x9
  __int64 v16; // x8
  unsigned __int64 v17; // x26
  char v18; // w0
  unsigned __int64 v19; // x27
  __int64 v20; // x0
  char v21; // w0
  float v22; // s0
  int v23; // w9
  _DWORD *v24; // x8
  int v25; // w8
  int v27; // w8
  int *v28; // x8
  __int64 v29; // x20

  _ReadStatusReg(TPIDR_EL0);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = *(_QWORD **)(v4 + 192);
    v6 = *(_QWORD *)(v4 + 200) - (_QWORD)v5;
    if ( v6 )
    {
      v7 = v6 >> 3;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, Caver::SceneObject *))(*(_QWORD *)*v5 + 208LL))(*v5, 4, this);
      if ( v7 >= 2 && (v8 & 1) == 0 )
      {
        v9 = 1;
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 8 * v9);
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, Caver::SceneObject *))(*(_QWORD *)v10 + 208LL))(
                  v10,
                  4,
                  this);
          ++v9;
        }
        while ( v7 > v9 && (v11 & 1) == 0 );
      }
    }
    *((_QWORD *)this + 6) = 0;
    Caver::SceneObjectGroup::RemoveObject(*(Caver::SceneObjectGroup **)(v4 + 56), this);
  }
  result = *((_QWORD *)this + 7);
  if ( !result )
    goto LABEL_38;
  v13 = *(int *)(result + 56);
  if ( (int)v13 <= 0 )
  {
    *((_QWORD *)this + 7) = 0;
    goto LABEL_36;
  }
  do
  {
    v14 = *(_QWORD *)(*(_QWORD *)(result + 64) + 8 * (v13 - 1));
    if ( (Caver::SceneObject *)v14 != this )
    {
      v15 = (_QWORD *)*((_QWORD *)this + 24);
      v16 = *((_QWORD *)this + 25) - (_QWORD)v15;
      if ( v16 )
      {
        v17 = v16 >> 3;
        v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v15 + 208LL))(*v15, 4, v14);
        if ( v17 >= 2 && (v18 & 1) == 0 )
        {
          v19 = 1;
          do
          {
            v20 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v19);
            v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 208LL))(v20, 4, v14);
            ++v19;
          }
          while ( v17 > v19 && (v21 & 1) == 0 );
        }
        result = *((_QWORD *)this + 7);
      }
      *(_QWORD *)(v14 + 48) = 0;
      Caver::SceneObjectGroup::RemoveObject((Caver::SceneObjectGroup *)result, (Caver::SceneObject *)v14);
      if ( (a2 & 1) != 0 )
      {
        v22 = *((float *)this + 28);
        if ( fabsf(v22 - *(float *)(v14 + 112)) <= 0.0001 )
        {
          v24 = (_DWORD *)(v14 + 116);
          if ( fabsf(*((float *)this + 29) - *(float *)(v14 + 116)) <= 0.0001 )
          {
LABEL_30:
            *(_BYTE *)(v14 + 232) = 1;
            goto LABEL_31;
          }
          v23 = *((_DWORD *)this + 29);
        }
        else
        {
          v23 = *((_DWORD *)this + 29);
          v24 = (_DWORD *)(v14 + 116);
        }
        *(float *)(v14 + 112) = v22;
        *v24 = v23;
        if ( !*(_BYTE *)(v14 + 180) )
        {
          if ( *(_QWORD *)(v14 + 32) )
          {
            ++*(_DWORD *)(v14 + 8);
            Caver::Scene::RegisterObjectForWorldBoundsUpdate();
            if ( v14 )
            {
              v25 = *(_DWORD *)(v14 + 8) - 1;
              *(_DWORD *)(v14 + 8) = v25;
              if ( !v25 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
            }
          }
          *(_BYTE *)(v14 + 180) = 1;
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    result = *((_QWORD *)this + 7);
  }
  while ( v13-- > 1 );
  *((_QWORD *)this + 7) = 0;
  if ( !result )
    goto LABEL_38;
LABEL_36:
  v27 = *(_DWORD *)(result + 8) - 1;
  *(_DWORD *)(result + 8) = v27;
  if ( !v27 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
LABEL_38:
  v28 = (int *)*((_QWORD *)this + 5);
  if ( v28 )
  {
    v29 = *v28;
    if ( (int)v29 >= 1 )
    {
      result = Caver::SceneObjectGroup::RemoveObject(
                 *(Caver::SceneObjectGroup **)(*((_QWORD *)v28 + 1) + 8 * v29 - 8),
                 this);
      if ( (_DWORD)v29 != 1 )
      {
        do
          result = Caver::SceneObjectGroup::RemoveObject(
                     *(Caver::SceneObjectGroup **)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 8 * v29-- - 16),
                     this);
        while ( v29 > 1 );
      }
    }
  }
  return result;
}

