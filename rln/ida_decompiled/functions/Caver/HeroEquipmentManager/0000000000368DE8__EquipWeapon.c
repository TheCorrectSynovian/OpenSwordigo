/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368DE8
 * Mangled: _ZN5Caver20HeroEquipmentManager11EquipWeaponERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001F6AD0  Caver::HeroEquipmentManager::EquipWeapon(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7920  Caver::CharacterState::WeaponDamageRange(void)
 *   0x00000000001F7F30  std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SceneObject>*,std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>>,boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002016B0  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000261410  Caver::SwingableWeaponControllerComponent::Interface(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 128
 *   insn=0x0000000000368E04 string=0x0000000000368E08 "["
 *   insn=0x0000000000368E08 string=0x0000000000368E0C "h"
 *   insn=0x0000000000368E38 string=0x0000000000368E3C "@"
 *   insn=0x0000000000368E3C string=0x0000000000368E40 ""
 *   insn=0x0000000000368E40 string=0x0000000000368E44 ""
 *   insn=0x0000000000368E48 string=0x0000000000368E4C ""
 *   insn=0x0000000000368E4C string=0x0000000000368E50 ""
 *   insn=0x0000000000368E6C string=0x0000000000368E70 "?"
 *   insn=0x0000000000368E74 string=0x0000000000369090 "h"
 *   insn=0x0000000000368E84 string=0x0000000000368E88 ":"
 *   insn=0x0000000000368E88 string=0x0000000000368E90 "#"
 *   insn=0x0000000000368E88 string=0x000000000058FA70 "weapon_"
 *   insn=0x0000000000368E90 string=0x0000000000368F1C "3"
 *   insn=0x0000000000368E94 string=0x0000000000368E98 ")=G"
 *   insn=0x0000000000368E98 string=0x0000000000368E9C "!"
 *   insn=0x0000000000368EA0 string=0x0000000000368EA4 "\t"
 *   insn=0x0000000000368EA0 string=0x0000000000368EDC "\t"
 *   insn=0x0000000000368EA4 string=0x0000000000368EA8 "*"
 *   insn=0x0000000000368EA8 string=0x0000000000368EAC "\n"
 *   insn=0x0000000000368EB0 string=0x0000000000368EB4 ""
 *   insn=0x0000000000368EB4 string=0x0000000000368EE8 "?"
 *   insn=0x0000000000368EB8 string=0x0000000000368EBC ")=G"
 *   insn=0x0000000000368EBC string=0x0000000000368EC0 "!"
 *   insn=0x0000000000368EC4 string=0x0000000000368EC8 "\t"
 *   insn=0x0000000000368EC4 string=0x0000000000368EFC "\t"
 *   insn=0x0000000000368EC8 string=0x0000000000368ECC "*"
 *   insn=0x0000000000368ECC string=0x0000000000368ED0 "\n"
 *   insn=0x0000000000368ED8 string=0x0000000000368F08 "?"
 *   insn=0x0000000000368EDC string=0x0000000000368EE0 "*"
 *   insn=0x0000000000368EE0 string=0x0000000000368EE4 "\n"
 *   insn=0x0000000000368EF0 string=0x0000000000368EF4 ","
 *   insn=0x0000000000368EF4 string=0x0000000000368EF8 "#"
 *   insn=0x0000000000368EFC string=0x0000000000368F00 "*"
 *   insn=0x0000000000368F00 string=0x0000000000368F04 "\n"
 *   insn=0x0000000000368F08 string=0x0000000000368F0C "L"
 *   insn=0x0000000000368F10 string=0x0000000000368F14 "$"
 *   insn=0x0000000000368F20 string=0x0000000000368F24 "h\n@"
 *   insn=0x0000000000368F20 string=0x0000000000368F30 "h"
 *   insn=0x0000000000368F24 string=0x0000000000368F28 ""
 *   insn=0x0000000000368F28 string=0x0000000000368F2C "h\n"
 *   insn=0x0000000000368F30 string=0x0000000000368F34 "Q@"
 *   insn=0x0000000000368F44 string=0x0000000000369064 "h\n@"
 *   insn=0x0000000000368F50 string=0x0000000000368F54 "u"
 *   insn=0x0000000000368F60 string=0x0000000000368F64 "3"
 *   insn=0x0000000000368F64 string=0x0000000000368F68 "`B"
 *   insn=0x0000000000368F8C string=0x0000000000368F90 "A"
 *   insn=0x0000000000368F98 string=0x0000000000368F9C "hN@"
 *   insn=0x0000000000368F9C string=0x0000000000368FA0 "("
 *   insn=0x0000000000368FA0 string=0x0000000000368FA4 ""
 *   insn=0x0000000000368FAC string=0x0000000000368FB0 "\t\t@"
 *   insn=0x0000000000368FB0 string=0x0000000000368FB4 ")"
 *   insn=0x0000000000368FB4 string=0x0000000000368FB8 "\t\t"
 *   insn=0x0000000000368FBC string=0x0000000000368FC0 "?"
 *   insn=0x0000000000368FC0 string=0x0000000000368FC4 "@"
 *   insn=0x0000000000368FC8 string=0x0000000000368FCC "("
 *   insn=0x0000000000368FD0 string=0x0000000000368FD4 "\t\t@"
 *   insn=0x0000000000368FD0 string=0x0000000000368FE0 "( "
 *   insn=0x0000000000368FD4 string=0x0000000000368FD8 ")"
 *   insn=0x0000000000368FD8 string=0x0000000000368FDC "\t\t"
 *   insn=0x0000000000368FF8 string=0x00000000001F7F30 "0'"
 *   insn=0x0000000000369000 string=0x0000000000369004 "!hF"
 *   insn=0x0000000000369004 string=0x0000000000369008 "v]"
 *   insn=0x0000000000369004 string=0x000000000021C148 "@&"
 *   insn=0x000000000036900C string=0x0000000000369010 ":"
 *   insn=0x000000000036901C string=0x0000000000369020 "@:"
 *   insn=0x0000000000369020 string=0x0000000000369024 ""
 *   insn=0x0000000000369020 string=0x00000000001F7920 "0'"
 *   insn=0x0000000000369024 string=0x0000000000369028 ""
 *   insn=0x0000000000369028 string=0x000000000036902C "@"
 *   insn=0x000000000036902C string=0x0000000000369030 "@"
 *   insn=0x0000000000369038 string=0x000000000036903C "@"
 *   insn=0x000000000036903C string=0x0000000000369040 ""
 *   insn=0x0000000000369040 string=0x0000000000369044 ""
 *   insn=0x0000000000369048 string=0x000000000036904C ""
 *   insn=0x000000000036904C string=0x0000000000369050 ""
 *   insn=0x0000000000369064 string=0x0000000000369068 ""
 *   insn=0x0000000000369068 string=0x000000000036906C "h\n"
 *   insn=0x0000000000369070 string=0x0000000000369074 "h"
 *   insn=0x0000000000369070 string=0x0000000000369084 "9#"
 *   insn=0x0000000000369078 string=0x000000000036907C ""
 *   insn=0x0000000000369084 string=0x0000000000369088 "?"
 *   insn=0x0000000000369098 string=0x000000000036909C "!"
 *   insn=0x00000000003690C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003690D0 string=0x00000000003690D4 "(a"
 *   insn=0x00000000003690D8 string=0x00000000003690DC "@"
 *   insn=0x00000000003690E0 string=0x00000000003690E4 "J=G"
 *   insn=0x00000000003690E4 string=0x00000000003690E8 ")!"
 *   insn=0x00000000003690EC string=0x00000000003690F0 "*"
 *   insn=0x00000000003690EC string=0x0000000000369104 "*"
 *   insn=0x00000000003690F0 string=0x00000000003690F4 "K"
 *   insn=0x00000000003690F4 string=0x00000000003690F8 "+"
 *   insn=0x0000000000369104 string=0x0000000000369108 "K"
 *   insn=0x0000000000369108 string=0x000000000036910C "+"
 *   insn=0x0000000000369114 string=0x0000000000369118 "_"
 *   insn=0x0000000000369118 string=0x000000000036911C "L"
 *   insn=0x0000000000369138 string=0x000000000036913C "\t\t@"
 *   insn=0x0000000000369138 string=0x00000000003691C8 "h\n@"
 *   insn=0x000000000036913C string=0x0000000000369140 ")"
 *   insn=0x0000000000369140 string=0x0000000000369144 "\t\t"
 *   insn=0x0000000000369148 string=0x000000000036914C "\t"
 *   insn=0x000000000036914C string=0x0000000000369150 ")"
 *   insn=0x0000000000369154 string=0x0000000000369158 " "
 *   insn=0x0000000000369158 string=0x000000000036915C ""
 *   insn=0x0000000000369174 string=0x0000000000369178 ")=G"
 *   insn=0x0000000000369178 string=0x000000000036917C "!"
 *   insn=0x000000000036917C string=0x0000000000369180 "I"
 *   insn=0x0000000000369180 string=0x0000000000369184 "\t"
 *   insn=0x0000000000369180 string=0x00000000003691A8 "\t"
 *   insn=0x0000000000369184 string=0x0000000000369188 "*"
 *   insn=0x0000000000369188 string=0x000000000036918C "\n"
 *   insn=0x0000000000369190 string=0x0000000000369194 "?"
 *   insn=0x00000000003691A0 string=0x00000000003691A4 "\t"
 *   insn=0x00000000003691A8 string=0x00000000003691AC "*"
 *   insn=0x00000000003691AC string=0x00000000003691B0 "\n"
 *   insn=0x00000000003691B0 string=0x00000000003691B4 "?"
 *   insn=0x00000000003691B4 string=0x00000000003691B8 "-"
 *   insn=0x00000000003691C8 string=0x00000000003691CC ""
 *   insn=0x00000000003691CC string=0x00000000003691D0 "h\n"
 *   insn=0x00000000003691D4 string=0x00000000003691D8 "h"
 *   insn=0x00000000003691D8 string=0x00000000003691DC ""
 *   insn=0x00000000003691EC string=0x00000000003691F0 "W"
 *   insn=0x00000000003691FC string=0x0000000000369200 "("
 *   insn=0x0000000000369204 string=0x0000000000369208 "!hF"
 *   insn=0x0000000000369218 string=0x000000000036921C "3"
 *   insn=0x000000000036922C string=0x0000000000369230 ""
 *   insn=0x0000000000369230 string=0x0000000000369234 ""
 *   insn=0x0000000000369234 string=0x0000000000369238 "`"
 *   insn=0x0000000000369238 string=0x000000000036923C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEquipmentManager::EquipWeapon(__int64 result, _QWORD *a2)
{
  _QWORD *v2; // x20
  __int64 *v4; // x19
  __int64 *v5; // x23
  __int64 *v6; // x24
  int v7; // w8
  __int64 v8; // x8
  Caver::SwingableWeaponControllerComponent **v9; // x24
  Caver::SwingableWeaponControllerComponent **v10; // x25
  const char *v11; // x26
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  Caver::SwingableWeaponControllerComponent *v16; // x19
  char *v17; // x0
  void *v18; // x0
  __int64 v19; // x8
  Caver::SceneObject *v20; // x8
  Caver::SceneObject **v21; // x1
  const char *v22; // x28
  _DWORD *v23; // x26
  __int64 v24; // x0
  int v25; // w8
  int v26; // w8
  __int64 v27; // [xsp+20h] [xbp-70h] BYREF
  Caver::SceneObject *v28[3]; // [xsp+28h] [xbp-68h] BYREF

  v2 = (_QWORD *)result;
  v28[2] = *(Caver::SceneObject **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(__int64 **)(result + 24);
  v5 = *(__int64 **)(result + 32);
  if ( v5 != v4 )
  {
    v6 = *(__int64 **)(result + 24);
    do
    {
      result = *v6;
      if ( *v6 )
      {
        v7 = *(_DWORD *)(result + 8) - 1;
        *(_DWORD *)(result + 8) = v7;
        if ( !v7 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
      }
      ++v6;
    }
    while ( v5 != v6 );
  }
  v8 = v2[2];
  v2[4] = v4;
  v10 = *(Caver::SwingableWeaponControllerComponent ***)(v8 + 192);
  v9 = *(Caver::SwingableWeaponControllerComponent ***)(v8 + 200);
  if ( v10 != v9 )
  {
    v11 = "weapon_";
    do
    {
      v16 = *v10;
      if ( *v10 )
        ++*((_DWORD *)v16 + 2);
      result = (*(__int64 (__fastcall **)(Caver::SwingableWeaponControllerComponent *, __int64 (__fastcall *(__fastcall *)(Caver::SwingableWeaponControllerComponent *))(Caver::SwingableWeaponControllerComponent *__hidden)))(*(_QWORD *)v16 + 160LL))(
                 v16,
                 Caver::SwingableWeaponControllerComponent::Interface);
      if ( (result & 1) != 0 )
      {
        sub_56A528(&v27, *a2 + 8LL);
        ((void (__fastcall *)(Caver::SceneObject **__return_ptr, const char *, __int64 *))loc_25A030)(v28, v11, &v27);
        sub_56A6A8((char *)v16 + 144);
        v17 = (char *)v28[0] - 24;
        if ( (__int64 *)v28[0] - 3 != &qword_6FD2E0 )
        {
          v12 = (unsigned int *)((char *)v28[0] - 8);
          if ( &pthread_create )
          {
            do
              v13 = __ldaxr(v12);
            while ( __stlxr(v13 - 1, v12) );
          }
          else
          {
            v13 = (*v12)--;
          }
          if ( v13 <= 0 )
            operator delete(v17);
        }
        v18 = (void *)(v27 - 24);
        if ( (__int64 *)(v27 - 24) != &qword_6FD2E0 )
        {
          v14 = (unsigned int *)(v27 - 8);
          if ( &pthread_create )
          {
            do
              v15 = __ldaxr(v14);
            while ( __stlxr(v15 - 1, v14) );
          }
          else
          {
            v15 = (*v14)--;
          }
          if ( v15 <= 0 )
            operator delete(v18);
        }
        result = Caver::SwingableWeaponControllerComponent::CreateWeapon(v16);
        v19 = *((_QWORD *)v16 + 19);
        if ( v19 )
        {
          v20 = *(Caver::SceneObject **)(v19 + 40);
          v28[0] = v20;
          if ( v20 )
            ++*((_DWORD *)v20 + 2);
          v21 = (Caver::SceneObject **)v2[4];
          if ( v21 == (Caver::SceneObject **)v2[5] )
          {
            v22 = v11;
            std::vector<boost::intrusive_ptr<Caver::SceneObject>>::_M_insert_aux();
          }
          else
          {
            v22 = v11;
            *v21 = v20;
            if ( v20 )
              ++*((_DWORD *)v20 + 2);
            v2[4] = v21 + 1;
          }
          v23 = (_DWORD *)Caver::SceneObject::ComponentWithInterface(v28[0], (__int64)Caver::DamageComponent::Interface);
          if ( v23 && *v2 )
          {
            v24 = Caver::CharacterState::WeaponDamageRange((Caver::CharacterState *)(*v2 + 16LL));
            v23[41] = v24;
            v23[42] = HIDWORD(v24) - v24;
            v23[43] = v24;
            v23[44] = v24;
          }
          result = (__int64)v28[0];
          if ( v28[0] )
          {
            v25 = *((_DWORD *)v28[0] + 2) - 1;
            *((_DWORD *)v28[0] + 2) = v25;
            if ( !v25 )
              result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
          }
          v11 = v22;
        }
      }
      v26 = *((_DWORD *)v16 + 2) - 1;
      *((_DWORD *)v16 + 2) = v26;
      if ( !v26 )
        result = (*(__int64 (__fastcall **)(Caver::SwingableWeaponControllerComponent *))(*(_QWORD *)v16 + 8LL))(v16);
      ++v10;
    }
    while ( v10 != v9 );
  }
  return result;
}

