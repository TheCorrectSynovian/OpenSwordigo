/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C8AEC
 * Mangled: _ZN5Caver34SwingableWeaponControllerComponent12CreateWeaponEv
 * Demangled: Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *
 * Callers: 1
 *   0x00000000002016B0  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *
 * Callees: 20
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9B80  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x00000000001FB490  Caver::SceneObject::SetIdentifier(std::string const&)
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x00000000002036C0  Caver::SwingableWeaponControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000029EB14  Caver::SwingableWeaponComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 104
 *   insn=0x00000000002C8AFC string=0x00000000002C8B00 "U"
 *   insn=0x00000000002C8B0C string=0x00000000002C8B10 "`"
 *   insn=0x00000000002C8B10 string=0x00000000002C8B14 ""
 *   insn=0x00000000002C8B18 string=0x00000000002C8B1C "hN@"
 *   insn=0x00000000002C8B1C string=0x00000000002C8B20 ""
 *   insn=0x00000000002C8B28 string=0x00000000002C8B2C "-"
 *   insn=0x00000000002C8B2C string=0x00000000001FDFE0 "0'"
 *   insn=0x00000000002C8B3C string=0x00000000001F9B80 "0'"
 *   insn=0x00000000002C8B40 string=0x00000000002C8B44 "("
 *   insn=0x00000000002C8B44 string=0x00000000002C8B48 ""
 *   insn=0x00000000002C8B48 string=0x00000000002C8B4C ""
 *   insn=0x00000000002C8B4C string=0x00000000002C8B50 "h"
 *   insn=0x00000000002C8B54 string=0x00000000002C8B58 ""
 *   insn=0x00000000002C8B60 string=0x00000000002C8B64 ""
 *   insn=0x00000000002C8B68 string=0x00000000002C8B6C ""
 *   insn=0x00000000002C8B74 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C8B80 string=0x00000000001FAB30 "0'"
 *   insn=0x00000000002C8B8C string=0x00000000002C8B90 ""
 *   insn=0x00000000002C8B98 string=0x00000000005981DB "w"
 *   insn=0x00000000002C8BB0 string=0x00000000002C8BB4 "7"
 *   insn=0x00000000002C8BB4 string=0x00000000001FB490 "0'"
 *   insn=0x00000000002C8BBC string=0x00000000002C8BC0 ")"
 *   insn=0x00000000002C8BC8 string=0x00000000002C8BCC "!"
 *   insn=0x00000000002C8BDC string=0x00000000001F5A20 "P'"
 *   insn=0x00000000002C8BE0 string=0x00000000002C8BE4 "!"
 *   insn=0x00000000002C8BE4 string=0x000000000029EB14 "@""
 *   insn=0x00000000002C8BE8 string=0x00000000002C8BEC "}"
 *   insn=0x00000000002C8BFC string=0x00000000002C8C00 ""
 *   insn=0x00000000002C8C10 string=0x00000000002C8C14 "4"
 *   insn=0x00000000002C8C14 string=0x00000000002C8C38 "hN@"
 *   insn=0x00000000002C8C18 string=0x00000000002C8C1C ""
 *   insn=0x00000000002C8C28 string=0x00000000002C8C2C ""
 *   insn=0x00000000002C8C38 string=0x00000000002C8C3C "H"
 *   insn=0x00000000002C8C3C string=0x00000000002C8C40 "h"
 *   insn=0x00000000002C8C44 string=0x00000000002C8C48 "\t9@"
 *   insn=0x00000000002C8C48 string=0x00000000002C8C4C "y@"
 *   insn=0x00000000002C8C74 string=0x00000000002C8C78 "!"
 *   insn=0x00000000002C8C78 string=0x00000000002C8C7C "  ""
 *   insn=0x00000000002C8C88 string=0x00000000002C8C8C "\t"
 *   insn=0x00000000002C8C98 string=0x00000000002C8C9C "#8#"
 *   insn=0x00000000002C8C9C string=0x00000000002C8CA0 "c"
 *   insn=0x00000000002C8CA0 string=0x00000000002C8CA4 "` ""
 *   insn=0x00000000002C8CA4 string=0x00000000002C8CA8 "I"
 *   insn=0x00000000002C8CA8 string=0x00000000002C8CAC ")"
 *   insn=0x00000000002C8CB0 string=0x00000000002C8CB4 "\t"
 *   insn=0x00000000002C8CC0 string=0x00000000002C8CC4 "7"
 *   insn=0x00000000002C8CC4 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002C8CD4 string=0x00000000002C8CD8 "`"
 *   insn=0x00000000002C8CDC string=0x00000000002C8CE0 ","
 *   insn=0x00000000002C8CE0 string=0x00000000001F6190 "0'"
 *   insn=0x00000000002C8CE8 string=0x00000000002C8CEC "@"
 *   insn=0x00000000002C8CEC string=0x00000000002C8CF0 ""
 *   insn=0x00000000002C8CF0 string=0x00000000002C8CF4 ""
 *   insn=0x00000000002C8CF8 string=0x00000000002C8CFC ""
 *   insn=0x00000000002C8CFC string=0x00000000002C8D00 ""
 *   insn=0x00000000002C8D0C string=0x00000000002C8D10 "@"
 *   insn=0x00000000002C8D10 string=0x00000000002C8D14 ""
 *   insn=0x00000000002C8D14 string=0x00000000002C8D18 ""
 *   insn=0x00000000002C8D1C string=0x00000000002C8D20 ""
 *   insn=0x00000000002C8D20 string=0x00000000002C8D24 ""
 *   insn=0x00000000002C8D38 string=0x00000000002C8D94 "O"
 *   insn=0x00000000002C8D50 string=0x00000000002C8D54 ")=G"
 *   insn=0x00000000002C8D54 string=0x00000000002C8D58 "!"
 *   insn=0x00000000002C8D5C string=0x00000000002C8D60 "\t"
 *   insn=0x00000000002C8D5C string=0x00000000002C8D74 "\t"
 *   insn=0x00000000002C8D60 string=0x00000000002C8D64 "*"
 *   insn=0x00000000002C8D64 string=0x00000000002C8D68 "\n"
 *   insn=0x00000000002C8D70 string=0x00000000002C8D80 "?"
 *   insn=0x00000000002C8D74 string=0x00000000002C8D78 "*"
 *   insn=0x00000000002C8D78 string=0x00000000002C8D7C "\n"
 *   insn=0x00000000002C8D80 string=0x00000000002C8D84 "l"
 *   insn=0x00000000002C8D94 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C8DA4 string=0x00000000002C8DA8 ""
 *   insn=0x00000000002C8DAC string=0x00000000002C8DB0 "a"
 *   insn=0x00000000002C8DB4 string=0x00000000002C8DB8 ""
 *   insn=0x00000000002C8DC0 string=0x00000000002C8DC4 "."
 *   insn=0x00000000002C8DCC string=0x00000000002C8DD0 "J"
 *   insn=0x00000000002C8DD4 string=0x00000000002C8DD8 "(a"
 *   insn=0x00000000002C8DE4 string=0x00000000002C8DE8 "J=G"
 *   insn=0x00000000002C8DE8 string=0x00000000002C8DEC ")!"
 *   insn=0x00000000002C8DF0 string=0x00000000002C8DF4 "*"
 *   insn=0x00000000002C8DF0 string=0x00000000002C8E24 "*"
 *   insn=0x00000000002C8DF4 string=0x00000000002C8DF8 "K"
 *   insn=0x00000000002C8DF8 string=0x00000000002C8DFC "+"
 *   insn=0x00000000002C8E00 string=0x00000000002C8E04 "_"
 *   insn=0x00000000002C8E10 string=0x00000000002C8E14 "d"
 *   insn=0x00000000002C8E18 string=0x00000000002C8E1C "@"
 *   insn=0x00000000002C8E1C string=0x00000000002C8E20 " "
 *   insn=0x00000000002C8E1C string=0x00000000002C8E84 "@"
 *   insn=0x00000000002C8E24 string=0x00000000002C8E28 "K"
 *   insn=0x00000000002C8E28 string=0x00000000002C8E2C "+"
 *   insn=0x00000000002C8E2C string=0x00000000002C8E30 "_"
 *   insn=0x00000000002C8E48 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C8E50 string=0x00000000002C8EA8 "@"
 *   insn=0x00000000002C8E60 string=0x00000000002C8E64 " "
 *   insn=0x00000000002C8E84 string=0x00000000002C8E88 ""
 *   insn=0x00000000002C8E88 string=0x00000000002C8E8C ""
 *   insn=0x00000000002C8E90 string=0x00000000002C8E94 ""
 *   insn=0x00000000002C8E94 string=0x00000000002C8E98 ""
 *   insn=0x00000000002C8EA8 string=0x00000000002C8EAC ""
 *   insn=0x00000000002C8EAC string=0x00000000002C8EB0 ""
 *   insn=0x00000000002C8EB4 string=0x00000000002C8EB8 ""
 *   insn=0x00000000002C8EB8 string=0x00000000002C8EBC ""
 *   insn=0x00000000002C8EC8 string=0x00000000002C8ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SwingableWeaponControllerComponent::CreateWeapon(
        Caver::SwingableWeaponControllerComponent *this)
{
  Caver::SceneObject *v2; // x0
  __int64 v3; // x8
  __int64 v4; // x20
  int v5; // w8
  void *v6; // x0
  Caver::SceneObject *v7; // x20
  __int64 v8; // x0
  _DWORD *v9; // x20
  int v10; // w8
  __int64 v11; // x8
  Caver::SceneObject *v12; // x20
  __int64 v13; // x9
  float v14; // w9
  float *v15; // x8
  Caver::SceneObject *v16; // x0
  int v17; // w8
  __int64 v18; // x0
  int v19; // w8
  unsigned int *v20; // x8
  int v21; // w9
  __int64 v22; // [xsp+8h] [xbp-58h] BYREF
  int v23; // [xsp+10h] [xbp-50h]
  Caver::SceneObject *v24; // [xsp+20h] [xbp-40h]
  __int64 v25; // [xsp+28h] [xbp-38h]
  float v26; // [xsp+30h] [xbp-30h] BYREF
  float v27; // [xsp+34h] [xbp-2Ch]
  __int64 v28; // [xsp+38h] [xbp-28h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::SceneObject *)*((_QWORD *)this + 5);
  if ( *((_QWORD *)v2 + 4) )
  {
    v3 = *((_QWORD *)this + 19);
    if ( v3 )
    {
      Caver::SceneObject::RemoveChildObject(v2, *(Caver::SceneObject **)(v3 + 40), 1);
      v22 = 0;
      Caver::SwingableWeaponControllerComponent::SetWeaponComponent(this);
    }
    if ( *(_QWORD *)(*((_QWORD *)this + 18) - 24LL) )
    {
      Caver::ObjectLibrary::TemplateForName();
      if ( v25 )
      {
        v4 = operator new(0x128u);
        Caver::SceneObject::SceneObject((Caver::SceneObject *)v4);
        v5 = *(_DWORD *)(v4 + 8);
        v24 = (Caver::SceneObject *)v4;
        *(_BYTE *)(v4 + 24) = 0;
        *(_DWORD *)(v4 + 8) = v5 + 1;
        sub_566BB8((int)&v22, "w");
        Caver::SceneObject::SetIdentifier();
        v6 = (void *)(v22 - 24);
        if ( (__int64 *)(v22 - 24) != &qword_6FD2E0 )
        {
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
          if ( v21 <= 0 )
            operator delete(v6);
        }
        v7 = v24;
        Caver::SceneObject::InitWithTemplate(v24);
        v8 = Caver::SceneObject::ComponentWithInterface(v7, (__int64)Caver::SwingableWeaponComponent::Interface);
        v9 = (_DWORD *)v8;
        v22 = v8;
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        Caver::SwingableWeaponControllerComponent::SetWeaponComponent(this);
        if ( v9 )
        {
          v10 = v9[2] - 1;
          v9[2] = v10;
          if ( !v10 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
        }
        if ( !*((_QWORD *)this + 19) )
          goto LABEL_20;
        v11 = *((_QWORD *)this + 5);
        v12 = v24;
        v13 = *(_QWORD *)(v11 + 112);
        LODWORD(v11) = *(_DWORD *)(v11 + 120);
        v22 = v13;
        v23 = v11;
        Caver::Vector2::Vector2((Caver::Vector2 *)&v26, (const Caver::Vector3 *)&v22);
        if ( fabsf(v26 - *((float *)v12 + 28)) <= 0.0001 )
        {
          v15 = (float *)((char *)v12 + 116);
          if ( fabsf(v27 - *((float *)v12 + 29)) <= 0.0001 )
          {
LABEL_19:
            *((_DWORD *)v12 + 30) = v23;
            Caver::SceneObject::AddChildObject();
LABEL_20:
            v16 = v24;
            if ( v24 )
            {
              v17 = *((_DWORD *)v24 + 2) - 1;
              *((_DWORD *)v24 + 2) = v17;
              if ( !v17 )
                (*(void (__fastcall **)(Caver::SceneObject *))(*(_QWORD *)v16 + 8LL))(v16);
            }
            v18 = v25;
            if ( v25 )
            {
              v19 = *(_DWORD *)(v25 + 8) - 1;
              *(_DWORD *)(v25 + 8) = v19;
              if ( !v19 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
            }
            return;
          }
          v14 = v27;
        }
        else
        {
          v14 = v27;
          v15 = (float *)((char *)v12 + 116);
        }
        *((float *)v12 + 28) = v26;
        *v15 = v14;
        if ( !*((_BYTE *)v12 + 180) )
        {
          Caver::SceneObject::RegisterForWorldBoundsUpdate(v12);
          *((_BYTE *)v12 + 180) = 1;
        }
        goto LABEL_19;
      }
    }
  }
}

