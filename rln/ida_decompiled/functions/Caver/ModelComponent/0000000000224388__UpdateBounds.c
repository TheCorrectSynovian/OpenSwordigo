/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000224388
 * Mangled: _ZN5Caver14ModelComponent12UpdateBoundsEv
 * Demangled: Caver::ModelComponent::UpdateBounds(void)
 *
 * Callers: 2
 *   0x00000000002033F0  Caver::ModelComponent::UpdateBounds(void)
 *   0x0000000000224274  Caver::ModelComponent::Prepare(void)
 *
 * Callees: 11
 *   0x00000000001F5110  Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *   0x00000000001F54A0  Caver::Matrix4::RotationY(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F71D0  Caver::Vector3::Vector3(Caver::Vector4 const&)
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002026C0  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x00000000002039A0  Caver::Matrix4::RotationX(float)
 *
 * Referenced strings: 70
 *   insn=0x00000000002243A8 string=0x00000000002243AC "U"
 *   insn=0x00000000002243B8 string=0x00000000002243BC "hF@"
 *   insn=0x00000000002243BC string=0x00000000002243C0 "H"
 *   insn=0x00000000002243C0 string=0x00000000002243C4 "&"
 *   insn=0x00000000002243C4 string=0x00000000002243C8 "eB"
 *   insn=0x00000000002243D8 string=0x00000000002243DC "h"
 *   insn=0x00000000002243DC string=0x00000000002243E0 "H"
 *   insn=0x00000000002243E0 string=0x00000000002243E4 "`BL"
 *   insn=0x00000000002243E0 string=0x0000000000224408 "`"
 *   insn=0x00000000002243E4 string=0x00000000002243E8 "a"
 *   insn=0x00000000002243F4 string=0x00000000002243F8 "!@!"
 *   insn=0x0000000000224400 string=0x0000000000224404 "CC"
 *   insn=0x0000000000224404 string=0x00000000001F5110 "P'"
 *   insn=0x000000000022440C string=0x0000000000224410 "5G"
 *   insn=0x000000000022440C string=0x0000000000583734 "o"
 *   insn=0x0000000000224414 string=0x0000000000224418 "  ("
 *   insn=0x000000000022441C string=0x0000000000224438 "`"
 *   insn=0x0000000000224420 string=0x0000000000224424 "_}"
 *   insn=0x000000000022443C string=0x0000000000224440 "  ("
 *   insn=0x0000000000224444 string=0x0000000000224460 "`F@"
 *   insn=0x000000000022444C string=0x00000000001F54A0 "P'"
 *   insn=0x0000000000224460 string=0x0000000000224464 ""
 *   insn=0x0000000000224478 string=0x0000000000224480 ""
 *   insn=0x0000000000224480 string=0x0000000000224484 "\t"
 *   insn=0x0000000000224488 string=0x000000000022448C "!"
 *   insn=0x0000000000224490 string=0x0000000000224494 "x"
 *   insn=0x00000000002244A4 string=0x00000000002244AC "hF@"
 *   insn=0x00000000002244AC string=0x00000000002244B0 "Q@"
 *   insn=0x00000000002244B4 string=0x00000000002244C4 "\t"
 *   insn=0x00000000002244B8 string=0x00000000002244BC ")"
 *   insn=0x00000000002244C4 string=0x00000000002244C8 ""
 *   insn=0x00000000002244CC string=0x00000000002244D0 "4"
 *   insn=0x00000000002244D4 string=0x00000000002244D8 ""
 *   insn=0x00000000002244E8 string=0x00000000002244EC "\t@"
 *   insn=0x00000000002244F4 string=0x00000000002244F8 ""
 *   insn=0x0000000000224508 string=0x000000000022450C "@"
 *   insn=0x0000000000224514 string=0x0000000000224518 "*\t"
 *   insn=0x0000000000224518 string=0x000000000022451C "hF@"
 *   insn=0x0000000000224520 string=0x0000000000224524 ""
 *   insn=0x0000000000224534 string=0x0000000000224538 ")"
 *   insn=0x0000000000224538 string=0x000000000022453C ")\t@"
 *   insn=0x0000000000224548 string=0x000000000022454C ")\t@"
 *   insn=0x0000000000224554 string=0x0000000000224558 "*"
 *   insn=0x0000000000224558 string=0x000000000022455C "j"
 *   insn=0x000000000022456C string=0x0000000000224574 "*"
 *   insn=0x0000000000224574 string=0x0000000000224578 ")"
 *   insn=0x000000000022457C string=0x0000000000224580 "h"
 *   insn=0x0000000000224584 string=0x0000000000224588 ""
 *   insn=0x0000000000224588 string=0x000000000022458C ")\t@"
 *   insn=0x0000000000224590 string=0x0000000000224594 "J#\t"
 *   insn=0x0000000000224594 string=0x0000000000224598 "H"
 *   insn=0x000000000022459C string=0x00000000002245A0 "I"
 *   insn=0x00000000002245A4 string=0x00000000002245A8 "J\t@"
 *   insn=0x00000000002245C4 string=0x00000000002245C8 "rz"
 *   insn=0x00000000002245D4 string=0x00000000001F71D0 "0'"
 *   insn=0x00000000002245EC string=0x00000000002245F0 "xz"
 *   insn=0x00000000002245F8 string=0x00000000002245FC "V"
 *   insn=0x00000000002245FC string=0x00000000001F9E30 "0'"
 *   insn=0x0000000000224608 string=0x000000000022460C "E"
 *   insn=0x000000000022460C string=0x0000000000224614 "a2A"
 *   insn=0x0000000000224618 string=0x000000000022461C "M"
 *   insn=0x000000000022461C string=0x0000000000224620 "`2"
 *   insn=0x0000000000224624 string=0x0000000000224628 "Z"
 *   insn=0x0000000000224628 string=0x000000000022462C "("
 *   insn=0x000000000022462C string=0x0000000000224630 "_"
 *   insn=0x000000000022463C string=0x0000000000224640 "hr"
 *   insn=0x0000000000224648 string=0x000000000022464C "UK"
 *   insn=0x000000000022464C string=0x00000000001F73A0 "0'"
 *   insn=0x0000000000224658 string=0x000000000022465C "A"
 *   insn=0x0000000000224684 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ModelComponent::UpdateBounds(Caver::ModelComponent *this)
{
  Caver::ModelComponent *v1; // x19
  float v2; // s1
  float v3; // s0
  float v4; // s0
  Caver::ModelInstance *v5; // x0
  char v6; // w22
  __int64 v7; // x23
  float *v8; // x24
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x26
  __int64 v12; // x8
  __int64 v13; // x8
  int **v14; // x20
  char v15; // w8
  __int64 v16; // x9
  __int64 v17; // x26
  int **v18; // x10
  _QWORD *v19; // x9
  bool v20; // zf
  _QWORD *v21; // x8
  int **v22; // x9
  float *v23; // x10
  float v24; // w8
  float v25; // w9
  float v26; // w10
  float v27; // s0
  float v29[4]; // [xsp+10h] [xbp-130h] BYREF
  float v30[4]; // [xsp+20h] [xbp-120h] BYREF
  __int64 v31; // [xsp+30h] [xbp-110h] BYREF
  float v32; // [xsp+38h] [xbp-108h]
  __int64 v33; // [xsp+40h] [xbp-100h] BYREF
  float v34; // [xsp+48h] [xbp-F8h]
  _OWORD v35[4]; // [xsp+50h] [xbp-F0h] BYREF
  _OWORD v36[4]; // [xsp+90h] [xbp-B0h] BYREF
  __int64 v37; // [xsp+D8h] [xbp-68h]

  v1 = this;
  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_QWORD *)this + 17) )
  {
    v36[2] = xmmword_6E9F10;
    v36[3] = xmmword_6E9F20;
    v36[0] = Caver::Matrix4::identityMatrix;
    v36[1] = xmmword_6E9F00;
    if ( *((_BYTE *)this + 192) )
    {
      v2 = -*((float *)this + 51);
      *(float32x2_t *)&v35[0] = vneg_f32(*(float32x2_t *)((char *)this + 196));
      *((float *)v35 + 2) = v2;
      this = (Caver::ModelComponent *)Caver::Matrix4::PostTranslate((Caver::Matrix4 *)v36, (const Caver::Vector3 *)v35);
    }
    v3 = *((float *)v1 + 52);
    if ( fabsf(v3) > 0.001 )
    {
      Caver::Matrix4::RotationX((__int64 *)v35, this, v3);
      this = (Caver::ModelComponent *)C_Matrix4Mul((const float *)v36, (const float *)v35, (float *)v36);
    }
    v4 = *((float *)v1 + 53);
    if ( fabsf(v4) > 0.001 )
    {
      Caver::Matrix4::RotationY((__int64 *)v35, this, v4);
      C_Matrix4Mul((const float *)v36, (const float *)v35, (float *)v36);
    }
    v5 = (Caver::ModelInstance *)*((_QWORD *)v1 + 17);
    if ( *((_QWORD *)v5 + 3) )
    {
      Caver::ModelInstance::SkinMeshes(v5, (const Caver::Matrix4 *)v36);
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
    v7 = 0;
    v8 = (float *)((char *)v1 + 300);
    v35[0] = xmmword_584010;
    *(_QWORD *)((char *)v1 + 300) = 0xFF7FFFFF7F7FFFFFLL;
    while ( 1 )
    {
      v9 = **((_QWORD **)v1 + 17);
      v10 = *(_QWORD **)(*((_QWORD *)v1 + 17) + 8LL);
      if ( v10 )
        ++v10[1];
      v11 = (int)((__int64)(*(_QWORD *)(v9 + 16) - *(_QWORD *)(v9 + 8)) >> 4);
      if ( v10 )
      {
        v12 = v10[1] - 1LL;
        v10[1] = v12;
        if ( !v12 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v13 = v10[2] - 1LL;
          v10[2] = v13;
          if ( !v13 )
            (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        }
      }
      if ( v7 >= v11 )
      {
        *(_OWORD *)((char *)v1 + 284) = v35[0];
        return Caver::Component::UpdateObjectBounds(v1);
      }
      v14 = *(int ***)(*(_QWORD *)(*((_QWORD *)v1 + 17) + 40LL) + 16 * v7);
      v15 = *((_BYTE *)v14 + 16);
      if ( v15 )
      {
        if ( !*((_QWORD *)*v14 + 6) )
          goto LABEL_12;
      }
      else if ( !v14[5] )
      {
        goto LABEL_12;
      }
      v16 = (__int64)*v14;
      if ( **v14 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = (int **)(v16 + 32);
          v19 = (_QWORD *)(v16 + 48);
          v20 = v15 == 0;
          if ( v15 )
            v21 = v19;
          else
            v21 = v14 + 5;
          if ( v20 )
            v22 = v14 + 3;
          else
            v22 = v18;
          v23 = (float *)(*v21 + v17 * *((unsigned int *)v22 + 2));
          v24 = *v23;
          *(float *)&v33 = *v23;
          v25 = v23[1];
          *((float *)&v33 + 1) = v25;
          v26 = v23[2];
          v34 = v26;
          if ( (v6 & 1) == 0 )
          {
            v29[0] = v24;
            v29[1] = v25;
            v29[2] = v26;
            v29[3] = 1.0;
            C_Matrix4Vector4Mul((const float *)v36, v29, v30);
            Caver::Vector3::Vector3((Caver::Vector3 *)&v31, (const Caver::Vector4 *)v30);
            v33 = v31;
            v34 = v32;
          }
          Caver::Vector2::Vector2((Caver::Vector2 *)v30, (const Caver::Vector3 *)&v33);
          Caver::Rectangle::ExpandToIncludePoint((Caver::Rectangle *)v35, (const Caver::Vector2 *)v30);
          v27 = v34;
          if ( v34 < *v8 )
            *v8 = v34;
          if ( v27 > *((float *)v1 + 76) )
            *((float *)v1 + 76) = v27;
          v16 = (__int64)*v14;
          if ( ++v17 >= (unsigned __int64)**v14 )
            break;
          v15 = *((_BYTE *)v14 + 16);
        }
      }
LABEL_12:
      ++v7;
    }
  }
  return Caver::Component::UpdateObjectBounds(v1);
}

