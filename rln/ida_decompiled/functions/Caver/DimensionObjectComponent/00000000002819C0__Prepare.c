/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002819C0
 * Mangled: _ZN5Caver24DimensionObjectComponent7PrepareEv
 * Demangled: Caver::DimensionObjectComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F42A0  Caver::SceneObjectGroup::SceneObjectGroup(void)
 *   0x00000000001F49A0  Caver::Scene::GroupWithIdentifier(std::string const&,bool)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6070  Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7460  Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000200470  Caver::SceneObjectGroup::AddObject(Caver::SceneObject *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000281D20  Caver::DimensionObjectComponent::Clone(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 98
 *   insn=0x00000000002819D0 string=0x00000000002819D4 "U"
 *   insn=0x00000000002819E0 string=0x00000000002819E4 "h"
 *   insn=0x00000000002819E8 string=0x00000000002819EC "a"
 *   insn=0x00000000002819EC string=0x000000000058EB19 "dimension"
 *   insn=0x00000000002819F8 string=0x00000000002819FC "o"
 *   insn=0x0000000000281A10 string=0x00000000001F49A0 "P'"
 *   insn=0x0000000000281A14 string=0x0000000000281A18 "6#"
 *   insn=0x0000000000281A28 string=0x0000000000281B24 "\t#"
 *   insn=0x0000000000281A2C string=0x0000000000281A30 " "
 *   insn=0x0000000000281A30 string=0x0000000000281AD4 "a"
 *   insn=0x0000000000281A38 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000281A44 string=0x00000000001F42A0 "P'"
 *   insn=0x0000000000281A50 string=0x0000000000281A54 ""
 *   insn=0x0000000000281A58 string=0x0000000000281A5C " "
 *   insn=0x0000000000281A5C string=0x0000000000281A60 "@"
 *   insn=0x0000000000281A5C string=0x0000000000281A80 "a"
 *   insn=0x0000000000281A60 string=0x0000000000281A64 ""
 *   insn=0x0000000000281A64 string=0x0000000000281A68 ""
 *   insn=0x0000000000281A6C string=0x0000000000281A70 ""
 *   insn=0x0000000000281A70 string=0x0000000000281A74 ""
 *   insn=0x0000000000281A8C string=0x0000000000281A90 "J"
 *   insn=0x0000000000281A98 string=0x0000000000281A9C "u"
 *   insn=0x0000000000281A9C string=0x00000000001F6070 "0'"
 *   insn=0x0000000000281AA8 string=0x0000000000281AAC "!"
 *   insn=0x0000000000281AAC string=0x0000000000281B70 "\t#"
 *   insn=0x0000000000281AB8 string=0x0000000000281ABC "\t!"
 *   insn=0x0000000000281ABC string=0x0000000000281AC0 "h"
 *   insn=0x0000000000281AC8 string=0x0000000000281ACC "e"
 *   insn=0x0000000000281ACC string=0x00000000001F7460 "0'"
 *   insn=0x0000000000281AD4 string=0x0000000000281AD8 "f"
 *   insn=0x0000000000281AE0 string=0x0000000000281AE4 "@"
 *   insn=0x0000000000281AE4 string=0x0000000000281AE8 ""
 *   insn=0x0000000000281AE8 string=0x0000000000281AEC ""
 *   insn=0x0000000000281AF0 string=0x0000000000281AF4 ""
 *   insn=0x0000000000281AF4 string=0x0000000000281AF8 ""
 *   insn=0x0000000000281B08 string=0x0000000000281B0C "A"
 *   insn=0x0000000000281B24 string=0x0000000000281B28 ")=G"
 *   insn=0x0000000000281B28 string=0x0000000000281B2C "!"
 *   insn=0x0000000000281B30 string=0x0000000000281B34 "\t"
 *   insn=0x0000000000281B30 string=0x0000000000281B48 "\t"
 *   insn=0x0000000000281B34 string=0x0000000000281B38 "*"
 *   insn=0x0000000000281B38 string=0x0000000000281B3C "\n"
 *   insn=0x0000000000281B44 string=0x0000000000281B54 "?"
 *   insn=0x0000000000281B48 string=0x0000000000281B4C "*"
 *   insn=0x0000000000281B4C string=0x0000000000281B50 "\n"
 *   insn=0x0000000000281B64 string=0x0000000000281B68 "`"
 *   insn=0x0000000000281B70 string=0x0000000000281B74 ")=G"
 *   insn=0x0000000000281B74 string=0x0000000000281B78 "!"
 *   insn=0x0000000000281B7C string=0x0000000000281B80 "\t"
 *   insn=0x0000000000281B7C string=0x0000000000281B94 "\t"
 *   insn=0x0000000000281B80 string=0x0000000000281B84 "*"
 *   insn=0x0000000000281B84 string=0x0000000000281B88 "\n"
 *   insn=0x0000000000281B90 string=0x0000000000281BA0 "?"
 *   insn=0x0000000000281B94 string=0x0000000000281B98 "*"
 *   insn=0x0000000000281B98 string=0x0000000000281B9C "\n"
 *   insn=0x0000000000281BA0 string=0x0000000000281BA4 "l"
 *   insn=0x0000000000281BB4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000281BBC string=0x0000000000281BC0 "(a"
 *   insn=0x0000000000281BC8 string=0x0000000000281BCC "\n#"
 *   insn=0x0000000000281BCC string=0x0000000000281BD0 "J=G"
 *   insn=0x0000000000281BD0 string=0x0000000000281BD4 ")!"
 *   insn=0x0000000000281BD8 string=0x0000000000281BDC "*"
 *   insn=0x0000000000281BD8 string=0x0000000000281C0C "*"
 *   insn=0x0000000000281BDC string=0x0000000000281BE0 "K"
 *   insn=0x0000000000281BE0 string=0x0000000000281BE4 "+"
 *   insn=0x0000000000281BE8 string=0x0000000000281BEC "_"
 *   insn=0x0000000000281BEC string=0x0000000000281BF0 "L"
 *   insn=0x0000000000281C04 string=0x0000000000281C08 "5"
 *   insn=0x0000000000281C04 string=0x0000000000281CC0 "@"
 *   insn=0x0000000000281C0C string=0x0000000000281C10 "K"
 *   insn=0x0000000000281C10 string=0x0000000000281C14 "+"
 *   insn=0x0000000000281C14 string=0x0000000000281C18 "_"
 *   insn=0x0000000000281C1C string=0x0000000000281C20 "&"
 *   insn=0x0000000000281C30 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000281C34 string=0x0000000000281C38 "@"
 *   insn=0x0000000000281C38 string=0x0000000000281C3C "("
 *   insn=0x0000000000281C40 string=0x0000000000281C44 "*#"
 *   insn=0x0000000000281C44 string=0x0000000000281C48 "J"
 *   insn=0x0000000000281C4C string=0x0000000000281C50 "(a"
 *   insn=0x0000000000281C54 string=0x0000000000281C58 " "
 *   insn=0x0000000000281C58 string=0x0000000000281C5C "\n#"
 *   insn=0x0000000000281C5C string=0x0000000000281C60 "J=G"
 *   insn=0x0000000000281C60 string=0x0000000000281C64 ")!"
 *   insn=0x0000000000281C68 string=0x0000000000281C6C "*"
 *   insn=0x0000000000281C68 string=0x0000000000281C98 "*"
 *   insn=0x0000000000281C6C string=0x0000000000281C70 "K"
 *   insn=0x0000000000281C70 string=0x0000000000281C74 "+"
 *   insn=0x0000000000281C78 string=0x0000000000281C7C "_"
 *   insn=0x0000000000281C98 string=0x0000000000281C9C "K"
 *   insn=0x0000000000281C9C string=0x0000000000281CA0 "+"
 *   insn=0x0000000000281CA0 string=0x0000000000281CA4 "_"
 *   insn=0x0000000000281CC0 string=0x0000000000281CC4 ""
 *   insn=0x0000000000281CC4 string=0x0000000000281CC8 ""
 *   insn=0x0000000000281CCC string=0x0000000000281CD0 ""
 *   insn=0x0000000000281CD0 string=0x0000000000281CD4 ""
 *   insn=0x0000000000281CF8 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000281D04 string=0x0000000000281D08 "j"
 *   insn=0x0000000000281D10 string=0x0000000000281D14 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObjectGroup *__fastcall Caver::DimensionObjectComponent::Prepare(Caver::SceneObject **this)
{
  void *v2; // x0
  Caver::SceneObjectGroup *v3; // x0
  Caver::SceneObjectGroup *v4; // x20
  int v5; // w8
  Caver::SceneObjectGroup *v6; // x0
  int v7; // w8
  void *v8; // x0
  Caver::SceneObjectGroup *v9; // x8
  Caver::SceneObjectGroup *result; // x0
  int v11; // w8
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  __int64 v16; // [xsp+30h] [xbp-40h] BYREF
  Caver::SceneObjectGroup *v17; // [xsp+38h] [xbp-38h]
  __int64 v18; // [xsp+48h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)&v16, "dimension");
  Caver::Scene::GroupWithIdentifier();
  v2 = (void *)(v16 - 24);
  if ( (__int64 *)(v16 - 24) == &qword_6FD2E0 )
    goto LABEL_2;
  v12 = (unsigned int *)(v16 - 8);
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
  if ( v13 > 0 )
  {
LABEL_2:
    v3 = v17;
    if ( v17 )
      goto LABEL_8;
  }
  else
  {
    operator delete(v2);
    v3 = v17;
    if ( v17 )
      goto LABEL_8;
  }
  v4 = (Caver::SceneObjectGroup *)operator new(0x50u);
  Caver::SceneObjectGroup::SceneObjectGroup(v4);
  v5 = *((_DWORD *)v4 + 2);
  v6 = v17;
  v17 = v4;
  *((_DWORD *)v4 + 2) = v5 + 1;
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 + 2) - 1;
    *((_DWORD *)v6 + 2) = v7;
    if ( !v7 )
      (*(void (__fastcall **)(Caver::SceneObjectGroup *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  sub_566BB8((int)&v16, "dimension");
  Caver::SceneObjectGroup::SetIdentifier();
  v8 = (void *)(v16 - 24);
  if ( (__int64 *)(v16 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v16 - 8);
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
      operator delete(v8);
  }
  v9 = v17;
  *((_BYTE *)v17 + 74) = 0;
  *((_BYTE *)v9 + 72) = 1;
  Caver::Scene::AddGroup();
  v3 = v17;
LABEL_8:
  Caver::SceneObjectGroup::AddObject(v3, this[5]);
  result = v17;
  if ( v17 )
  {
    v11 = *((_DWORD *)v17 + 2) - 1;
    *((_DWORD *)v17 + 2) = v11;
    if ( !v11 )
      return (Caver::SceneObjectGroup *)(*(__int64 (__fastcall **)(Caver::SceneObjectGroup *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

