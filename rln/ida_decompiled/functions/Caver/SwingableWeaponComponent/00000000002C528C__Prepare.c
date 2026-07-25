/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C528C
 * Mangled: _ZN5Caver24SwingableWeaponComponent7PrepareEv
 * Demangled: Caver::SwingableWeaponComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 19
 *   0x00000000001F4950  Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F74B0  Caver::SceneObject::WorldMatrix(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FBDE0  Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x00000000001FED20  Caver::SwingableWeaponComponent::SetGlowIntensity(float)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002039A0  Caver::Matrix4::RotationX(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x0000000000226704  Caver::ModelComponent::className(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 112
 *   insn=0x00000000002C52A0 string=0x00000000002C52A4 "U"
 *   insn=0x00000000002C52B4 string=0x00000000002C52B8 "`"
 *   insn=0x00000000002C52B8 string=0x00000000002C52BC "!"
 *   insn=0x00000000002C52C8 string=0x00000000002C52CC "\t\t@"
 *   insn=0x00000000002C52C8 string=0x00000000002C52D8 "`"
 *   insn=0x00000000002C52CC string=0x00000000002C52D0 ")"
 *   insn=0x00000000002C52D0 string=0x00000000002C52D4 "\t\t"
 *   insn=0x00000000002C52D8 string=0x00000000002C52DC "h"
 *   insn=0x00000000002C52E0 string=0x00000000002C52E4 "@"
 *   insn=0x00000000002C52E4 string=0x00000000002C52E8 ""
 *   insn=0x00000000002C52E8 string=0x00000000002C52EC ""
 *   insn=0x00000000002C52F0 string=0x00000000002C52F4 ""
 *   insn=0x00000000002C52F4 string=0x00000000002C52F8 ""
 *   insn=0x00000000002C5300 string=0x00000000002C5304 "`"
 *   insn=0x00000000002C5304 string=0x00000000002C5308 "!hF"
 *   insn=0x00000000002C5308 string=0x000000000021C148 "@&"
 *   insn=0x00000000002C5310 string=0x00000000002C5314 "@"
 *   insn=0x00000000002C5310 string=0x00000000002C5320 "h"
 *   insn=0x00000000002C5314 string=0x00000000002C5318 ""
 *   insn=0x00000000002C5318 string=0x00000000002C531C ""
 *   insn=0x00000000002C5320 string=0x00000000002C5324 "`"
 *   insn=0x00000000002C5324 string=0x00000000002C5328 "H"
 *   insn=0x00000000002C5328 string=0x00000000002C532C "\t\t@"
 *   insn=0x00000000002C532C string=0x00000000002C5330 ")"
 *   insn=0x00000000002C5330 string=0x00000000002C5334 "\t\t"
 *   insn=0x00000000002C5338 string=0x00000000002C533C "\t"
 *   insn=0x00000000002C5340 string=0x00000000002C5344 ")"
 *   insn=0x00000000002C5344 string=0x00000000002C5348 " "
 *   insn=0x00000000002C5348 string=0x00000000002C534C "`"
 *   insn=0x00000000002C5350 string=0x00000000002C5354 ""
 *   insn=0x00000000002C5350 string=0x00000000002C5384 "vn@"
 *   insn=0x00000000002C5354 string=0x00000000002C5358 "h"
 *   insn=0x00000000002C535C string=0x00000000002C5360 "`R@"
 *   insn=0x00000000002C5364 string=0x00000000002C5368 "`B"
 *   insn=0x00000000002C5370 string=0x00000000002C5374 "`R@"
 *   insn=0x00000000002C5370 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C5374 string=0x00000000002C5378 "`"
 *   insn=0x00000000002C537C string=0x00000000002C5380 "\"
 *   insn=0x00000000002C5380 string=0x00000000001FD0F0 "0'"
 *   insn=0x00000000002C5388 string=0x00000000002C538C "`""
 *   insn=0x00000000002C5394 string=0x00000000002C5398 "vn@"
 *   insn=0x00000000002C539C string=0x00000000002C5454 "h"
 *   insn=0x00000000002C53A0 string=0x00000000001FA350 "0'"
 *   insn=0x00000000002C53A4 string=0x00000000002C53A8 "!"
 *   insn=0x00000000002C53A8 string=0x000000000058A0F9 "weapon_trail"
 *   insn=0x00000000002C53C8 string=0x00000000002C53CC "y"
 *   insn=0x00000000002C53D4 string=0x00000000002C53D8 "@"
 *   insn=0x00000000002C53D8 string=0x00000000002C53DC ""
 *   insn=0x00000000002C53DC string=0x00000000002C53E0 ""
 *   insn=0x00000000002C53EC string=0x00000000002C53F0 "\t\t@"
 *   insn=0x00000000002C53F0 string=0x00000000002C53F4 ")"
 *   insn=0x00000000002C53F4 string=0x00000000002C53F8 "\t\t"
 *   insn=0x00000000002C53F8 string=0x00000000002C53FC "@"
 *   insn=0x00000000002C53FC string=0x00000000002C5424 "\t"
 *   insn=0x00000000002C5400 string=0x00000000002C5404 "@"
 *   insn=0x00000000002C5404 string=0x00000000002C5408 ""
 *   insn=0x00000000002C5408 string=0x00000000002C540C ""
 *   insn=0x00000000002C540C string=0x00000000002C5410 "a"
 *   insn=0x00000000002C5410 string=0x00000000002C5414 ""
 *   insn=0x00000000002C5414 string=0x00000000002C5418 ""
 *   insn=0x00000000002C541C string=0x00000000002C5420 ""
 *   insn=0x00000000002C5424 string=0x00000000002C5428 ")"
 *   insn=0x00000000002C542C string=0x00000000002C5430 " "
 *   insn=0x00000000002C5434 string=0x00000000002C5438 "`"
 *   insn=0x00000000002C543C string=0x00000000002C5440 "\t!"
 *   insn=0x00000000002C5440 string=0x00000000002C5444 ")"
 *   insn=0x00000000002C544C string=0x00000000002C5450 "A"
 *   insn=0x00000000002C5464 string=0x00000000002C5468 ":"
 *   insn=0x00000000002C5468 string=0x00000000002C546C "`"
 *   insn=0x00000000002C5468 string=0x00000000001F4950 "P'"
 *   insn=0x00000000002C5470 string=0x00000000002C5474 "+"
 *   insn=0x00000000002C5474 string=0x00000000002C5478 "`"
 *   insn=0x00000000002C5480 string=0x00000000002C5484 "("
 *   insn=0x00000000002C5480 string=0x00000000001F74B0 "0'"
 *   insn=0x00000000002C548C string=0x00000000002C5490 "D"
 *   insn=0x00000000002C549C string=0x00000000002C54A0 "|"
 *   insn=0x00000000002C54A8 string=0x00000000002C54AC "M"
 *   insn=0x00000000002C54AC string=0x00000000001FBDE0 "0'"
 *   insn=0x00000000002C54BC string=0x00000000002C551C "m"
 *   insn=0x00000000002C54D8 string=0x00000000002C54DC ")=G"
 *   insn=0x00000000002C54DC string=0x00000000002C54E0 "!"
 *   insn=0x00000000002C54E4 string=0x00000000002C54E8 "\t"
 *   insn=0x00000000002C54E4 string=0x00000000002C54FC "\t"
 *   insn=0x00000000002C54E8 string=0x00000000002C54EC "*"
 *   insn=0x00000000002C54EC string=0x00000000002C54F0 "\n"
 *   insn=0x00000000002C54F8 string=0x00000000002C5508 "?"
 *   insn=0x00000000002C54FC string=0x00000000002C5500 "*"
 *   insn=0x00000000002C5500 string=0x00000000002C5504 "\n"
 *   insn=0x00000000002C5508 string=0x00000000002C550C "L"
 *   insn=0x00000000002C551C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C5528 string=0x00000000002C552C "\t\t@"
 *   insn=0x00000000002C552C string=0x00000000002C5530 ")"
 *   insn=0x00000000002C5530 string=0x00000000002C5534 "\t\t"
 *   insn=0x00000000002C5534 string=0x00000000002C5538 "!"
 *   insn=0x00000000002C5538 string=0x00000000002C553C "\t"
 *   insn=0x00000000002C553C string=0x00000000002C5540 ")"
 *   insn=0x00000000002C5544 string=0x00000000002C5548 " "
 *   insn=0x00000000002C555C string=0x00000000002C5560 "\t!"
 *   insn=0x00000000002C5560 string=0x00000000002C5564 ")"
 *   insn=0x00000000002C5574 string=0x00000000002C5578 ")=G"
 *   insn=0x00000000002C5578 string=0x00000000002C557C "!"
 *   insn=0x00000000002C557C string=0x00000000002C5580 "i"
 *   insn=0x00000000002C5580 string=0x00000000002C5584 "\t"
 *   insn=0x00000000002C5580 string=0x00000000002C55AC "\t"
 *   insn=0x00000000002C5584 string=0x00000000002C5588 "*"
 *   insn=0x00000000002C5588 string=0x00000000002C558C "\n"
 *   insn=0x00000000002C5590 string=0x00000000002C5594 "?"
 *   insn=0x00000000002C5594 string=0x00000000002C5598 "l"
 *   insn=0x00000000002C55AC string=0x00000000002C55B0 "*"
 *   insn=0x00000000002C55B0 string=0x00000000002C55B4 "\n"
 *   insn=0x00000000002C55B4 string=0x00000000002C55B8 "?"
 *   insn=0x00000000002C55B8 string=0x00000000002C55BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::Prepare(Caver::SwingableWeaponComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  _DWORD *v4; // x0
  int v5; // w8
  __int64 v6; // x0
  _DWORD *v7; // x8
  int v8; // w9
  __int64 v9; // x22
  _DWORD *v10; // x0
  _DWORD *v11; // x8
  int v12; // w9
  int v13; // w8
  void *v14; // x0
  Caver::Matrix4 *v15; // x0
  unsigned int *v17; // x8
  int v18; // w9
  __int64 v19[8]; // [xsp+28h] [xbp-F8h] BYREF
  __int64 v20[8]; // [xsp+68h] [xbp-B8h] BYREF
  _QWORD v21[9]; // [xsp+A8h] [xbp-78h] BYREF

  v21[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 5),
         (__int64)Caver::TransformComponent::Interface);
  v3 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v4 = (_DWORD *)*((_QWORD *)this + 43);
  *((_QWORD *)this + 43) = v3;
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = Caver::SceneObject::ComponentWithInterface(
         *((Caver::SceneObject **)this + 5),
         (__int64)Caver::DamageComponent::Interface);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = (_DWORD *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = v6;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v7 + 8LL))(v7, v7);
      v6 = *((_QWORD *)this + 44);
    }
  }
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 188) )
    {
      *(_BYTE *)(v6 + 188) = 0;
      v6 = *((_QWORD *)this + 20);
      if ( v6
        || (Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 144), this),
            (v6 = *((_QWORD *)this + 20)) != 0) )
      {
        Caver::CollisionShapeComponent::SetEnabled((Caver::CollisionShapeComponent *)v6);
      }
    }
  }
  v9 = *((_QWORD *)this + 27);
  if ( v9
    || (v6 = Caver::ComponentOutletBase::Connect((Caver::SwingableWeaponComponent *)((char *)this + 200), this),
        (v9 = *((_QWORD *)this + 27)) != 0) )
  {
    Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v6);
    sub_566BB8((int)v19, "weapon_trail");
    Caver::TextureLibrary::TextureForName();
    v10 = (_DWORD *)v21[0];
    if ( v21[0] )
      ++*(_DWORD *)(v21[0] + 8LL);
    v11 = *(_DWORD **)(v9 + 128);
    *(_QWORD *)(v9 + 128) = v10;
    if ( v11 && (v12 = v11[2] - 1, (v11[2] = v12) == 0) )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
      v10 = (_DWORD *)v21[0];
      if ( v21[0] )
      {
LABEL_23:
        v13 = v10[2] - 1;
        v10[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    else if ( v10 )
    {
      goto LABEL_23;
    }
    v14 = (void *)(v19[0] - 24);
    if ( (__int64 *)(v19[0] - 24) != &qword_6FD2E0 )
    {
      v17 = (unsigned int *)(v19[0] - 8);
      if ( &pthread_create )
      {
        do
          v18 = __ldaxr(v17);
        while ( __stlxr(v18 - 1, v17) );
      }
      else
      {
        v18 = (*v17)--;
      }
      if ( v18 <= 0 )
        operator delete(v14);
    }
  }
  Caver::SwingableWeaponComponent::SetGlowColor();
  Caver::SwingableWeaponComponent::SetGlowIntensity(this, *((float *)this + 105));
  v15 = (Caver::Matrix4 *)Caver::SceneObject::WorldMatrix(v20, *((Caver::SceneObject **)this + 5));
  Caver::Matrix4::RotationX(v19, v15, 1.5708);
  C_Matrix4Mul((const float *)v20, (const float *)v19, (float *)v21);
  return Caver::SwingableWeaponComponent::UpdateTransform(this, (const Caver::Matrix4 *)v21);
}

