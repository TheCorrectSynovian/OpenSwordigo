/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000257128
 * Mangled: _ZN5Caver27CharAnimControllerComponent6UpdateEf
 * Demangled: Caver::CharAnimControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FB8F0  Caver::CharAnimControllerComponent::Update(float)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72A0  Caver::AnimationControllerComponent::Update(float)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB8F0  Caver::CharAnimControllerComponent::Update(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 99
 *   insn=0x000000000025713C string=0x0000000000257140 "V"
 *   insn=0x0000000000257148 string=0x000000000025714C ""
 *   insn=0x0000000000257150 string=0x0000000000257154 "h"
 *   insn=0x0000000000257154 string=0x0000000000257158 ""
 *   insn=0x0000000000257158 string=0x000000000025715C "`"
 *   insn=0x0000000000257158 string=0x00000000002572F8 "h"
 *   insn=0x0000000000257164 string=0x0000000000587828 "33s?"
 *   insn=0x0000000000257174 string=0x0000000000257178 "@  "
 *   insn=0x000000000025717C string=0x0000000000257180 "h"
 *   insn=0x0000000000257180 string=0x0000000000257184 ""
 *   insn=0x0000000000257184 string=0x0000000000257188 "`r@"
 *   insn=0x0000000000257184 string=0x0000000000257284 "h"
 *   insn=0x000000000025718C string=0x0000000000257190 "`B"
 *   insn=0x000000000025718C string=0x00000000002571A4 ""
 *   insn=0x0000000000257194 string=0x0000000000257198 "R"
 *   insn=0x0000000000257198 string=0x000000000025719C "`r@"
 *   insn=0x0000000000257198 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025719C string=0x00000000002571A0 "@"
 *   insn=0x00000000002571A0 string=0x0000000000257228 "h"
 *   insn=0x00000000002571A4 string=0x00000000002571A8 ""
 *   insn=0x00000000002571B0 string=0x00000000002571B4 "`r@"
 *   insn=0x00000000002571B8 string=0x00000000002571BC "uB"
 *   insn=0x00000000002571B8 string=0x00000000002571D4 ""
 *   insn=0x00000000002571C4 string=0x00000000002571C8 "F"
 *   insn=0x00000000002571C8 string=0x00000000002571CC "`r@"
 *   insn=0x00000000002571CC string=0x00000000002571D0 " "
 *   insn=0x00000000002571D4 string=0x00000000002571D8 ""
 *   insn=0x00000000002571DC string=0x00000000002571E0 "hr@"
 *   insn=0x00000000002571E4 string=0x00000000002571E8 ""
 *   insn=0x00000000002571E8 string=0x00000000002571EC "uB"
 *   insn=0x00000000002571E8 string=0x0000000000257208 "\t"
 *   insn=0x00000000002571FC string=0x0000000000257200 "8"
 *   insn=0x0000000000257200 string=0x0000000000257204 "hr@"
 *   insn=0x000000000025720C string=0x0000000000257210 ")"
 *   insn=0x0000000000257210 string=0x0000000000257214 " "
 *   insn=0x0000000000257228 string=0x000000000025722C "i"
 *   insn=0x000000000025722C string=0x0000000000257230 ""
 *   insn=0x0000000000257238 string=0x000000000025723C "*\t@"
 *   insn=0x0000000000257238 string=0x0000000000257248 "i"
 *   insn=0x000000000025723C string=0x0000000000257240 "J"
 *   insn=0x0000000000257240 string=0x0000000000257244 "*\t"
 *   insn=0x0000000000257248 string=0x000000000025724C " 5D"
 *   insn=0x0000000000257260 string=0x0000000000257264 "@"
 *   insn=0x0000000000257260 string=0x0000000000257280 "`"
 *   insn=0x0000000000257264 string=0x0000000000257268 ""
 *   insn=0x0000000000257268 string=0x000000000025726C ""
 *   insn=0x0000000000257270 string=0x0000000000257274 ""
 *   insn=0x0000000000257274 string=0x0000000000257278 ""
 *   insn=0x0000000000257290 string=0x0000000000257294 "@"
 *   insn=0x0000000000257294 string=0x00000000002572DC "@"
 *   insn=0x00000000002572A0 string=0x00000000002572A4 "@"
 *   insn=0x00000000002572A4 string=0x00000000002572A8 ""
 *   insn=0x00000000002572A8 string=0x00000000002572AC ""
 *   insn=0x00000000002572B0 string=0x00000000002572C4 ""
 *   insn=0x00000000002572B4 string=0x00000000002572B8 "\t"
 *   insn=0x00000000002572C4 string=0x00000000002572C8 ""
 *   insn=0x00000000002572CC string=0x00000000002572D0 "`"
 *   insn=0x00000000002572DC string=0x00000000002572E0 ""
 *   insn=0x00000000002572E0 string=0x00000000002572E4 ""
 *   insn=0x00000000002572E8 string=0x00000000002572EC ""
 *   insn=0x00000000002572EC string=0x00000000002572F0 ""
 *   insn=0x00000000002572F8 string=0x00000000002572FC "`"
 *   insn=0x00000000002572F8 string=0x0000000000583734 "o"
 *   insn=0x0000000000257300 string=0x0000000000257304 "h"
 *   insn=0x0000000000257308 string=0x000000000025730C "M"
 *   insn=0x000000000025730C string=0x0000000000257310 "("
 *   insn=0x000000000025730C string=0x0000000000257334 "i"
 *   insn=0x0000000000257310 string=0x0000000000257314 "\t"
 *   insn=0x0000000000257320 string=0x0000000000257324 "`"
 *   insn=0x0000000000257324 string=0x0000000000257328 "h"
 *   insn=0x000000000025732C string=0x0000000000257330 "\t"
 *   insn=0x0000000000257334 string=0x0000000000257338 "jb"
 *   insn=0x000000000025733C string=0x0000000000257340 "H"
 *   insn=0x0000000000257348 string=0x0000000000257358 "`R@"
 *   insn=0x000000000025734C string=0x0000000000257350 "\t"
 *   insn=0x0000000000257358 string=0x000000000025735C "tR"
 *   insn=0x0000000000257360 string=0x0000000000257364 "@"
 *   insn=0x0000000000257360 string=0x0000000000257380 "4"
 *   insn=0x0000000000257364 string=0x0000000000257368 ""
 *   insn=0x0000000000257368 string=0x000000000025736C ""
 *   insn=0x0000000000257370 string=0x0000000000257374 ""
 *   insn=0x0000000000257374 string=0x0000000000257378 ""
 *   insn=0x0000000000257384 string=0x0000000000257388 ""
 *   insn=0x0000000000257398 string=0x000000000025739C ""
 *   insn=0x00000000002573AC string=0x00000000001F72A0 "0'"
 *   insn=0x00000000002573D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002573E4 string=0x00000000002573E8 "\t\t@"
 *   insn=0x00000000002573E8 string=0x00000000002573EC ")"
 *   insn=0x00000000002573EC string=0x00000000002573F0 "\t\t"
 *   insn=0x00000000002573F4 string=0x00000000002573F8 "\t"
 *   insn=0x00000000002573F8 string=0x00000000002573FC ")"
 *   insn=0x0000000000257400 string=0x0000000000257404 " "
 *   insn=0x0000000000257404 string=0x0000000000257408 ""
 *   insn=0x000000000025740C string=0x0000000000257410 "4"
 *   insn=0x0000000000257414 string=0x0000000000257418 ""
 *   insn=0x0000000000257424 string=0x0000000000257428 ""
 *   insn=0x0000000000257434 string=0x0000000000257438 "#"
 *   insn=0x0000000000257440 string=0x0000000000257444 "+"
 *   insn=0x0000000000257444 string=0x00000000001FB8F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharAnimControllerComponent::Update(Caver::CharAnimControllerComponent *this, float a2)
{
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  Caver::ComponentOutletBase *v7; // x21
  __int64 v8; // x0
  _QWORD *v9; // x8
  __int64 v10; // x20
  __int64 v11; // x9
  void (__fastcall *v12)(Caver::CharAnimControllerComponent *, _QWORD *, float); // x8
  __int64 v13; // x0
  int v14; // w8
  int v15; // w8
  int v16; // w8
  float v17; // s0
  __int64 v18; // x8
  float v19; // s0
  char *v20; // x8
  _DWORD *v21; // x20
  _DWORD *v22; // x0
  int v23; // w8
  int v24; // w8
  _QWORD v25[2]; // [xsp+0h] [xbp-40h] BYREF

  v25[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 352) )
    goto LABEL_31;
  v4 = *((_QWORD *)this + 45);
  if ( !v4 || *(float *)(v4 + 12) <= (float)(*(float *)(v4 + 40) * 0.95) )
    goto LABEL_31;
  if ( *((_QWORD *)this + 43) )
  {
    v5 = *((_QWORD *)this + 28);
    if ( !v5 )
    {
      Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 208), this);
      v5 = *((_QWORD *)this + 28);
      if ( !v5 )
        goto LABEL_15;
    }
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 264LL))(v5) )
      goto LABEL_15;
    v6 = *((_QWORD *)this + 28);
    if ( v6
      || (v7 = (Caver::CharAnimControllerComponent *)((char *)this + 208),
          Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 208), this),
          (v6 = *((_QWORD *)this + 28)) != 0) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
      v9 = (_QWORD *)*((_QWORD *)this + 28);
      v10 = v8;
      if ( v9 )
      {
LABEL_14:
        *(float *)(v10 + 12) = *((float *)(*(_QWORD *(__fastcall **)(_QWORD *__return_ptr, _QWORD *))(*v9 + 264LL))(
                                            v9,
                                            v9)
                               + 10)
                             * 0.5;
LABEL_15:
        v11 = *((_QWORD *)this + 43);
        v12 = *(void (__fastcall **)(Caver::CharAnimControllerComponent *, _QWORD *, float))(*(_QWORD *)this + 264LL);
        v25[0] = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        v12(this, v25, 0.1);
        v13 = v25[0];
        if ( v25[0] )
        {
          v14 = *(_DWORD *)(v25[0] + 8LL) - 1;
          *(_DWORD *)(v25[0] + 8LL) = v14;
          if ( !v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        }
        v4 = *((_QWORD *)this + 45);
        goto LABEL_21;
      }
      v7 = (Caver::CharAnimControllerComponent *)((char *)this + 208);
    }
    else
    {
      v10 = 0;
    }
    Caver::ComponentOutletBase::Connect(v7, this);
    v9 = (_QWORD *)*((_QWORD *)this + 28);
    goto LABEL_14;
  }
LABEL_21:
  if ( v4 == *((_QWORD *)this + 46) )
  {
    *((_QWORD *)this + 46) = 0;
    if ( !v4 )
    {
      *((_QWORD *)this + 45) = 0;
      goto LABEL_31;
    }
    v15 = *(_DWORD *)(v4 + 8) - 1;
    *(_DWORD *)(v4 + 8) = v15;
    if ( v15 )
    {
      *((_QWORD *)this + 45) = 0;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v4 = *((_QWORD *)this + 45);
      *((_QWORD *)this + 45) = 0;
      if ( !v4 )
        goto LABEL_31;
    }
  }
  else
  {
    *((_QWORD *)this + 45) = 0;
    if ( !v4 )
      goto LABEL_31;
  }
  v16 = *(_DWORD *)(v4 + 8) - 1;
  *(_DWORD *)(v4 + 8) = v16;
  if ( !v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_31:
  v17 = *((float *)this + 96);
  v18 = *((_QWORD *)this + 47);
  if ( v17 > 0.001 )
  {
    if ( v18 )
    {
      if ( !*(_BYTE *)(v18 + 45) )
      {
        v19 = v17 - a2;
        *((float *)this + 96) = v19;
        if ( v19 <= 0.001 )
          *(_BYTE *)(v18 + 45) = 1;
      }
    }
  }
  if ( v18 )
    v20 = (char *)this + 376;
  else
    v20 = (char *)this + 344;
  v21 = *(_DWORD **)v20;
  if ( *(_QWORD *)v20 )
    v21[2] += 2;
  v22 = (_DWORD *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = v21;
  if ( v22 )
  {
    v23 = v22[2] - 1;
    v22[2] = v23;
    if ( !v23 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
  }
  if ( v21 )
  {
    v24 = v21[2] - 1;
    v21[2] = v24;
    if ( !v24 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 8LL))(v21);
  }
  Caver::AnimationControllerComponent::Update(this, a2);
}

