/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B60B8
 * Mangled: _ZN5Caver24PressureTriggerComponent6UpdateEf
 * Demangled: Caver::PressureTriggerComponent::Update(float)
 *
 * Callers: 1
 *   0x0000000000200900  Caver::PressureTriggerComponent::Update(float)
 *
 * Callees: 8
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x0000000000200900  Caver::PressureTriggerComponent::Update(float)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 76
 *   insn=0x00000000002B60CC string=0x00000000002B60D0 "U"
 *   insn=0x00000000002B60DC string=0x00000000002B60E0 ""
 *   insn=0x00000000002B60E4 string=0x00000000002B60E8 "ar@"
 *   insn=0x00000000002B60E8 string=0x00000000002B60EC "  ""
 *   insn=0x00000000002B60F0 string=0x00000000002B60F4 "hfC9H"
 *   insn=0x00000000002B60F0 string=0x00000000002B6124 "hbC9"
 *   insn=0x00000000002B60F4 string=0x00000000002B60F8 "H"
 *   insn=0x00000000002B60F8 string=0x00000000002B60FC "h"
 *   insn=0x00000000002B60F8 string=0x00000000002B6280 "hR@"
 *   insn=0x00000000002B6100 string=0x00000000002B6104 "b"
 *   insn=0x00000000002B6108 string=0x00000000002B610C "!(""
 *   insn=0x00000000002B610C string=0x00000000002B6110 "   "
 *   insn=0x00000000002B6110 string=0x00000000002B6114 "av"
 *   insn=0x00000000002B6114 string=0x00000000002B6118 ""
 *   insn=0x00000000002B6118 string=0x00000000002B611C "`v"
 *   insn=0x00000000002B6118 string=0x00000000002B61D8 "h"
 *   insn=0x00000000002B611C string=0x00000000002B6120 "."
 *   insn=0x00000000002B6128 string=0x00000000002B612C "hfC9("
 *   insn=0x00000000002B612C string=0x00000000002B6130 "("
 *   insn=0x00000000002B6130 string=0x00000000002B6134 "hf@"
 *   insn=0x00000000002B613C string=0x00000000002B6140 "a"
 *   insn=0x00000000002B6148 string=0x00000000002B614C "=#"
 *   insn=0x00000000002B6154 string=0x00000000002B6158 "a"
 *   insn=0x00000000002B616C string=0x00000000002B6170 "4"
 *   insn=0x00000000002B6174 string=0x00000000002B6178 ""
 *   insn=0x00000000002B6188 string=0x00000000002B618C "\t@"
 *   insn=0x00000000002B6194 string=0x00000000002B6198 ""
 *   insn=0x00000000002B61A8 string=0x00000000002B61AC "@"
 *   insn=0x00000000002B61B8 string=0x00000000002B61BC "av@"
 *   insn=0x00000000002B61C0 string=0x00000000002B61C4 " ( "
 *   insn=0x00000000002B61C4 string=0x00000000002B61C8 "  "
 *   insn=0x00000000002B61C8 string=0x00000000002B61CC "`v"
 *   insn=0x00000000002B61CC string=0x00000000002B61D0 "E"
 *   insn=0x00000000002B61D8 string=0x0000000000583734 "o"
 *   insn=0x00000000002B61E0 string=0x00000000002B61E4 "M"
 *   insn=0x00000000002B61E4 string=0x00000000002B61E8 "t"
 *   insn=0x00000000002B61E4 string=0x00000000002B624C "`r@"
 *   insn=0x00000000002B61E8 string=0x00000000002B61EC "c"
 *   insn=0x00000000002B61EC string=0x00000000002B61F0 "h"
 *   insn=0x00000000002B61F0 string=0x00000000002B61F4 "av@"
 *   insn=0x00000000002B6200 string=0x00000000002B6204 "`( "
 *   insn=0x00000000002B6208 string=0x00000000002B620C "c"
 *   insn=0x00000000002B620C string=0x00000000002B6210 "` ""
 *   insn=0x00000000002B621C string=0x00000000002B6220 "#8#"
 *   insn=0x00000000002B6220 string=0x00000000002B6224 "c"
 *   insn=0x00000000002B6224 string=0x00000000002B6228 "` ""
 *   insn=0x00000000002B6228 string=0x00000000002B622C "\t"
 *   insn=0x00000000002B6240 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002B6250 string=0x00000000002B6254 "`r"
 *   insn=0x00000000002B6260 string=0x00000000002B6264 "!"
 *   insn=0x00000000002B6284 string=0x00000000002B6288 "if"
 *   insn=0x00000000002B628C string=0x00000000002B6290 "a""
 *   insn=0x00000000002B62A4 string=0x00000000002B62A8 "a"
 *   insn=0x00000000002B62A8 string=0x00000000002B62AC "5*"
 *   insn=0x00000000002B62B4 string=0x00000000002B62B8 "r,"
 *   insn=0x00000000002B62C4 string=0x00000000002B62C8 ""
 *   insn=0x00000000002B62CC string=0x00000000002B62D0 "a"
 *   insn=0x00000000002B62D8 string=0x00000000002B62DC "\t@"
 *   insn=0x00000000002B62E4 string=0x00000000002B62E8 ""
 *   insn=0x00000000002B62EC string=0x00000000002B62F0 "a"
 *   insn=0x00000000002B62F8 string=0x00000000002B62FC "@"
 *   insn=0x00000000002B6300 string=0x00000000002B6304 "~"
 *   insn=0x00000000002B6308 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B6318 string=0x00000000002B631C ""
 *   insn=0x00000000002B6320 string=0x00000000002B6324 "!"
 *   insn=0x00000000002B6328 string=0x00000000002B632C "\t@"
 *   insn=0x00000000002B6338 string=0x00000000002B633C ""
 *   insn=0x00000000002B6340 string=0x00000000002B6344 "!"
 *   insn=0x00000000002B6348 string=0x00000000002B634C "@"
 *   insn=0x00000000002B6360 string=0x00000000002B6364 "4"
 *   insn=0x00000000002B6368 string=0x00000000002B636C ""
 *   insn=0x00000000002B6378 string=0x00000000002B637C "\t@"
 *   insn=0x00000000002B6388 string=0x00000000002B638C ""
 *   insn=0x00000000002B6398 string=0x00000000002B639C "@"
 *   insn=0x00000000002B63A8 string=0x00000000002B63AC "F-"
 *   insn=0x00000000002B63B4 string=0x00000000002B63B8 "R)"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObjectLib *__fastcall Caver::PressureTriggerComponent::Update(Caver::SceneObjectLib *this, float a2)
{
  Caver::SceneObjectLib *v2; // x19
  float v4; // s0
  float v5; // s1
  __int64 v6; // x8
  Caver::SceneObject *v7; // x2
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  float v11; // s0
  __int64 v12; // x20
  float v13; // s0
  float v14; // s1
  int v15; // w8
  __int64 v16; // x8
  Caver::SceneObject *v17; // x2
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  Caver::SceneObjectLib *v21; // [xsp+8h] [xbp-38h] BYREF
  _QWORD *v22; // [xsp+10h] [xbp-30h]
  __int64 v23; // [xsp+18h] [xbp-28h]

  v2 = this;
  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((float *)this + 28) >= 0.25 )
  {
    if ( !*((_BYTE *)this + 216) )
    {
      if ( *((_BYTE *)this + 217) )
      {
        v6 = *((_QWORD *)this + 25);
        *((_BYTE *)this + 217) = 0;
        if ( v6 )
        {
          Caver::Component::NewProgramStateForProgram(
            (__int64 *)&v21,
            this,
            (Caver::SceneObjectLib *)((char *)this + 176));
          this = v21;
          if ( v21 )
          {
            Caver::SceneObjectLib::PushSceneObject(v21, *((Caver::ProgramState **)v2 + 5), v7);
            this = (Caver::SceneObjectLib *)Caver::ProgramState::Execute(v21, 1);
          }
          v8 = v22;
          if ( v22 )
          {
            v9 = v22[1] - 1LL;
            v22[1] = v9;
            if ( !v9 )
            {
              this = (Caver::SceneObjectLib *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
              v10 = v8[2] - 1LL;
              v8[2] = v10;
              if ( !v10 )
                this = (Caver::SceneObjectLib *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
            }
          }
        }
      }
      v11 = *((float *)v2 + 29) + (float)(a2 * -50.0);
      *((float *)v2 + 29) = v11;
      if ( v11 < 0.0 )
        *((_DWORD *)v2 + 29) = 0;
    }
  }
  else
  {
    if ( !*((_BYTE *)this + 217) )
    {
      v16 = *((_QWORD *)this + 20);
      *((_BYTE *)this + 217) = 1;
      if ( v16 )
      {
        Caver::Component::NewProgramStateForProgram(
          (__int64 *)&v21,
          this,
          (Caver::SceneObjectLib *)((char *)this + 136));
        this = v21;
        if ( v21 )
        {
          Caver::SceneObjectLib::PushSceneObject(v21, *((Caver::ProgramState **)v2 + 5), v17);
          this = (Caver::SceneObjectLib *)Caver::ProgramState::Execute(v21, 1);
        }
        v18 = v22;
        if ( v22 )
        {
          v19 = v22[1] - 1LL;
          v22[1] = v19;
          if ( !v19 )
          {
            this = (Caver::SceneObjectLib *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
            v20 = v18[2] - 1LL;
            v18[2] = v20;
            if ( !v20 )
              this = (Caver::SceneObjectLib *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
          }
        }
      }
    }
    v4 = *((float *)v2 + 30);
    v5 = (float)(a2 * 40.0) + *((float *)v2 + 29);
    *((float *)v2 + 29) = v5;
    if ( v5 > v4 )
      *((float *)v2 + 29) = v4;
  }
  if ( a2 > 0.001 )
  {
    v12 = *((_QWORD *)v2 + 5);
    v13 = *((float *)v2 + 31) + 0.0;
    v14 = *((float *)v2 + 32) - *((float *)v2 + 29);
    if ( fabsf(v13 - *(float *)(v12 + 112)) > 0.0001 || fabsf(v14 - *(float *)(v12 + 116)) > 0.0001 )
    {
      v15 = *(unsigned __int8 *)(v12 + 180);
      *(float *)(v12 + 112) = v13;
      *(float *)(v12 + 116) = v14;
      if ( !v15 )
      {
        this = (Caver::SceneObjectLib *)Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v12);
        *(_BYTE *)(v12 + 180) = 1;
      }
    }
  }
  *((float *)v2 + 28) = *((float *)v2 + 28) + a2;
  return this;
}

