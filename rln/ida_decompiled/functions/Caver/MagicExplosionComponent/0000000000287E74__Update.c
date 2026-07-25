/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000287E74
 * Mangled: _ZN5Caver23MagicExplosionComponent6UpdateEf
 * Demangled: Caver::MagicExplosionComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001F6F80  Caver::MagicExplosionComponent::Update(float)
 *
 * Callees: 19
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F80  Caver::MagicExplosionComponent::Update(float)
 *   0x00000000001F7220  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x00000000001FF760  Caver::SceneObject::SetInstanceScaling(float)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 140
 *   insn=0x0000000000287E88 string=0x0000000000287E8C "V"
 *   insn=0x0000000000287E94 string=0x0000000000287E98 ""
 *   insn=0x0000000000287E9C string=0x0000000000287EA0 "h"
 *   insn=0x0000000000287EA4 string=0x0000000000287EA8 "`"
 *   insn=0x0000000000287EA4 string=0x0000000000287F60 "`"
 *   insn=0x0000000000287EA8 string=0x0000000000287EAC "h"
 *   insn=0x0000000000287EB0 string=0x0000000000287EB4 "`"
 *   insn=0x0000000000287EB4 string=0x0000000000287EB8 "h"
 *   insn=0x0000000000287EB8 string=0x0000000000287EBC ""
 *   insn=0x0000000000287EB8 string=0x0000000000287FA4 "`R@"
 *   insn=0x0000000000287EC0 string=0x0000000000287EC4 ""
 *   insn=0x0000000000287EC4 string=0x0000000000287EC8 "a"
 *   insn=0x0000000000287ECC string=0x0000000000287ED0 "b"
 *   insn=0x0000000000287EDC string=0x0000000000287EE0 "&("
 *   insn=0x0000000000287EE4 string=0x0000000000287EE8 "B"
 *   insn=0x0000000000287EEC string=0x0000000000287EF0 "c(&"
 *   insn=0x0000000000287EF4 string=0x0000000000287EF8 "f"
 *   insn=0x0000000000287EF8 string=0x0000000000287EFC ""
 *   insn=0x0000000000287EFC string=0x0000000000287F00 "` !"
 *   insn=0x0000000000287F00 string=0x0000000000287F04 "B@b"
 *   insn=0x0000000000287F0C string=0x0000000000287F10 "&'"
 *   insn=0x0000000000287F10 string=0x0000000000287F14 "!"
 *   insn=0x0000000000287F14 string=0x0000000000287F18 "b"
 *   insn=0x0000000000287F1C string=0x0000000000287F20 "`R@"
 *   insn=0x0000000000287F20 string=0x0000000000287F24 "B(""
 *   insn=0x0000000000287F24 string=0x0000000000287F28 "B(%"
 *   insn=0x0000000000287F28 string=0x0000000000287F2C "@ &"
 *   insn=0x0000000000287F34 string=0x0000000000287F38 "c"
 *   insn=0x0000000000287F44 string=0x0000000000287F48 "`"
 *   insn=0x0000000000287F44 string=0x00000000001F7220 "0'"
 *   insn=0x0000000000287F50 string=0x0000000000287F54 ""
 *   insn=0x0000000000287F58 string=0x0000000000287F5C "&"
 *   insn=0x0000000000287F74 string=0x0000000000287F78 "h"
 *   insn=0x0000000000287F78 string=0x0000000000287F80 "`"
 *   insn=0x0000000000287F84 string=0x0000000000287F88 "h"
 *   insn=0x0000000000287F90 string=0x0000000000287F94 "bj"
 *   insn=0x0000000000287F98 string=0x0000000000287F9C "h"
 *   insn=0x0000000000287F9C string=0x0000000000287FA0 "c"
 *   insn=0x0000000000287FA4 string=0x0000000000287FA8 "`"
 *   insn=0x0000000000287FA8 string=0x0000000000287FB4 "h"
 *   insn=0x0000000000287FB4 string=0x0000000000287FB8 "("
 *   insn=0x0000000000287FB8 string=0x0000000000287FBC "`"
 *   insn=0x0000000000287FB8 string=0x000000000028801C "`V@"
 *   insn=0x0000000000287FC4 string=0x0000000000287FC8 "bbA"
 *   insn=0x0000000000287FCC string=0x0000000000287FD0 "a"
 *   insn=0x0000000000287FD0 string=0x0000000000287FD4 "A(!"
 *   insn=0x0000000000287FD4 string=0x0000000000287FD8 "   "
 *   insn=0x0000000000287FD8 string=0x0000000000287FDC "ab"
 *   insn=0x0000000000287FE0 string=0x0000000000287FE4 "h"
 *   insn=0x0000000000287FE8 string=0x0000000000287FEC "`b"
 *   insn=0x0000000000287FEC string=0x0000000000287FF0 "\t"
 *   insn=0x0000000000287FFC string=0x0000000000288000 "!"
 *   insn=0x0000000000288000 string=0x0000000000288224 "+"
 *   insn=0x0000000000288020 string=0x0000000000288024 "h"
 *   insn=0x0000000000288024 string=0x0000000000288028 "`"
 *   insn=0x0000000000288028 string=0x0000000000288034 "`N@"
 *   insn=0x000000000028802C string=0x0000000000288030 "0"
 *   insn=0x0000000000288030 string=0x00000000001FD0F0 "0'"
 *   insn=0x0000000000288038 string=0x000000000028803C "`""
 *   insn=0x0000000000288044 string=0x0000000000288048 "`N@"
 *   insn=0x0000000000288044 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000288048 string=0x000000000028804C "@"
 *   insn=0x0000000000288050 string=0x00000000001F4FA0 "P'"
 *   insn=0x0000000000288054 string=0x0000000000288058 "b"
 *   insn=0x0000000000288058 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000288060 string=0x00000000001FAB30 "0'"
 *   insn=0x0000000000288068 string=0x000000000028806C ""
 *   insn=0x0000000000288070 string=0x0000000000288074 "h"
 *   insn=0x0000000000288074 string=0x0000000000288078 ""
 *   insn=0x0000000000288080 string=0x0000000000588C40 "particle_blast"
 *   insn=0x00000000002880AC string=0x00000000002880B0 "\"
 *   insn=0x00000000002880B0 string=0x00000000001F5A20 "P'"
 *   insn=0x00000000002880B8 string=0x00000000002880BC "@"
 *   insn=0x00000000002880BC string=0x00000000002880C0 ""
 *   insn=0x00000000002880C0 string=0x00000000002880C4 ""
 *   insn=0x00000000002880C8 string=0x00000000002880CC ""
 *   insn=0x00000000002880CC string=0x00000000002880D0 ""
 *   insn=0x00000000002880DC string=0x00000000002880E0 ")"
 *   insn=0x00000000002880EC string=0x00000000002880F0 "h"
 *   insn=0x00000000002880F4 string=0x00000000002880F8 "\t9@"
 *   insn=0x00000000002880F8 string=0x00000000002880FC "y@"
 *   insn=0x0000000000288124 string=0x0000000000288128 "!"
 *   insn=0x0000000000288128 string=0x000000000028812C "  ""
 *   insn=0x0000000000288138 string=0x000000000028813C "\n"
 *   insn=0x000000000028814C string=0x0000000000288150 "#8#"
 *   insn=0x0000000000288150 string=0x0000000000288154 "c"
 *   insn=0x0000000000288154 string=0x0000000000288158 "` ""
 *   insn=0x000000000028815C string=0x0000000000288160 ")"
 *   insn=0x0000000000288164 string=0x0000000000288168 "\t"
 *   insn=0x0000000000288178 string=0x000000000028817C "\t"
 *   insn=0x000000000028817C string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000288194 string=0x0000000000288198 "r"
 *   insn=0x0000000000288198 string=0x000000000028819C "h"
 *   insn=0x00000000002881A0 string=0x00000000002881A4 ""
 *   insn=0x00000000002881A4 string=0x00000000002881A8 ""
 *   insn=0x00000000002881BC string=0x00000000002881C0 "@"
 *   insn=0x00000000002881C0 string=0x00000000002881C4 ""
 *   insn=0x00000000002881C4 string=0x00000000002881C8 ""
 *   insn=0x00000000002881CC string=0x00000000002881D0 ""
 *   insn=0x00000000002881D0 string=0x00000000002881D4 ""
 *   insn=0x00000000002881D8 string=0x00000000002881DC "x"
 *   insn=0x00000000002881E0 string=0x00000000002881E4 ")=G"
 *   insn=0x00000000002881E4 string=0x00000000002881E8 "!"
 *   insn=0x00000000002881EC string=0x00000000002881F0 "\t"
 *   insn=0x00000000002881EC string=0x0000000000288204 "\t"
 *   insn=0x00000000002881F0 string=0x00000000002881F4 "*"
 *   insn=0x00000000002881F4 string=0x00000000002881F8 "\n"
 *   insn=0x0000000000288200 string=0x0000000000288210 "?"
 *   insn=0x0000000000288204 string=0x0000000000288208 "*"
 *   insn=0x0000000000288208 string=0x000000000028820C "\n"
 *   insn=0x0000000000288218 string=0x000000000028821C "b"
 *   insn=0x0000000000288224 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028822C string=0x0000000000288230 "("
 *   insn=0x0000000000288230 string=0x0000000000288234 "\t\t@"
 *   insn=0x0000000000288234 string=0x0000000000288238 ")"
 *   insn=0x0000000000288238 string=0x000000000028823C "\t\t"
 *   insn=0x0000000000288240 string=0x0000000000288244 "\t"
 *   insn=0x0000000000288244 string=0x0000000000288248 ")"
 *   insn=0x000000000028824C string=0x0000000000288250 " "
 *   insn=0x0000000000288250 string=0x0000000000288254 ""
 *   insn=0x0000000000288264 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000288278 string=0x000000000028827C ")"
 *   insn=0x000000000028828C string=0x0000000000288290 ")=G"
 *   insn=0x0000000000288290 string=0x0000000000288294 "!"
 *   insn=0x0000000000288298 string=0x000000000028829C "\t"
 *   insn=0x0000000000288298 string=0x00000000002882C8 "\t"
 *   insn=0x000000000028829C string=0x00000000002882A0 "*"
 *   insn=0x00000000002882A0 string=0x00000000002882A4 "\n"
 *   insn=0x00000000002882A8 string=0x00000000002882AC "?"
 *   insn=0x00000000002882B4 string=0x00000000002882B8 ";"
 *   insn=0x00000000002882C0 string=0x00000000002882F0 "@"
 *   insn=0x00000000002882C8 string=0x00000000002882CC "*"
 *   insn=0x00000000002882CC string=0x00000000002882D0 "\n"
 *   insn=0x00000000002882D0 string=0x00000000002882D4 "?"
 *   insn=0x00000000002882F0 string=0x00000000002882F4 ""
 *   insn=0x00000000002882F4 string=0x00000000002882F8 ""
 *   insn=0x00000000002882FC string=0x0000000000288300 ""
 *   insn=0x0000000000288300 string=0x0000000000288304 ""
 *   insn=0x000000000028830C string=0x0000000000288310 "m"
 *   insn=0x000000000028831C string=0x00000000001F6F80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::MagicExplosionComponent::Update(Caver::MagicExplosionComponent *this, float a2)
{
  int v4; // w8
  float v5; // s0
  float v6; // s1
  float v7; // s5
  float v8; // s2
  double v9; // d4
  float v10; // s6
  Caver::SceneObject *result; // x0
  float v12; // s3
  float v13; // s1
  float v14; // s0
  float v15; // s0
  float v16; // s1
  __int64 v17; // x8
  Caver::CollisionShapeComponent *v18; // x0
  Caver::SoundEffectComponent *v19; // x0
  Caver::SceneObject *v20; // x20
  int v21; // w8
  __int64 v22; // x0
  int v23; // w8
  void *v24; // x0
  __int64 v25; // x8
  Caver::SceneObject *v26; // x20
  __int64 v27; // x9
  int v28; // w9
  _DWORD *v29; // x8
  Caver::SceneObject *v30; // x0
  int v31; // w8
  unsigned int *v32; // x8
  int v33; // w9
  __int64 v34; // [xsp+8h] [xbp-68h] BYREF
  int v35; // [xsp+10h] [xbp-60h]
  Caver::SceneObject *v36; // [xsp+20h] [xbp-50h] BYREF
  _QWORD v37[3]; // [xsp+28h] [xbp-48h] BYREF

  v37[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 242) )
  {
    v4 = *((unsigned __int8 *)this + 240);
    v5 = *((float *)this + 59) + a2;
    *((float *)this + 59) = v5;
    if ( v4 )
    {
      v6 = *((float *)this + 58);
      v7 = *((float *)this + 64);
      v9 = *((float *)this + 63) + a2 * -2.51327416;
      v10 = v6 * 0.6;
      if ( (float)(*((float *)this + 62) + (float)((float)(v6 * a2) + (float)(v6 * a2))) <= v6 )
        v6 = *((float *)this + 62) + (float)((float)(v6 * a2) + (float)(v6 * a2));
      v8 = a2 * 1.25663708 + *((float *)this + 61);
      *((float *)this + 61) = v8;
      *((float *)this + 62) = v6;
      result = (Caver::SceneObject *)*((_QWORD *)this + 20);
      if ( (float)((float)((float)(v10 * a2) + (float)(v10 * a2)) + v7) <= v10 )
        v13 = (float)((float)(v10 * a2) + (float)(v10 * a2)) + v7;
      else
        v13 = v10;
      v12 = v9;
      *((float *)this + 63) = v12;
      *((float *)this + 64) = v13;
      if ( result )
      {
        result = (Caver::SceneObject *)Caver::DamageComponent::ResolvePotentialImpacts(result, 1);
        v5 = *((float *)this + 59);
      }
      if ( v5 > 0.5 )
        *((_BYTE *)this + 240) = 0;
      return result;
    }
  }
  else
  {
    v14 = *((float *)this + 56);
    *((float *)this + 54) = v14 / *((float *)this + 57);
    *((_DWORD *)this + 55) = 1086918619;
    *((_QWORD *)this + 26) = 1065353216;
    *((_WORD *)this + 120) = 0;
    *((_BYTE *)this + 242) = 1;
    *((float *)this + 58) = v14 * 1.5;
    *((float *)this + 59) = a2 + 0.0;
  }
  result = (Caver::SceneObject *)*((_QWORD *)this + 20);
  if ( result )
    result = (Caver::SceneObject *)Caver::DamageComponent::ResolvePotentialImpacts(result, 1);
  if ( !*((_BYTE *)this + 241) )
  {
    v18 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 21);
    *((_BYTE *)this + 241) = 1;
    if ( v18 )
      Caver::CollisionShapeComponent::SetEnabled(v18);
    v19 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 19);
    if ( v19
      || (Caver::ComponentOutletBase::Connect((Caver::MagicExplosionComponent *)((char *)this + 136), this),
          (v19 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 19)) != 0) )
    {
      Caver::SoundEffectComponent::Play(v19);
    }
    v20 = (Caver::SceneObject *)operator new(0x128u);
    Caver::SceneObject::SceneObject(v20);
    v21 = *((_DWORD *)v20 + 2);
    v36 = v20;
    *((_DWORD *)v20 + 2) = v21 + 1;
    sub_566BB8((int)v37, "particle_blast");
    Caver::ObjectLibrary::TemplateForName();
    Caver::SceneObject::InitWithTemplate(v20);
    v22 = v34;
    if ( v34 )
    {
      v23 = *(_DWORD *)(v34 + 8) - 1;
      *(_DWORD *)(v34 + 8) = v23;
      if ( !v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    }
    v24 = (void *)(v37[0] - 24LL);
    if ( (__int64 *)(v37[0] - 24LL) != &qword_6FD2E0 )
    {
      v32 = (unsigned int *)(v37[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v33 = __ldaxr(v32);
        while ( __stlxr(v33 - 1, v32) );
      }
      else
      {
        v33 = (*v32)--;
      }
      if ( v33 <= 0 )
        operator delete(v24);
    }
    v25 = *((_QWORD *)this + 5);
    v26 = v36;
    v27 = *(_QWORD *)(v25 + 112);
    LODWORD(v25) = *(_DWORD *)(v25 + 120);
    v34 = v27;
    v35 = v25;
    Caver::Vector2::Vector2((Caver::Vector2 *)v37, (const Caver::Vector3 *)&v34);
    if ( fabsf(*(float *)v37 - *((float *)v26 + 28)) <= 0.0001 )
    {
      v29 = (_DWORD *)((char *)v26 + 116);
      v30 = v26;
      if ( fabsf(*((float *)v37 + 1) - *((float *)v26 + 29)) <= 0.0001 )
      {
LABEL_34:
        *((_DWORD *)v26 + 30) = v35;
        Caver::SceneObject::SetInstanceScaling(v30, 1.5);
        (*(void (__fastcall **)(_QWORD, Caver::SceneObject **))(**(_QWORD **)(*((_QWORD *)this + 5) + 32LL) + 40LL))(
          *(_QWORD *)(*((_QWORD *)this + 5) + 32LL),
          &v36);
        *((_DWORD *)this + 88) = 0;
        result = v36;
        if ( v36 )
        {
          v31 = *((_DWORD *)v36 + 2) - 1;
          *((_DWORD *)v36 + 2) = v31;
          if ( !v31 )
            result = (Caver::SceneObject *)(*(__int64 (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)result + 8LL))(result);
        }
        goto LABEL_16;
      }
      v28 = HIDWORD(v37[0]);
    }
    else
    {
      v28 = HIDWORD(v37[0]);
      v29 = (_DWORD *)((char *)v26 + 116);
    }
    *((_DWORD *)v26 + 28) = v37[0];
    *v29 = v28;
    v30 = v26;
    if ( !*((_BYTE *)v26 + 180) )
    {
      Caver::SceneObject::RegisterForWorldBoundsUpdate(v26);
      *((_BYTE *)v26 + 180) = 1;
      v30 = v36;
    }
    goto LABEL_34;
  }
LABEL_16:
  v15 = *((float *)this + 58);
  v16 = *((float *)this + 88) + (float)((float)(v15 * a2) / 0.3);
  *((float *)this + 88) = v16;
  if ( v16 > v15 )
  {
    v17 = *((_QWORD *)this + 5);
    *((float *)this + 88) = v15;
    *(_BYTE *)(v17 + 232) = 1;
  }
  return result;
}

