/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025E040
 * Mangled: _ZN5Caver23CharControllerComponent4HurtEv
 * Demangled: Caver::CharControllerComponent::Hurt(void)
 *
 * Callers: 1
 *   0x00000000001F8ED0  Caver::CharControllerComponent::Hurt(void)
 *
 * Callees: 13
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCBD0  Caver::CharControllerComponent::DropQuickly(void)
 *   0x00000000001FDAC0  Caver::CharAnimControllerComponent::StopAction(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x00000000002023E0  Caver::SwingableWeaponControllerComponent::StopSwing(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000025E468  Caver::CharControllerComponent::Die(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 150
 *   insn=0x000000000025E050 string=0x000000000025E054 "U"
 *   insn=0x000000000025E060 string=0x000000000025E064 "h"
 *   insn=0x000000000025E064 string=0x000000000025E068 "h"
 *   insn=0x000000000025E068 string=0x000000000025E074 "h"
 *   insn=0x000000000025E070 string=0x00000000001FCBD0 "0'"
 *   insn=0x000000000025E078 string=0x000000000025E07C "hN@"
 *   insn=0x000000000025E078 string=0x000000000025E0D4 ""
 *   insn=0x000000000025E080 string=0x000000000025E084 "`""
 *   insn=0x000000000025E080 string=0x000000000025E098 "\t\t@"
 *   insn=0x000000000025E08C string=0x000000000025E090 "hN@"
 *   insn=0x000000000025E08C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025E094 string=0x000000000025E0A4 "`"
 *   insn=0x000000000025E098 string=0x000000000025E09C ")"
 *   insn=0x000000000025E09C string=0x000000000025E0A0 "\t\t"
 *   insn=0x000000000025E0A4 string=0x000000000025E0A8 "h"
 *   insn=0x000000000025E0A8 string=0x000000000025E0AC " "
 *   insn=0x000000000025E0AC string=0x000000000025E0B0 "\t@"
 *   insn=0x000000000025E0AC string=0x000000000025E0D0 ""
 *   insn=0x000000000025E0B0 string=0x000000000025E0B4 ")"
 *   insn=0x000000000025E0B4 string=0x000000000025E0B8 "\t"
 *   insn=0x000000000025E0BC string=0x000000000025E0C0 ""
 *   insn=0x000000000025E0C0 string=0x000000000025E0C4 ""
 *   insn=0x000000000025E0C8 string=0x000000000025E0CC "h"
 *   insn=0x000000000025E0D0 string=0x000000000025E150 "hRB"
 *   insn=0x000000000025E0D8 string=0x000000000025E0DC ")"
 *   insn=0x000000000025E0DC string=0x000000000058493C "fff?"
 *   insn=0x000000000025E0E0 string=0x000000000025E0E4 ""=I"
 *   insn=0x000000000025E0EC string=0x000000000025E0F0 "("
 *   insn=0x000000000025E0F0 string=0x0000000000583944 "\n"
 *   insn=0x000000000025E0FC string=0x000000000025E100 "a$"
 *   insn=0x000000000025E108 string=0x000000000025E10C "-"
 *   insn=0x000000000025E10C string=0x000000000025E110 "`"
 *   insn=0x000000000025E114 string=0x000000000025E118 "`"
 *   insn=0x000000000025E11C string=0x000000000025E120 "pf"
 *   insn=0x000000000025E120 string=0x000000000025E124 "`"
 *   insn=0x000000000025E124 string=0x000000000025E128 "@"
 *   insn=0x000000000025E128 string=0x000000000025E130 "`"
 *   insn=0x000000000025E134 string=0x000000000025E138 "`b"
 *   insn=0x000000000025E13C string=0x000000000025E140 "hf"
 *   insn=0x000000000025E140 string=0x000000000025E144 "`"
 *   insn=0x000000000025E144 string=0x000000000025E148 "@"
 *   insn=0x000000000025E150 string=0x000000000025E154 "H"
 *   insn=0x000000000025E154 string=0x000000000025E15C "u"
 *   insn=0x000000000025E15C string=0x00000000001FDF30 "0'"
 *   insn=0x000000000025E160 string=0x000000000025E164 "A"
 *   insn=0x000000000025E164 string=0x0000000000587B24 "hiro_hurt"
 *   insn=0x000000000025E184 string=0x000000000025E188 "n\"
 *   insn=0x000000000025E188 string=0x00000000001F5340 "P'"
 *   insn=0x000000000025E190 string=0x000000000025E194 "@"
 *   insn=0x000000000025E194 string=0x000000000025E198 ""
 *   insn=0x000000000025E198 string=0x000000000025E19C ""
 *   insn=0x000000000025E1A0 string=0x000000000025E1A4 ""
 *   insn=0x000000000025E1A4 string=0x000000000025E1A8 ""
 *   insn=0x000000000025E1B0 string=0x000000000025E1B4 ")$"
 *   insn=0x000000000025E1B4 string=0x000000000025E1B8 ")"
 *   insn=0x000000000025E1C4 string=0x000000000025E1C8 "`"
 *   insn=0x000000000025E1C4 string=0x000000000025E364 ")$"
 *   insn=0x000000000025E1CC string=0x000000000025E1D0 "`b"
 *   insn=0x000000000025E1CC string=0x000000000025E1E4 ""
 *   insn=0x000000000025E1D4 string=0x000000000025E1D8 "Bf"
 *   insn=0x000000000025E1D8 string=0x000000000025E1DC "`"
 *   insn=0x000000000025E1DC string=0x000000000025E1E0 "`"
 *   insn=0x000000000025E1E4 string=0x000000000025E1E8 ""
 *   insn=0x000000000025E1F0 string=0x000000000025E1F4 "`"
 *   insn=0x000000000025E1F8 string=0x000000000025E1FC "1~"
 *   insn=0x000000000025E1F8 string=0x000000000025E2B0 "`N@"
 *   insn=0x000000000025E1FC string=0x000000000025E200 "t"
 *   insn=0x000000000025E1FC string=0x00000000001FDAC0 "0'"
 *   insn=0x000000000025E200 string=0x000000000025E204 "T"
 *   insn=0x000000000025E204 string=0x000000000025E30C "tN@"
 *   insn=0x000000000025E208 string=0x000000000025E20C "`"
 *   insn=0x000000000025E214 string=0x000000000025E218 "`b"
 *   insn=0x000000000025E214 string=0x000000000025E228 ""
 *   insn=0x000000000025E21C string=0x000000000025E220 "0f"
 *   insn=0x000000000025E220 string=0x000000000025E224 "`"
 *   insn=0x000000000025E228 string=0x000000000025E22C ""
 *   insn=0x000000000025E238 string=0x000000000025E23C "@"
 *   insn=0x000000000025E238 string=0x000000000025E248 "("
 *   insn=0x000000000025E23C string=0x000000000025E240 ""
 *   insn=0x000000000025E240 string=0x000000000025E244 ""
 *   insn=0x000000000025E248 string=0x0000000000583C38 "\n"
 *   insn=0x000000000025E260 string=0x000000000025E264 "@"
 *   insn=0x000000000025E264 string=0x000000000025E268 ""
 *   insn=0x000000000025E268 string=0x000000000025E26C ""
 *   insn=0x000000000025E270 string=0x000000000025E274 ""
 *   insn=0x000000000025E274 string=0x000000000025E278 ""
 *   insn=0x000000000025E280 string=0x000000000025E288 "h"
 *   insn=0x000000000025E2B4 string=0x000000000025E2B8 "`""
 *   insn=0x000000000025E2B4 string=0x000000000025E2CC "@"
 *   insn=0x000000000025E2BC string=0x000000000025E2C0 "f"
 *   insn=0x000000000025E2C0 string=0x000000000025E2C4 "`N@"
 *   insn=0x000000000025E2C8 string=0x000000000025E2D8 "h"
 *   insn=0x000000000025E2CC string=0x000000000025E2D0 ""
 *   insn=0x000000000025E2D0 string=0x000000000025E2D4 ""
 *   insn=0x000000000025E2D8 string=0x000000000025E2DC "`"
 *   insn=0x000000000025E2E0 string=0x000000000025E2E4 "\t\t@"
 *   insn=0x000000000025E2E4 string=0x000000000025E2E8 ")"
 *   insn=0x000000000025E2E8 string=0x000000000025E2EC "\t\t"
 *   insn=0x000000000025E2EC string=0x000000000025E2F0 "a"
 *   insn=0x000000000025E2F0 string=0x000000000025E2F4 "\t"
 *   insn=0x000000000025E2F8 string=0x000000000025E2FC ")"
 *   insn=0x000000000025E2FC string=0x000000000025E300 " "
 *   insn=0x000000000025E300 string=0x000000000025E304 "`"
 *   insn=0x000000000025E310 string=0x000000000025E314 "`""
 *   insn=0x000000000025E31C string=0x000000000025E320 "tN@"
 *   insn=0x000000000025E324 string=0x000000000025E334 "`"
 *   insn=0x000000000025E328 string=0x000000000025E32C ""
 *   insn=0x000000000025E334 string=0x000000000025E338 "t"
 *   insn=0x000000000025E338 string=0x000000000025E33C "`"
 *   insn=0x000000000025E33C string=0x000000000025E340 "@"
 *   insn=0x000000000025E340 string=0x000000000025E344 ""
 *   insn=0x000000000025E344 string=0x000000000025E348 ""
 *   insn=0x000000000025E34C string=0x000000000025E350 ""
 *   insn=0x000000000025E350 string=0x000000000025E354 ""
 *   insn=0x000000000025E358 string=0x000000000025E35C "t"
 *   insn=0x000000000025E364 string=0x000000000025E368 ")=G"
 *   insn=0x000000000025E368 string=0x000000000025E36C "!"
 *   insn=0x000000000025E370 string=0x000000000025E374 "\t"
 *   insn=0x000000000025E370 string=0x000000000025E388 "\t"
 *   insn=0x000000000025E374 string=0x000000000025E378 "*"
 *   insn=0x000000000025E378 string=0x000000000025E37C "\n"
 *   insn=0x000000000025E384 string=0x000000000025E394 "?"
 *   insn=0x000000000025E388 string=0x000000000025E38C "*"
 *   insn=0x000000000025E38C string=0x000000000025E390 "\n"
 *   insn=0x000000000025E3A0 string=0x000000000025E3A4 "`"
 *   insn=0x000000000025E3B0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000025E3B8 string=0x000000000025E3BC "("
 *   insn=0x000000000025E3BC string=0x000000000025E3C0 "\t\t@"
 *   insn=0x000000000025E3C0 string=0x000000000025E3C4 ")"
 *   insn=0x000000000025E3C4 string=0x000000000025E3C8 "\t\t"
 *   insn=0x000000000025E3CC string=0x000000000025E3D0 "\t"
 *   insn=0x000000000025E3D0 string=0x000000000025E3D4 ")"
 *   insn=0x000000000025E3D8 string=0x000000000025E3DC " "
 *   insn=0x000000000025E3DC string=0x000000000025E3E0 " "
 *   insn=0x000000000025E3EC string=0x000000000025E3F0 "5"
 *   insn=0x000000000025E3F4 string=0x000000000025E3F8 "*$"
 *   insn=0x000000000025E3F8 string=0x000000000025E3FC "J"
 *   insn=0x000000000025E400 string=0x000000000025E404 "(a"
 *   insn=0x000000000025E40C string=0x000000000025E410 "*$"
 *   insn=0x000000000025E410 string=0x000000000025E414 "J=G"
 *   insn=0x000000000025E414 string=0x000000000025E418 ")!"
 *   insn=0x000000000025E41C string=0x000000000025E420 "*"
 *   insn=0x000000000025E41C string=0x000000000025E44C "*"
 *   insn=0x000000000025E420 string=0x000000000025E424 "K"
 *   insn=0x000000000025E424 string=0x000000000025E428 "+"
 *   insn=0x000000000025E42C string=0x000000000025E430 "_"
 *   insn=0x000000000025E430 string=0x000000000025E434 "l"
 *   insn=0x000000000025E44C string=0x000000000025E450 "K"
 *   insn=0x000000000025E450 string=0x000000000025E454 "+"
 *   insn=0x000000000025E454 string=0x000000000025E458 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::Hurt(Caver::CharControllerComponent *this)
{
  Caver::CharControllerComponent *v1; // x19
  __int64 v2; // x8
  int v3; // w9
  float *v4; // x8
  Caver::SwingableWeaponControllerComponent *v5; // x0
  __int64 v6; // x0
  int v7; // w8
  void *v8; // x0
  __int64 result; // x0
  Caver::CharAnimControllerComponent *v10; // x0
  _DWORD *v11; // x20
  __int64 v12; // x0
  void (__fastcall *v13)(_DWORD *, __int64 *, float); // x22
  __int64 v14; // x0
  int v15; // w8
  _DWORD *v16; // x8
  int v17; // w9
  _DWORD *v18; // x0
  int v19; // w8
  unsigned int *v20; // x8
  int v21; // w9
  __int64 v22; // [xsp+10h] [xbp-40h] BYREF
  __int64 v23; // [xsp+18h] [xbp-38h]
  __int64 v24; // [xsp+28h] [xbp-28h]

  v1 = this;
  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_DWORD *)this + 180) )
    Caver::CharControllerComponent::DropQuickly(this);
  v2 = *((_QWORD *)v1 + 50);
  if ( v2 )
    goto LABEL_11;
  v2 = *((_QWORD *)v1 + 19);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 136), v1),
        (v2 = *((_QWORD *)v1 + 19)) != 0) )
  {
    ++*(_DWORD *)(v2 + 8);
  }
  this = (Caver::CharControllerComponent *)*((_QWORD *)v1 + 50);
  *((_QWORD *)v1 + 50) = v2;
  if ( this )
  {
    v3 = *((_DWORD *)this + 2) - 1;
    *((_DWORD *)this + 2) = v3;
    if ( !v3 )
    {
      this = (Caver::CharControllerComponent *)(*(__int64 (__fastcall **)(Caver::CharControllerComponent *))(*(_QWORD *)this + 8LL))(this);
      v2 = *((_QWORD *)v1 + 50);
    }
  }
  if ( v2 )
  {
LABEL_11:
    v4 = *(float **)(v2 + 368);
    if ( v4 && (float)((float)((float)(v4[10] * 0.9) - v4[3]) * (float)(v4[12] * v4[13])) > 0.01 )
    {
      v5 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)v1 + 56);
      if ( v5
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 432), v1),
            (v5 = (Caver::SwingableWeaponControllerComponent *)*((_QWORD *)v1 + 56)) != 0) )
      {
        Caver::SwingableWeaponControllerComponent::StopSwing(v5);
      }
      this = (Caver::CharControllerComponent *)*((_QWORD *)v1 + 53);
      if ( this
        || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 408), v1),
            (this = (Caver::CharControllerComponent *)*((_QWORD *)v1 + 53)) != 0) )
      {
        this = (Caver::CharControllerComponent *)Caver::SwingableWeaponControllerComponent::StopSwing(this);
      }
    }
  }
  if ( *((_DWORD *)v1 + 148) )
    *((_BYTE *)v1 + 588) = 0;
  Caver::AudioSystem::sharedSystem(this);
  sub_566BB8((int)&v22, "hiro_hurt");
  Caver::AudioSystem::PlaySoundEffectWithName();
  v6 = v23;
  if ( v23 )
  {
    v7 = *(_DWORD *)(v23 + 8) - 1;
    *(_DWORD *)(v23 + 8) = v7;
    if ( !v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) == &qword_6FD2E0 )
    goto LABEL_25;
  v20 = (unsigned int *)(v22 - 8);
  if ( &pthread_create )
  {
    do
      v21 = __ldaxr(v20);
    while ( __stlxr(v21 - 1, v20) );
  }
  else
  {
    v21 = (*v20)--;
  }
  if ( v21 > 0 )
  {
LABEL_25:
    result = *((_QWORD *)v1 + 37);
    if ( !result )
      goto LABEL_26;
  }
  else
  {
    operator delete(v8);
    result = *((_QWORD *)v1 + 37);
    if ( !result )
    {
LABEL_26:
      Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 280), v1);
      result = *((_QWORD *)v1 + 37);
      if ( !result )
        return result;
    }
  }
  *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 264LL))(result) + 12) = 0;
  v10 = (Caver::CharAnimControllerComponent *)*((_QWORD *)v1 + 50);
  if ( !v10 )
  {
    v10 = (Caver::CharAnimControllerComponent *)*((_QWORD *)v1 + 19);
    if ( v10
      || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 136), v1),
          (v10 = (Caver::CharAnimControllerComponent *)*((_QWORD *)v1 + 19)) != 0) )
    {
      ++*((_DWORD *)v10 + 2);
    }
    v16 = (_DWORD *)*((_QWORD *)v1 + 50);
    *((_QWORD *)v1 + 50) = v10;
    if ( v16 )
    {
      v17 = v16[2] - 1;
      v16[2] = v17;
      if ( !v17 )
      {
        (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v16 + 8LL))(v16, v16);
        v10 = (Caver::CharAnimControllerComponent *)*((_QWORD *)v1 + 50);
      }
    }
  }
  Caver::CharAnimControllerComponent::StopAction(v10);
  v11 = (_DWORD *)*((_QWORD *)v1 + 50);
  if ( !v11 )
  {
    v11 = (_DWORD *)*((_QWORD *)v1 + 19);
    if ( v11
      || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 136), v1),
          (v11 = (_DWORD *)*((_QWORD *)v1 + 19)) != 0) )
    {
      ++v11[2];
    }
    v18 = (_DWORD *)*((_QWORD *)v1 + 50);
    *((_QWORD *)v1 + 50) = v11;
    if ( v18 )
    {
      v19 = v18[2] - 1;
      v18[2] = v19;
      if ( !v19 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
        v11 = (_DWORD *)*((_QWORD *)v1 + 50);
      }
    }
  }
  v12 = *((_QWORD *)v1 + 37);
  v13 = *(void (__fastcall **)(_DWORD *, __int64 *, float))(*(_QWORD *)v11 + 264LL);
  if ( !v12 )
  {
    Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)v1 + 280), v1);
    v12 = *((_QWORD *)v1 + 37);
  }
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 264LL))(v12);
  v22 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v13(v11, &v22, 0.08);
  result = v22;
  if ( v22 )
  {
    v15 = *(_DWORD *)(v22 + 8) - 1;
    *(_DWORD *)(v22 + 8) = v15;
    if ( !v15 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  *((_DWORD *)v1 + 190) = 1053609165;
  return result;
}

