/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000497B54
 * Mangled: _ZN5Caver8GUILabel10UpdateTextEv
 * Demangled: Caver::GUILabel::UpdateText(void)
 *
 * Callers: 1
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *
 * Callees: 10
 *   0x00000000001F5200  Caver::FontText::Clear(void)
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000001F9EB0  Caver::FontText::AlignHorizontally(Caver::GUITextAlignment)
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *   0x0000000000200DE0  Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *   0x0000000000200F60  Caver::Font::SystemFont(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 114
 *   insn=0x0000000000497B64 string=0x0000000000497B68 "U"
 *   insn=0x0000000000497B74 string=0x0000000000497B78 "hz@"
 *   insn=0x0000000000497B7C string=0x0000000000497C38 "i"
 *   insn=0x0000000000497B8C string=0x0000000000497B90 "\n"
 *   insn=0x0000000000497B8C string=0x0000000000497B9C "t~@"
 *   insn=0x0000000000497B90 string=0x0000000000497B94 "J"
 *   insn=0x0000000000497B94 string=0x0000000000497B98 "\n"
 *   insn=0x0000000000497B9C string=0x0000000000497BA0 "i""
 *   insn=0x0000000000497BA0 string=0x0000000000497BA4 "4"
 *   insn=0x0000000000497BA8 string=0x0000000000497BAC ""
 *   insn=0x0000000000497BB8 string=0x0000000000497BBC "\t@"
 *   insn=0x0000000000497BC8 string=0x0000000000497BCC ""
 *   insn=0x0000000000497BD8 string=0x0000000000497BDC "@"
 *   insn=0x0000000000497BE8 string=0x0000000000497BEC "4"
 *   insn=0x0000000000497BEC string=0x0000000000497C30 "hz@"
 *   insn=0x0000000000497BF0 string=0x0000000000497BF4 ""
 *   insn=0x0000000000497C04 string=0x0000000000497C08 "\t@"
 *   insn=0x0000000000497C10 string=0x0000000000497C14 ""
 *   insn=0x0000000000497C24 string=0x0000000000497C28 "@"
 *   insn=0x0000000000497C30 string=0x0000000000497C34 "H\n"
 *   insn=0x0000000000497C34 string=0x0000000000497D7C "`"
 *   insn=0x0000000000497C38 string=0x0000000000497C3C ")"
 *   insn=0x0000000000497C40 string=0x0000000000497C44 "i"
 *   insn=0x0000000000497C44 string=0x0000000000497C48 "*"
 *   insn=0x0000000000497C4C string=0x0000000000497C50 " "
 *   insn=0x0000000000497C50 string=0x0000000000497C54 "j~@"
 *   insn=0x0000000000497C50 string=0x0000000000497CB4 "`"
 *   insn=0x0000000000497C58 string=0x0000000000497C5C "K"
 *   insn=0x0000000000497C58 string=0x0000000000497C68 "4"
 *   insn=0x0000000000497C5C string=0x0000000000497C60 "k"
 *   insn=0x0000000000497C60 string=0x0000000000497C64 "K"
 *   insn=0x0000000000497C68 string=0x0000000000497C6C "()"
 *   insn=0x0000000000497C6C string=0x0000000000497C70 "4"
 *   insn=0x0000000000497C74 string=0x0000000000497C78 ""
 *   insn=0x0000000000497C88 string=0x0000000000497C8C "\t@"
 *   insn=0x0000000000497C94 string=0x0000000000497C98 ""
 *   insn=0x0000000000497CA8 string=0x0000000000497CAC "@"
 *   insn=0x0000000000497CB4 string=0x0000000000497CB8 "a""
 *   insn=0x0000000000497CB8 string=0x0000000000497CBC "-"
 *   insn=0x0000000000497CBC string=0x0000000000497CC0 "h"
 *   insn=0x0000000000497CC0 string=0x0000000000497CC4 "("
 *   insn=0x0000000000497CC4 string=0x0000000000497CC8 "i"
 *   insn=0x0000000000497CC4 string=0x0000000000497D28 "h"
 *   insn=0x0000000000497CCC string=0x0000000000497CD0 "+"
 *   insn=0x0000000000497CCC string=0x0000000000497CDC "T"
 *   insn=0x0000000000497CD0 string=0x0000000000497CD4 "k"
 *   insn=0x0000000000497CD4 string=0x0000000000497CD8 "+"
 *   insn=0x0000000000497CDC string=0x0000000000497CE0 "H"
 *   insn=0x0000000000497CE0 string=0x0000000000497CE4 "4"
 *   insn=0x0000000000497CE8 string=0x0000000000497CEC ""
 *   insn=0x0000000000497CFC string=0x0000000000497D00 "\t@"
 *   insn=0x0000000000497D08 string=0x0000000000497D0C ""
 *   insn=0x0000000000497D1C string=0x0000000000497D20 "@"
 *   insn=0x0000000000497D28 string=0x0000000000497D2C "t"
 *   insn=0x0000000000497D2C string=0x0000000000497D30 "("
 *   insn=0x0000000000497D30 string=0x0000000000497D34 "i"
 *   insn=0x0000000000497D30 string=0x0000000000497D54 "`"
 *   insn=0x0000000000497D34 string=0x0000000000497D38 "h"
 *   insn=0x0000000000497D38 string=0x0000000000497D3C ")"
 *   insn=0x0000000000497D40 string=0x0000000000497D44 "\n"
 *   insn=0x0000000000497D44 string=0x0000000000497D48 "\t"
 *   insn=0x0000000000497D48 string=0x0000000000497D4C "i"
 *   insn=0x0000000000497D4C string=0x0000000000497D50 "\t"
 *   insn=0x0000000000497D54 string=0x0000000000497D58 "h>A"
 *   insn=0x0000000000497D58 string=0x0000000000497D5C "8"
 *   insn=0x0000000000497D5C string=0x0000000000497D60 "(u"
 *   insn=0x0000000000497D60 string=0x0000000000497D64 "h"
 *   insn=0x0000000000497D60 string=0x00000000001F5200 "P'"
 *   insn=0x0000000000497D64 string=0x0000000000497D68 "`"
 *   insn=0x0000000000497D6C string=0x0000000000497D70 "`"
 *   insn=0x0000000000497D7C string=0x0000000000497D80 " u"
 *   insn=0x0000000000497D98 string=0x00000000001F9CD0 "0'"
 *   insn=0x0000000000497DA0 string=0x00000000001F5840 "P'"
 *   insn=0x0000000000497DB0 string=0x0000000000497DC8 "By"
 *   insn=0x0000000000497DC8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000497DD0 string=0x0000000000497DD4 "4"
 *   insn=0x0000000000497DD8 string=0x0000000000497DDC ""
 *   insn=0x0000000000497DE8 string=0x0000000000497DEC "\t@"
 *   insn=0x0000000000497DF8 string=0x0000000000497DFC ""
 *   insn=0x0000000000497E08 string=0x0000000000497E0C "@"
 *   insn=0x0000000000497E1C string=0x0000000000497E20 "K"
 *   insn=0x0000000000497E3C string=0x0000000000497E40 "T"
 *   insn=0x0000000000497E4C string=0x0000000000497E50 "x"
 *   insn=0x0000000000497E54 string=0x0000000000497E58 "z"
 *   insn=0x0000000000497E5C string=0x0000000000497E60 "`"
 *   insn=0x0000000000497E60 string=0x0000000000497E64 "a2A"
 *   insn=0x0000000000497E6C string=0x0000000000497E70 "A"
 *   insn=0x0000000000497E6C string=0x00000000001F9EB0 "0'"
 *   insn=0x0000000000497E74 string=0x0000000000497E78 "   "
 *   insn=0x0000000000497E7C string=0x0000000000497E8C "h2A"
 *   insn=0x0000000000497E8C string=0x0000000000497E90 "h"
 *   insn=0x0000000000497E90 string=0x0000000000497EDC "h"
 *   insn=0x0000000000497E94 string=0x0000000000497E98 "`"
 *   insn=0x0000000000497E98 string=0x0000000000497EC4 "h"
 *   insn=0x0000000000497E9C string=0x0000000000497EA0 "a"
 *   insn=0x0000000000497EA0 string=0x0000000000497EA4 "h"
 *   insn=0x0000000000497EA4 string=0x0000000000497EA8 "#"
 *   insn=0x0000000000497EA8 string=0x0000000000497EAC "!8#"
 *   insn=0x0000000000497EB4 string=0x0000000000497EB8 "!#"
 *   insn=0x0000000000497EB8 string=0x0000000000497EBC "A(!"
 *   insn=0x0000000000497EBC string=0x0000000000497EC0 "\t"
 *   insn=0x0000000000497EC4 string=0x0000000000497EC8 "#"
 *   insn=0x0000000000497EC8 string=0x0000000000497ECC "!8#"
 *   insn=0x0000000000497ED0 string=0x0000000000497ED4 "A8!"
 *   insn=0x0000000000497EE8 string=0x0000000000497EF0 "h6A"
 *   insn=0x0000000000497EF8 string=0x0000000000497F4C "h"
 *   insn=0x0000000000497F04 string=0x0000000000497F34 "h"
 *   insn=0x0000000000497F0C string=0x0000000000497F10 "h"
 *   insn=0x0000000000497F14 string=0x0000000000497F18 "B8#"
 *   insn=0x0000000000497F20 string=0x0000000000497F24 "B#"
 *   insn=0x0000000000497F24 string=0x0000000000497F28 "@( "
 *   insn=0x0000000000497F2C string=0x0000000000497F30 "\t"
 *   insn=0x0000000000497F38 string=0x0000000000497F3C "B8#"
 *   insn=0x0000000000497F58 string=0x0000000000497F60 "!@&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUILabel::UpdateText(Caver::GUILabel *this)
{
  __int64 v2; // x8
  _QWORD *v3; // x8
  __int64 v4; // x9
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 v12; // x10
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x10
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  int v23; // w9
  Caver::FontText *v24; // x0
  __int64 v25; // [xsp+70h] [xbp-38h] BYREF
  _QWORD *v26; // [xsp+78h] [xbp-30h]
  __int64 v27; // [xsp+80h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 30);
  if ( !v2 )
  {
    Caver::Font::SystemFont(&v25, this);
    v4 = v25;
    v3 = v26;
    if ( v26 )
      ++v26[1];
    v5 = (_QWORD *)*((_QWORD *)this + 31);
    *((_QWORD *)this + 30) = v4;
    *((_QWORD *)this + 31) = v3;
    if ( v5 )
    {
      v6 = v5[1] - 1LL;
      v5[1] = v6;
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v7 = v5[2] - 1LL;
        v5[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
    v8 = v26;
    if ( v26 )
    {
      v9 = v26[1] - 1LL;
      v26[1] = v9;
      if ( !v9 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v10 = v8[2] - 1LL;
        v8[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
    }
    v2 = *((_QWORD *)this + 30);
    if ( !v2 )
      goto LABEL_31;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 32) - 24LL) )
  {
    v11 = (_QWORD *)*((_QWORD *)this + 36);
    if ( v2 != *v11 )
    {
      v12 = *((_QWORD *)this + 31);
      if ( v12 )
        ++*(_QWORD *)(v12 + 8);
      v13 = (_QWORD *)v11[1];
      *v11 = v2;
      v11[1] = v12;
      if ( v13 )
      {
        v14 = v13[1] - 1LL;
        v13[1] = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
          v15 = v13[2] - 1LL;
          v13[2] = v15;
          if ( !v15 )
            (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
        }
      }
    }
    Caver::FontText::SetColor(*((Caver::FontText **)this + 36), (Caver::GUILabel *)((char *)this + 264));
    v16 = *((_QWORD *)this + 34);
    if ( v16 )
    {
      v17 = *((_QWORD *)this + 35);
      v18 = *((_QWORD *)this + 36);
      if ( v17 )
        ++*(_QWORD *)(v17 + 8);
      v19 = *(_QWORD **)(v18 + 32);
      *(_QWORD *)(v18 + 24) = v16;
      *(_QWORD *)(v18 + 32) = v17;
      if ( v19 )
      {
        v20 = v19[1] - 1LL;
        v19[1] = v20;
        if ( !v20 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
          v21 = v19[2] - 1LL;
          v19[2] = v21;
          if ( !v21 )
            (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
        }
      }
    }
    if ( *((_BYTE *)this + 320) )
    {
      v22 = *((_QWORD *)this + 36);
      v23 = *(_DWORD *)((char *)this + 321);
      *(_BYTE *)(v22 + 40) = 1;
      *(_DWORD *)(v22 + 41) = v23;
      *(_QWORD *)(v22 + 48) = *((_QWORD *)this + 41);
    }
    v24 = (Caver::FontText *)*((_QWORD *)this + 36);
    *((_DWORD *)v24 + 14) = *((_DWORD *)this + 79);
    Caver::FontText::Clear(v24);
    v25 = 0;
    Caver::FontText::AddText();
  }
  else
  {
LABEL_31:
    Caver::FontText::Clear(*((Caver::FontText **)this + 36));
  }
  Caver::GUILabel::UpdateBounds(this);
}

