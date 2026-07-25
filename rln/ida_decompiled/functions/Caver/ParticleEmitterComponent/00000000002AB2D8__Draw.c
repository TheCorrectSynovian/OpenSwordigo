/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AB2D8
 * Mangled: _ZN5Caver24ParticleEmitterComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4ERKNS_7Vector3ES8_
 * Demangled: Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000001F5250  Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 17
 *   0x00000000001F36E0  Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&)
 *   0x00000000001F54A0  Caver::Matrix4::RotationY(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F7C20  Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000001F8DA0  Caver::ParticleSystem::Draw(Caver::RenderingContext *)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FD050  Caver::TransformComponent::WorldMatrix(void)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002039A0  Caver::Matrix4::RotationX(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000269C04  Caver::EntityComponent::className(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 147
 *   insn=0x00000000002AB2F4 string=0x00000000002AB2F8 "Z"
 *   insn=0x00000000002AB2F8 string=0x00000000002AB2FC "H"
 *   insn=0x00000000002AB31C string=0x00000000002AB338 "H"
 *   insn=0x00000000002AB32C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002AB340 string=0x00000000002AB344 "a'"
 *   insn=0x00000000002AB374 string=0x00000000002AB378 "h"
 *   insn=0x00000000002AB37C string=0x00000000002AB380 " "
 *   insn=0x00000000002AB380 string=0x00000000002AB384 ""
 *   insn=0x00000000002AB384 string=0x00000000002AB388 "9"
 *   insn=0x00000000002AB388 string=0x00000000002AB38C "%@"
 *   insn=0x00000000002AB388 string=0x00000000002AB3CC ")@"
 *   insn=0x00000000002AB38C string=0x00000000002AB390 "H"
 *   insn=0x00000000002AB398 string=0x00000000002AB3AC "("
 *   insn=0x00000000002AB3B4 string=0x00000000002AB3B8 ""
 *   insn=0x00000000002AB3BC string=0x00000000002AB418 ")@"
 *   insn=0x00000000002AB3C4 string=0x00000000002AB3C8 "9"
 *   insn=0x00000000002AB3CC string=0x00000000002AB3D0 "%@"
 *   insn=0x00000000002AB3D4 string=0x00000000002AB3D8 "("
 *   insn=0x00000000002AB3D4 string=0x00000000002AB408 "{"
 *   insn=0x00000000002AB3DC string=0x00000000002AB3E0 "\t@"
 *   insn=0x00000000002AB3E4 string=0x00000000002AB3E8 "(@"
 *   insn=0x00000000002AB3E8 string=0x00000000002AB3EC ""
 *   insn=0x00000000002AB3EC string=0x00000000002AB3F0 "("
 *   insn=0x00000000002AB3F4 string=0x00000000002AB3F8 "("
 *   insn=0x00000000002AB3FC string=0x00000000002AB400 "@"
 *   insn=0x00000000002AB418 string=0x00000000002AB41C ")"
 *   insn=0x00000000002AB41C string=0x00000000002AB420 ")"
 *   insn=0x00000000002AB424 string=0x00000000002AB428 " "
 *   insn=0x00000000002AB42C string=0x0000000000583734 "o"
 *   insn=0x00000000002AB438 string=0x00000000002AB43C " 5G"
 *   insn=0x00000000002AB43C string=0x00000000002AB440 "B(!"
 *   insn=0x00000000002AB440 string=0x00000000002AB444 "B"
 *   insn=0x00000000002AB444 string=0x00000000002AB448 "@  "
 *   insn=0x00000000002AB448 string=0x00000000002AB44C "e"
 *   insn=0x00000000002AB450 string=0x00000000002AB454 "B(!"
 *   insn=0x00000000002AB454 string=0x00000000002AB458 "B"
 *   insn=0x00000000002AB458 string=0x00000000002AB45C "@  "
 *   insn=0x00000000002AB464 string=0x00000000002AB468 "B(!"
 *   insn=0x00000000002AB468 string=0x00000000002AB46C "B"
 *   insn=0x00000000002AB46C string=0x00000000002AB470 "@  "
 *   insn=0x00000000002AB470 string=0x00000000002AB474 "%"
 *   insn=0x00000000002AB478 string=0x00000000002AB47C "A(!"
 *   insn=0x00000000002AB47C string=0x00000000002AB480 "!"
 *   insn=0x00000000002AB480 string=0x00000000002AB484 "   "
 *   insn=0x00000000002AB488 string=0x00000000002AB48C "\t"
 *   insn=0x00000000002AB490 string=0x00000000002AB4A4 "(@"
 *   insn=0x00000000002AB498 string=0x00000000002AB49C "\t"
 *   insn=0x00000000002AB49C string=0x00000000002AB4A0 "9"
 *   insn=0x00000000002AB4A4 string=0x00000000002AB4A8 ""
 *   insn=0x00000000002AB4A8 string=0x00000000002AB4AC "("
 *   insn=0x00000000002AB4B0 string=0x00000000002AB4B4 "("
 *   insn=0x00000000002AB4B8 string=0x00000000002AB4BC "\t@"
 *   insn=0x00000000002AB4C0 string=0x00000000002AB4C4 "(@"
 *   insn=0x00000000002AB4C4 string=0x00000000002AB4C8 ""
 *   insn=0x00000000002AB4C8 string=0x00000000002AB4CC "("
 *   insn=0x00000000002AB4D0 string=0x00000000002AB4D4 "("
 *   insn=0x00000000002AB4D8 string=0x00000000002AB4DC "@"
 *   insn=0x00000000002AB4F0 string=0x00000000002AB4F4 "{1"
 *   insn=0x00000000002AB4F8 string=0x00000000002AB4FC ""
 *   insn=0x00000000002AB508 string=0x00000000001F74B0 "0'"
 *   insn=0x00000000002AB510 string=0x00000000002AB514 " "
 *   insn=0x00000000002AB518 string=0x00000000002AB51C "AB9"
 *   insn=0x00000000002AB520 string=0x00000000002AB524 " "
 *   insn=0x00000000002AB52C string=0x00000000001F54A0 "P'"
 *   insn=0x00000000002AB538 string=0x00000000002AB53C "UR"
 *   insn=0x00000000002AB54C string=0x00000000002AB550 "d1"
 *   insn=0x00000000002AB560 string=0x00000000002AB564 "KR"
 *   insn=0x00000000002AB574 string=0x00000000002AB578 "Z1"
 *   insn=0x00000000002AB5A0 string=0x00000000002AB5A4 ""
 *   insn=0x00000000002AB5C4 string=0x00000000002AB5C8 "2R"
 *   insn=0x00000000002AB5D0 string=0x00000000002AB5D4 "C "
 *   insn=0x00000000002AB5D4 string=0x00000000002AB5D8 "7"
 *   insn=0x00000000002AB5D4 string=0x00000000001F36E0 "P'"
 *   insn=0x00000000002AB5DC string=0x00000000002AB5E0 ""
 *   insn=0x00000000002AB5F0 string=0x00000000002AB5F4 "\t@"
 *   insn=0x00000000002AB5FC string=0x00000000002AB600 ""
 *   insn=0x00000000002AB610 string=0x00000000002AB614 "@"
 *   insn=0x00000000002AB620 string=0x00000000002AB624 "_M"
 *   insn=0x00000000002AB634 string=0x00000000002AB638 "*1"
 *   insn=0x00000000002AB660 string=0x00000000002AB664 ""
 *   insn=0x00000000002AB670 string=0x00000000002AB674 "5"
 *   insn=0x00000000002AB670 string=0x00000000001F8DA0 "0'"
 *   insn=0x00000000002AB678 string=0x00000000002AB67C ""
 *   insn=0x00000000002AB68C string=0x00000000002AB690 "\t@"
 *   insn=0x00000000002AB698 string=0x00000000002AB69C ""
 *   insn=0x00000000002AB6AC string=0x00000000002AB6B0 "@"
 *   insn=0x00000000002AB6B4 string=0x00000000002AB6B8 " "
 *   insn=0x00000000002AB6CC string=0x00000000002AB6D0 "`F"
 *   insn=0x00000000002AB6D0 string=0x00000000001FD050 "0'"
 *   insn=0x00000000002AB6E4 string=0x00000000002AB6E8 "H"
 *   insn=0x00000000002AB6E8 string=0x00000000002AB6EC "%"
 *   insn=0x00000000002AB6F4 string=0x00000000002AB708 "H"
 *   insn=0x00000000002AB718 string=0x00000000002AB71C "2"
 *   insn=0x00000000002AB718 string=0x00000000002AB7D8 "(@"
 *   insn=0x00000000002AB724 string=0x00000000002AB728 "b/"
 *   insn=0x00000000002AB73C string=0x00000000002AB740 "AB9("
 *   insn=0x00000000002AB740 string=0x00000000002AB744 "("
 *   insn=0x00000000002AB750 string=0x00000000002AB754 "S'"
 *   insn=0x00000000002AB7B8 string=0x00000000002AB7BC ""
 *   insn=0x00000000002AB7D8 string=0x00000000002AB7DC ""
 *   insn=0x00000000002AB7DC string=0x00000000002AB7E0 "("
 *   insn=0x00000000002AB7E8 string=0x00000000002AB7EC "1"
 *   insn=0x00000000002AB7EC string=0x00000000002AB7F0 "y"
 *   insn=0x00000000002AB7EC string=0x00000000001F7C20 "0'"
 *   insn=0x00000000002AB7F0 string=0x00000000002AB7F4 "(@"
 *   insn=0x00000000002AB7F4 string=0x00000000002AB7F8 ""
 *   insn=0x00000000002AB7F8 string=0x00000000002AB7FC "("
 *   insn=0x00000000002AB800 string=0x00000000002AB804 "("
 *   insn=0x00000000002AB808 string=0x00000000002AB80C "\t@"
 *   insn=0x00000000002AB810 string=0x00000000002AB814 "(@"
 *   insn=0x00000000002AB814 string=0x00000000002AB818 ""
 *   insn=0x00000000002AB818 string=0x00000000002AB81C "("
 *   insn=0x00000000002AB820 string=0x00000000002AB824 "("
 *   insn=0x00000000002AB828 string=0x00000000002AB82C "z"
 *   insn=0x00000000002AB830 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002AB834 string=0x00000000002AB838 "Y\t"
 *   insn=0x00000000002AB838 string=0x00000000002AB83C "(@"
 *   insn=0x00000000002AB83C string=0x00000000002AB840 ""
 *   insn=0x00000000002AB840 string=0x00000000002AB844 "("
 *   insn=0x00000000002AB848 string=0x00000000002AB84C "("
 *   insn=0x00000000002AB84C string=0x00000000002AB850 "\t@"
 *   insn=0x00000000002AB858 string=0x00000000002AB85C "(@"
 *   insn=0x00000000002AB85C string=0x00000000002AB860 ""
 *   insn=0x00000000002AB860 string=0x00000000002AB864 "("
 *   insn=0x00000000002AB868 string=0x00000000002AB86C "("
 *   insn=0x00000000002AB86C string=0x00000000002AB870 "@"
 *   insn=0x00000000002AB878 string=0x00000000002AB87C "9"
 *   insn=0x00000000002AB888 string=0x00000000002AB88C ""
 *   insn=0x00000000002AB890 string=0x00000000002AB894 "a"
 *   insn=0x00000000002AB898 string=0x00000000002AB89C "\t@"
 *   insn=0x00000000002AB8A8 string=0x00000000002AB8AC ""
 *   insn=0x00000000002AB8B0 string=0x00000000002AB8B4 "a"
 *   insn=0x00000000002AB8B8 string=0x00000000002AB8BC "@"
 *   insn=0x00000000002AB8C4 string=0x00000000002AB8C8 "&"
 *   insn=0x00000000002AB8D4 string=0x00000000002AB8D8 ""
 *   insn=0x00000000002AB8E4 string=0x00000000002AB8E8 "\t@"
 *   insn=0x00000000002AB8F4 string=0x00000000002AB8F8 ""
 *   insn=0x00000000002AB904 string=0x00000000002AB908 "@"
 *   insn=0x00000000002AB918 string=0x00000000002AB91C "7"
 *   insn=0x00000000002AB920 string=0x00000000002AB924 ""
 *   insn=0x00000000002AB930 string=0x00000000002AB934 "\t@"
 *   insn=0x00000000002AB940 string=0x00000000002AB944 ""
 *   insn=0x00000000002AB950 string=0x00000000002AB954 "@"
 *   insn=0x00000000002AB964 string=0x00000000002AB968 "y"
 *   insn=0x00000000002AB974 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002AB97C string=0x00000000001FC790 "0'"
 *   insn=0x00000000002AB98C string=0x00000000002AB990 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::ParticleEmitterComponent::Draw(
        _QWORD *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3,
        const Caver::Vector3 *a4,
        const Caver::Vector3 *a5)
{
  __int64 v5; // x20
  __int64 v10; // x8
  __int64 v11; // x8
  _QWORD *v12; // x25
  __int64 v13; // t2
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x25
  __int64 v17; // t2
  int v18; // w27
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  Caver::Matrix4 *v22; // x0
  float v23; // s0
  __int64 v24; // x8
  Caver::Matrix4 *v25; // x0
  __int64 v26; // x8
  _QWORD *v27; // x23
  Caver::ParticleSystem *v28; // x24
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // x8
  _QWORD *v32; // x0
  __int64 v33; // x8
  Caver::ParticleSystem *v34; // x0
  _QWORD *v35; // x21
  __int64 v36; // x8
  __int64 v37; // x8
  Caver::TransformComponent *v38; // x0
  __int64 v39; // x8
  Caver::ParticleSystem *v40; // x0
  _QWORD *v41; // x25
  Caver::Matrix4 *v42; // x0
  __int64 v43; // x8
  Caver::ParticleSystem *v44; // x0
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47[8]; // [xsp+20h] [xbp-160h] BYREF
  __int128 v48; // [xsp+60h] [xbp-120h] BYREF
  __int128 v49; // [xsp+70h] [xbp-110h]
  __int128 v50; // [xsp+80h] [xbp-100h]
  __int128 v51; // [xsp+90h] [xbp-F0h]
  __int64 v52[8]; // [xsp+A0h] [xbp-E0h] BYREF
  __int128 v53; // [xsp+E0h] [xbp-A0h] BYREF
  __int128 v54; // [xsp+F0h] [xbp-90h]
  __int128 v55; // [xsp+100h] [xbp-80h]
  __int128 v56; // [xsp+110h] [xbp-70h]
  __int64 v57; // [xsp+128h] [xbp-58h]

  v5 = (__int64)this;
  v57 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( this[35] )
    return this;
  this = (_QWORD *)Caver::ComponentOutletBase::Connect(
                     (Caver::ComponentOutletBase *)(this + 33),
                     (const Caver::Component *)this);
  if ( *(_QWORD *)(v5 + 280) )
    return this;
  this = (_QWORD *)Caver::ComponentOutletBase::Connect(
                     (Caver::ComponentOutletBase *)(v5 + 264),
                     (const Caver::Component *)v5);
  v10 = *(_QWORD *)(v5 + 280);
  if ( !v10 || v10 == v5 )
  {
    v11 = *(_QWORD *)(v5 + 328);
    v12 = *(_QWORD **)(v5 + 336);
    if ( !v12 )
    {
LABEL_7:
      if ( !*(_DWORD *)(v11 + 36) )
        return this;
LABEL_8:
      v14 = *(_QWORD *)(v5 + 280);
      if ( !v14 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v5 + 264), (const Caver::Component *)v5);
        v14 = *(_QWORD *)(v5 + 280);
      }
      if ( !v14 || v14 == v5 )
      {
        v15 = *(_QWORD *)(v5 + 328);
        v16 = *(_QWORD **)(v5 + 336);
        if ( !v16 )
        {
LABEL_22:
          *(_OWORD *)(v15 + 168) = *(_OWORD *)(v5 + 376);
          if ( fabsf(*(float *)(v15 + 168) + -1.0) >= 0.001
            || fabsf(*(float *)(v15 + 172) + -1.0) >= 0.001
            || fabsf(*(float *)(v15 + 176) + -1.0) >= 0.001 )
          {
            *(_BYTE *)(v15 + 184) = 1;
            if ( !v16 )
              goto LABEL_31;
          }
          else
          {
            *(_BYTE *)(v15 + 184) = fabsf(*(float *)(v15 + 180) + -1.0) >= 0.001;
            if ( !v16 )
              goto LABEL_31;
          }
          v20 = v16[1] - 1LL;
          v16[1] = v20;
          if ( !v20 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
            v21 = v16[2] - 1LL;
            v16[2] = v21;
            if ( !v21 )
              (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
          }
LABEL_31:
          if ( *(_QWORD *)(v5 + 304)
            || (Caver::ComponentOutletBase::Connect(
                  (Caver::ComponentOutletBase *)(v5 + 288),
                  (const Caver::Component *)v5),
                *(_QWORD *)(v5 + 304)) )
          {
            v22 = (Caver::Matrix4 *)Caver::SceneObject::WorldMatrix(v52, *(Caver::SceneObject **)(v5 + 40));
            v23 = 3.1416;
            if ( !*(_BYTE *)(*(_QWORD *)(v5 + 40) + 144LL) )
              v23 = 0.0;
            Caver::Matrix4::RotationY((__int64 *)&v48, v22, v23);
            C_Matrix4Mul((const float *)v52, (const float *)&v48, (float *)&v53);
            v24 = *(_QWORD *)(v5 + 304);
            if ( !v24 )
            {
              Caver::ComponentOutletBase::Connect(
                (Caver::ComponentOutletBase *)(v5 + 288),
                (const Caver::Component *)v5);
              v24 = *(_QWORD *)(v5 + 304);
            }
            v25 = (Caver::Matrix4 *)C_Matrix4Mul((const float *)&v53, (const float *)(v24 + 216), (float *)&v53);
            v26 = *(_QWORD *)(v5 + 280);
            if ( !v26 )
            {
              v25 = (Caver::Matrix4 *)Caver::ComponentOutletBase::Connect(
                                        (Caver::ComponentOutletBase *)(v5 + 264),
                                        (const Caver::Component *)v5);
              v26 = *(_QWORD *)(v5 + 280);
            }
            if ( !v26 || v26 == v5 )
            {
              v28 = *(Caver::ParticleSystem **)(v5 + 328);
              v27 = *(_QWORD **)(v5 + 336);
              if ( !v27 )
              {
LABEL_45:
                Caver::Matrix4::RotationX(v47, v25, 1.5708);
                C_Matrix4Mul((const float *)&v53, (const float *)v47, (float *)&v48);
                Caver::ParticleSystem::BuildVertexDataWithTransform(v28, (const Caver::Matrix4 *)&v48);
LABEL_46:
                if ( v27 )
                {
                  v29 = v27[1] - 1LL;
                  v27[1] = v29;
                  if ( !v29 )
                  {
                    (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
                    v30 = v27[2] - 1LL;
                    v27[2] = v30;
                    if ( !v30 )
                    {
                      v31 = *v27;
                      v32 = v27;
LABEL_50:
                      (*(void (__fastcall **)(_QWORD *))(v31 + 24))(v32);
                      goto LABEL_51;
                    }
                  }
                }
                goto LABEL_51;
              }
            }
            else
            {
              v28 = *(Caver::ParticleSystem **)(v26 + 328);
              v27 = *(_QWORD **)(v26 + 336);
              if ( !v27 )
                goto LABEL_45;
            }
            ++v27[1];
            goto LABEL_45;
          }
          if ( *(_BYTE *)(v5 + 320) )
          {
            v38 = *(Caver::TransformComponent **)(v5 + 312);
            if ( v38 )
            {
              Caver::TransformComponent::WorldMatrix(v38);
              v53 = v48;
              v54 = v49;
              v55 = v50;
              v56 = v51;
              if ( !*(_BYTE *)(v5 + 468) )
                goto LABEL_77;
            }
            else
            {
              v42 = (Caver::Matrix4 *)Caver::SceneObject::WorldMatrix(
                                        (__int64 *)&v48,
                                        *(Caver::SceneObject **)(v5 + 40));
              v53 = v48;
              v54 = v49;
              v55 = v50;
              v56 = v51;
              if ( *(_BYTE *)(*(_QWORD *)(v5 + 40) + 144LL) )
              {
                Caver::Matrix4::RotationY((__int64 *)&v48, v42, 3.1416);
                C_Matrix4Mul((const float *)&v53, (const float *)&v48, (float *)&v53);
              }
              if ( !*(_BYTE *)(v5 + 468) )
              {
LABEL_77:
                v43 = *(_QWORD *)(v5 + 280);
                if ( !v43 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::ComponentOutletBase *)(v5 + 264),
                    (const Caver::Component *)v5);
                  v43 = *(_QWORD *)(v5 + 280);
                }
                if ( !v43 || v43 == v5 )
                {
                  v44 = *(Caver::ParticleSystem **)(v5 + 328);
                  v27 = *(_QWORD **)(v5 + 336);
                  if ( !v27 )
                  {
LABEL_85:
                    Caver::ParticleSystem::BuildVertexDataWithTransform(v44, (const Caver::Matrix4 *)&v53);
                    goto LABEL_46;
                  }
                }
                else
                {
                  v44 = *(Caver::ParticleSystem **)(v43 + 328);
                  v27 = *(_QWORD **)(v43 + 336);
                  if ( !v27 )
                    goto LABEL_85;
                }
                ++v27[1];
                goto LABEL_85;
              }
            }
            C_Matrix4Mul((const float *)&v53, (const float *)(v5 + 404), (float *)&v53);
            goto LABEL_77;
          }
          v39 = *(_QWORD *)(v5 + 280);
          if ( !v39 )
          {
            Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v5 + 264), (const Caver::Component *)v5);
            v39 = *(_QWORD *)(v5 + 280);
          }
          if ( !v39 || v39 == v5 )
          {
            v40 = *(Caver::ParticleSystem **)(v5 + 328);
            v41 = *(_QWORD **)(v5 + 336);
            if ( !v41 )
            {
LABEL_88:
              Caver::ParticleSystem::BuildVertexDataWithCamera(v40, a4, a5);
              if ( v41 )
              {
                v45 = v41[1] - 1LL;
                v41[1] = v45;
                if ( !v45 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v41 + 16LL))(v41);
                  v46 = v41[2] - 1LL;
                  v41[2] = v46;
                  if ( !v46 )
                  {
                    v31 = *v41;
                    v32 = v41;
                    goto LABEL_50;
                  }
                }
              }
LABEL_51:
              Caver::RenderingContext::SetMatrix(a2, a3);
              v33 = *(_QWORD *)(v5 + 280);
              if ( !v33 )
              {
                Caver::ComponentOutletBase::Connect(
                  (Caver::ComponentOutletBase *)(v5 + 264),
                  (const Caver::Component *)v5);
                v33 = *(_QWORD *)(v5 + 280);
              }
              if ( !v33 || v33 == v5 )
              {
                v34 = *(Caver::ParticleSystem **)(v5 + 328);
                v35 = *(_QWORD **)(v5 + 336);
                if ( !v35 )
                {
LABEL_59:
                  this = (_QWORD *)Caver::ParticleSystem::Draw(v34, a2);
                  if ( v35 )
                  {
                    v36 = v35[1] - 1LL;
                    v35[1] = v36;
                    if ( !v36 )
                    {
                      this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
                      v37 = v35[2] - 1LL;
                      v35[2] = v37;
                      if ( !v37 )
                        return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
                    }
                  }
                  return this;
                }
              }
              else
              {
                v34 = *(Caver::ParticleSystem **)(v33 + 328);
                v35 = *(_QWORD **)(v33 + 336);
                if ( !v35 )
                  goto LABEL_59;
              }
              ++v35[1];
              goto LABEL_59;
            }
          }
          else
          {
            v40 = *(Caver::ParticleSystem **)(v39 + 328);
            v41 = *(_QWORD **)(v39 + 336);
            if ( !v41 )
              goto LABEL_88;
          }
          ++v41[1];
          goto LABEL_88;
        }
      }
      else
      {
        v17 = v14 + 328;
        v15 = *(_QWORD *)(v14 + 328);
        v16 = *(_QWORD **)(v17 + 8);
        if ( !v16 )
          goto LABEL_22;
      }
      ++v16[1];
      goto LABEL_22;
    }
  }
  else
  {
    v13 = v10 + 328;
    v11 = *(_QWORD *)(v10 + 328);
    v12 = *(_QWORD **)(v13 + 8);
    if ( !v12 )
      goto LABEL_7;
  }
  v18 = *(_DWORD *)(v11 + 36);
  if ( !v12[1] )
  {
    this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    v19 = v12[2] - 1LL;
    v12[2] = v19;
    if ( !v19 )
      this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
  }
  if ( v18 )
    goto LABEL_8;
  return this;
}

