/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046FE44
 * Mangled: _ZN5Caver11SceneObject10TemplatizeERKSs
 * Demangled: Caver::SceneObject::Templatize(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F9020  Caver::SceneObjectLib::PerformCleanupForSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x00000000001F9FB0  Caver::SceneObject::UpdateBounds(void)
 *   0x00000000001FB540  Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *   0x00000000001FD330  Caver::SceneObject::RemoveFromAllGroups(bool)
 *   0x0000000000202AE0  Caver::SceneObject::SetScene(Caver::Scene *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 62
 *   insn=0x000000000046FE68 string=0x00000000001FB540 "0'"
 *   insn=0x000000000046FE6C string=0x000000000046FE70 "u"
 *   insn=0x000000000046FE7C string=0x000000000046FE80 "7"
 *   insn=0x000000000046FE88 string=0x000000000046FE8C ""
 *   insn=0x000000000046FE8C string=0x000000000046FE90 "i@"
 *   insn=0x000000000046FE9C string=0x000000000046FEA0 " "
 *   insn=0x000000000046FEB8 string=0x000000000046FEBC ""
 *   insn=0x000000000046FEBC string=0x000000000046FEC0 "i@"
 *   insn=0x000000000046FED4 string=0x000000000046FED8 ""
 *   insn=0x000000000046FEDC string=0x000000000046FEE0 ""
 *   insn=0x000000000046FEEC string=0x00000000001FD330 "0'"
 *   insn=0x000000000046FEFC string=0x000000000046FF00 "H$"
 *   insn=0x000000000046FF00 string=0x00000000001F9020 "0'"
 *   insn=0x000000000046FF30 string=0x000000000046FF34 "?"
 *   insn=0x000000000046FF34 string=0x000000000046FF38 "A"
 *   insn=0x000000000046FF48 string=0x000000000046FF4C "@"
 *   insn=0x000000000046FF4C string=0x000000000046FF50 ""
 *   insn=0x000000000046FF50 string=0x000000000046FF54 ""
 *   insn=0x000000000046FF58 string=0x000000000046FF5C ""
 *   insn=0x000000000046FF5C string=0x000000000046FF60 ""
 *   insn=0x000000000046FF80 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000046FFAC string=0x000000000046FFB0 "`"
 *   insn=0x000000000046FFB4 string=0x000000000046FFB8 "@"
 *   insn=0x000000000046FFB8 string=0x000000000046FFBC ""
 *   insn=0x000000000046FFBC string=0x000000000046FFC0 ""
 *   insn=0x000000000046FFC4 string=0x000000000046FFC8 ""
 *   insn=0x000000000046FFC8 string=0x000000000046FFCC ""
 *   insn=0x000000000046FFD4 string=0x000000000046FFD8 ";F"
 *   insn=0x000000000046FFF0 string=0x000000000046FFF4 "h"
 *   insn=0x0000000000470000 string=0x0000000000470004 "h&L"
 *   insn=0x0000000000470000 string=0x00000000004700D4 "h&L"
 *   insn=0x0000000000470004 string=0x0000000000470008 "a"
 *   insn=0x0000000000470008 string=0x000000000047000C "?"
 *   insn=0x0000000000470018 string=0x000000000047001C ""
 *   insn=0x000000000047001C string=0x0000000000470020 "!@"
 *   insn=0x0000000000470024 string=0x0000000000470028 "h&L"
 *   insn=0x000000000047002C string=0x0000000000470030 ")"
 *   insn=0x0000000000470038 string=0x000000000047003C "a"
 *   insn=0x0000000000470040 string=0x0000000000470044 "hf"
 *   insn=0x0000000000470044 string=0x0000000000470048 "("
 *   insn=0x0000000000470050 string=0x0000000000470054 "\t@"
 *   insn=0x0000000000470058 string=0x000000000047005C "i"L"
 *   insn=0x000000000047005C string=0x0000000000470060 ""
 *   insn=0x0000000000470064 string=0x0000000000470068 " "
 *   insn=0x0000000000470074 string=0x0000000000470078 "\t"
 *   insn=0x0000000000470078 string=0x000000000047007C ")i@"
 *   insn=0x000000000047007C string=0x0000000000470080 " "
 *   insn=0x0000000000470090 string=0x0000000000470094 "hb@"
 *   insn=0x00000000004700A0 string=0x00000000004700A4 ""
 *   insn=0x00000000004700A4 string=0x00000000004700A8 "i@"
 *   insn=0x00000000004700B4 string=0x00000000004700B8 "I"
 *   insn=0x00000000004700D0 string=0x00000000001F9FB0 "0'"
 *   insn=0x00000000004700D4 string=0x00000000004700D8 "4"
 *   insn=0x00000000004700E8 string=0x00000000004700EC ""
 *   insn=0x00000000004700EC string=0x00000000004700F0 "i@"
 *   insn=0x0000000000470104 string=0x0000000000470108 "i"
 *   insn=0x0000000000470108 string=0x000000000047010C "hb@"
 *   insn=0x0000000000470118 string=0x000000000047011C ""
 *   insn=0x000000000047011C string=0x0000000000470120 "i@"
 *   insn=0x000000000047012C string=0x0000000000470130 "\t"
 *   insn=0x0000000000470138 string=0x000000000047013C "}4"
 *   insn=0x000000000047013C string=0x0000000000470140 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneObject::Templatize(__int64 a1)
{
  Caver::Scene *v2; // x21
  char *v3; // x9
  _QWORD *v4; // x22
  char *v5; // x8
  __int64 v6; // x23
  unsigned __int64 v7; // x23
  unsigned __int64 v8; // x24
  __int64 v9; // x0
  Caver::SceneObject *v10; // x2
  __int64 v11; // x8
  _DWORD **v12; // x8
  _DWORD **v13; // x23
  __int64 v14; // x24
  _DWORD *v15; // x8
  _DWORD **v16; // x22
  _DWORD *v17; // x0
  int v18; // w8

  Caver::ObjectTemplate::TemplateFromObject();
  v2 = *(Caver::Scene **)(a1 + 32);
  if ( v2 )
  {
    v4 = (_QWORD *)(a1 + 200);
    v3 = *(char **)(a1 + 200);
    v5 = *(char **)(a1 + 192);
    v6 = v3 - v5;
    if ( v3 != v5 )
    {
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)v5 + 208LL))(*(_QWORD *)v5, 2, 0) & 1) != 0 )
      {
LABEL_11:
        *(_BYTE *)(a1 + 25) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        goto LABEL_12;
      }
      v7 = v6 >> 3;
      v8 = 1;
      while ( v7 > v8 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v8++);
        if ( ((*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 208LL))(v9, 2, 0) & 1) != 0 )
          goto LABEL_11;
      }
    }
    Caver::SceneObject::RemoveFromAllGroups((Caver::SceneObject *)a1, 1);
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
      Caver::SceneObjectLib::PerformCleanupForSceneObject(
        (Caver::SceneObjectLib *)(v11 + 40),
        (Caver::ProgramState *)a1,
        v10);
    goto LABEL_11;
  }
  v4 = (_QWORD *)(a1 + 200);
LABEL_12:
  v13 = *(_DWORD ***)(a1 + 192);
  v12 = *(_DWORD ***)(a1 + 200);
  *(_DWORD *)(a1 + 216) = 0;
  if ( v13 != v12 )
  {
    v14 = 0;
    do
    {
      v15 = v13[v14++];
      *((_QWORD *)v15 + 5) = 0;
    }
    while ( &v13[v14] != (_DWORD **)*v4 );
    if ( v14 * 8 )
    {
      v16 = v13;
      do
      {
        v17 = *v16;
        if ( *v16 )
        {
          v18 = v17[2] - 1;
          v17[2] = v18;
          if ( !v18 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
        }
        --v14;
        ++v16;
      }
      while ( v14 * 8 );
    }
  }
  *(_QWORD *)(a1 + 200) = v13;
  Caver::SceneObject::InitWithTemplate((Caver::SceneObject *)a1);
  Caver::SceneObject::SetScene((Caver::SceneObject *)a1, v2);
}

