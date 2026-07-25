/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028E658
 * Mangled: _ZN5Caver14SkillComponent12BeginCastingEv
 * Demangled: Caver::SkillComponent::BeginCasting(void)
 *
 * Callers: 2
 *   0x0000000000201890  Caver::SkillComponent::BeginCasting(void)
 *   0x000000000028E580  Caver::SkillComponent::CreateSpellObject(void)
 *
 * Callees: 12
 *   0x00000000001F4770  Caver::SpellComponent::SetCasterObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5990  Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 154
 *   insn=0x000000000028E66C string=0x000000000028E670 "W"
 *   insn=0x000000000028E67C string=0x000000000028E680 "`f@"
 *   insn=0x000000000028E684 string=0x000000000028E688 "h"
 *   insn=0x000000000028E690 string=0x000000000028E694 "\t\t@"
 *   insn=0x000000000028E694 string=0x000000000028E698 ")"
 *   insn=0x000000000028E698 string=0x000000000028E69C "\t\t"
 *   insn=0x000000000028E6A0 string=0x000000000028E6A4 "3"
 *   insn=0x000000000028E6A4 string=0x00000000001F4770 "P'"
 *   insn=0x000000000028E6AC string=0x000000000028E6B0 "@"
 *   insn=0x000000000028E6AC string=0x000000000028E6CC "`f@"
 *   insn=0x000000000028E6B0 string=0x000000000028E6B4 ""
 *   insn=0x000000000028E6B4 string=0x000000000028E6B8 ""
 *   insn=0x000000000028E6BC string=0x000000000028E6C0 ""
 *   insn=0x000000000028E6C0 string=0x000000000028E6C4 ""
 *   insn=0x000000000028E6CC string=0x000000000028E6D0 "hJ@"
 *   insn=0x000000000028E6D0 string=0x000000000028E6D4 "@"
 *   insn=0x000000000028E6D4 string=0x000000000028E6D8 "h"
 *   insn=0x000000000028E6D8 string=0x000000000028E6DC ""
 *   insn=0x000000000028E6E0 string=0x000000000028E6E4 ""
 *   insn=0x000000000028E6E4 string=0x000000000028E6E8 ""
 *   insn=0x000000000028E6F0 string=0x000000000028E6F4 "hf@"
 *   insn=0x000000000028E6F4 string=0x000000000028E6F8 "`"
 *   insn=0x000000000028E6F8 string=0x000000000028E6FC ""
 *   insn=0x000000000028E704 string=0x000000000028E708 "\t\t@"
 *   insn=0x000000000028E708 string=0x000000000028E70C ")"
 *   insn=0x000000000028E70C string=0x000000000028E710 "\t\t"
 *   insn=0x000000000028E718 string=0x00000000001F6190 "0'"
 *   insn=0x000000000028E720 string=0x000000000028E724 "@"
 *   insn=0x000000000028E720 string=0x000000000028E740 "`"
 *   insn=0x000000000028E724 string=0x000000000028E728 ""
 *   insn=0x000000000028E728 string=0x000000000028E72C ""
 *   insn=0x000000000028E730 string=0x000000000028E734 ""
 *   insn=0x000000000028E734 string=0x000000000028E738 ""
 *   insn=0x000000000028E740 string=0x000000000028E744 "tb@"
 *   insn=0x000000000028E744 string=0x000000000028E748 "a""
 *   insn=0x000000000028E750 string=0x00000000001F5990 "P'"
 *   insn=0x000000000028E764 string=0x000000000028E768 "!"
 *   insn=0x000000000028E768 string=0x000000000028E76C "  ""
 *   insn=0x000000000028E76C string=0x000000000028E770 ")"
 *   insn=0x000000000028E778 string=0x000000000028E77C "v"
 *   insn=0x000000000028E790 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028E798 string=0x00000000001FAB30 "0'"
 *   insn=0x000000000028E79C string=0x000000000028E7A0 "u"
 *   insn=0x000000000028E7A0 string=0x000000000028E7A4 ""
 *   insn=0x000000000028E7B0 string=0x000000000028E7B4 " "
 *   insn=0x000000000028E7B4 string=0x000000000028E7B8 "@"
 *   insn=0x000000000028E7B8 string=0x000000000028E7BC ""
 *   insn=0x000000000028E7BC string=0x000000000028E7C0 ""
 *   insn=0x000000000028E7C4 string=0x000000000028E7C8 ""
 *   insn=0x000000000028E7C8 string=0x000000000028E7CC ""
 *   insn=0x000000000028E7E0 string=0x000000000028E7E4 "`"
 *   insn=0x000000000028E7E0 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000028E7E4 string=0x000000000028E7E8 "tZ@"
 *   insn=0x000000000028E7E8 string=0x000000000028E7EC "a""
 *   insn=0x000000000028E7F0 string=0x000000000028E7F4 "g"
 *   insn=0x000000000028E808 string=0x000000000028E80C "!"
 *   insn=0x000000000028E80C string=0x000000000028E810 "  ""
 *   insn=0x000000000028E81C string=0x000000000028E820 "\t"
 *   insn=0x000000000028E82C string=0x000000000028E830 "#8#"
 *   insn=0x000000000028E830 string=0x000000000028E834 "c"
 *   insn=0x000000000028E834 string=0x000000000028E838 "` ""
 *   insn=0x000000000028E838 string=0x000000000028E83C "I"
 *   insn=0x000000000028E83C string=0x000000000028E840 ")"
 *   insn=0x000000000028E83C string=0x000000000028E864 "h"
 *   insn=0x000000000028E844 string=0x000000000028E848 "\t"
 *   insn=0x000000000028E854 string=0x000000000028E858 "R"
 *   insn=0x000000000028E858 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028E864 string=0x000000000028E868 "iZ@"
 *   insn=0x000000000028E86C string=0x000000000028E870 "\ny@"
 *   insn=0x000000000028E870 string=0x000000000028E874 "*y"
 *   insn=0x000000000028E874 string=0x000000000028E878 "\n5@"
 *   insn=0x000000000028E878 string=0x000000000028E87C "*5"
 *   insn=0x000000000028E87C string=0x000000000028E880 "\ny@"
 *   insn=0x000000000028E880 string=0x000000000028E884 "*y"
 *   insn=0x000000000028E888 string=0x000000000028E88C ""
 *   insn=0x000000000028E88C string=0x000000000028E890 ""
 *   insn=0x000000000028E894 string=0x000000000028E898 "?"
 *   insn=0x000000000028E89C string=0x000000000028E8A0 "("
 *   insn=0x000000000028E8A0 string=0x000000000028E8A4 ""
 *   insn=0x000000000028E8A4 string=0x000000000028E8A8 "h"
 *   insn=0x000000000028E8A8 string=0x000000000028E8AC "h"
 *   insn=0x000000000028E8B0 string=0x000000000028E8B4 ""
 *   insn=0x000000000028E8C8 string=0x000000000028E8CC "@"
 *   insn=0x000000000028E8CC string=0x000000000028E8D0 ""
 *   insn=0x000000000028E8D0 string=0x000000000028E8D4 ""
 *   insn=0x000000000028E8DC string=0x000000000028E8E0 "H"
 *   insn=0x000000000028E8E0 string=0x000000000028E8E4 "\t\t@"
 *   insn=0x000000000028E8E4 string=0x000000000028E8E8 ")"
 *   insn=0x000000000028E8E8 string=0x000000000028E8EC "\t\t"
 *   insn=0x000000000028E8F0 string=0x000000000028E8F4 "\t"
 *   insn=0x000000000028E8F4 string=0x000000000028E8F8 ")"
 *   insn=0x000000000028E8FC string=0x000000000028E900 " "
 *   insn=0x000000000028E908 string=0x000000000028E90C "@"
 *   insn=0x000000000028E90C string=0x000000000028E910 ""
 *   insn=0x000000000028E910 string=0x000000000028E914 ""
 *   insn=0x000000000028E918 string=0x000000000028E91C ""
 *   insn=0x000000000028E91C string=0x000000000028E920 ""
 *   insn=0x000000000028E928 string=0x000000000028E92C ""
 *   insn=0x000000000028E93C string=0x000000000028E940 "#8#"
 *   insn=0x000000000028E940 string=0x000000000028E944 "c"
 *   insn=0x000000000028E944 string=0x000000000028E948 "` ""
 *   insn=0x000000000028E948 string=0x000000000028E94C "I"
 *   insn=0x000000000028E94C string=0x000000000028E950 ")"
 *   insn=0x000000000028E94C string=0x000000000028E974 "h"
 *   insn=0x000000000028E954 string=0x000000000028E958 "\t"
 *   insn=0x000000000028E974 string=0x000000000028E978 "ib@"
 *   insn=0x000000000028E978 string=0x000000000028E97C "y@"
 *   insn=0x000000000028E97C string=0x000000000028E980 "(y"
 *   insn=0x000000000028E980 string=0x000000000028E984 "`f@"
 *   insn=0x000000000028E984 string=0x000000000028E988 ""
 *   insn=0x000000000028E988 string=0x000000000028E98C ""
 *   insn=0x000000000028E9A0 string=0x000000000028E9BC "E"
 *   insn=0x000000000028E9BC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028E9C8 string=0x000000000028E9CC "\t\t@"
 *   insn=0x000000000028E9CC string=0x000000000028E9D0 ")"
 *   insn=0x000000000028E9D0 string=0x000000000028E9D4 "\t\t"
 *   insn=0x000000000028E9D4 string=0x000000000028E9D8 "A"
 *   insn=0x000000000028E9D8 string=0x000000000028E9DC "\t"
 *   insn=0x000000000028E9DC string=0x000000000028E9E0 ")"
 *   insn=0x000000000028E9E4 string=0x000000000028E9E8 " "
 *   insn=0x000000000028E9F4 string=0x000000000028E9F8 "H"
 *   insn=0x000000000028E9F8 string=0x000000000028E9FC "\t\t@"
 *   insn=0x000000000028E9FC string=0x000000000028EA00 ")"
 *   insn=0x000000000028EA00 string=0x000000000028EA04 "\t\t"
 *   insn=0x000000000028EA08 string=0x000000000028EA0C "\t"
 *   insn=0x000000000028EA0C string=0x000000000028EA10 ")"
 *   insn=0x000000000028EA14 string=0x000000000028EA18 " "
 *   insn=0x000000000028EA24 string=0x000000000028EA28 """
 *   insn=0x000000000028EA28 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028EA38 string=0x000000000028EA3C "("
 *   insn=0x000000000028EA3C string=0x000000000028EA40 "\t\t@"
 *   insn=0x000000000028EA40 string=0x000000000028EA44 ")"
 *   insn=0x000000000028EA44 string=0x000000000028EA48 "\t\t"
 *   insn=0x000000000028EA4C string=0x000000000028EA50 "\t"
 *   insn=0x000000000028EA50 string=0x000000000028EA54 ")"
 *   insn=0x000000000028EA58 string=0x000000000028EA5C " "
 *   insn=0x000000000028EA64 string=0x000000000028EA68 "9"
 *   insn=0x000000000028EA7C string=0x000000000028EA80 "U"
 *   insn=0x000000000028EA88 string=0x000000000028EA8C "a""
 *   insn=0x000000000028EA90 string=0x000000000028EA94 "`"
 *   insn=0x000000000028EA94 string=0x000000000028EA98 "tb@"
 *   insn=0x000000000028EAB4 string=0x000000000028EAB8 "!"
 *   insn=0x000000000028EAB8 string=0x000000000028EABC "  ""
 *   insn=0x000000000028EAC8 string=0x000000000028EACC "\t"
 *   insn=0x000000000028EAD8 string=0x000000000028EADC "#8#"
 *   insn=0x000000000028EADC string=0x000000000028EAE0 "c"
 *   insn=0x000000000028EAE0 string=0x000000000028EAE4 "` ""
 *   insn=0x000000000028EAE4 string=0x000000000028EAE8 "I"
 *   insn=0x000000000028EAE8 string=0x000000000028EAEC ")"
 *   insn=0x000000000028EAE8 string=0x000000000028EB10 "h"
 *   insn=0x000000000028EAF0 string=0x000000000028EAF4 "\t"
 *   insn=0x000000000028EB10 string=0x000000000028EB14 "ib@"
 *   insn=0x000000000028EB14 string=0x000000000028EB18 "y@"
 *   insn=0x000000000028EB18 string=0x000000000028EB1C "(y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillComponent::BeginCasting(Caver::SkillComponent *this)
{
  __int64 result; // x0
  _DWORD *v3; // x8
  int v4; // w8
  _DWORD *v5; // x8
  int v6; // w8
  __int64 v7; // x20
  int v8; // w9
  _DWORD *v9; // x8
  _DWORD **v10; // x20
  Caver::SceneObject *v11; // x22
  _DWORD *v12; // x0
  int v13; // w8
  __int64 v14; // x20
  int v15; // w9
  _DWORD *v16; // x8
  __int64 v17; // x8
  __int64 v18; // x9
  _DWORD *v19; // x8
  int v20; // w9
  int v21; // w8
  _DWORD *v22; // [xsp+40h] [xbp-40h]
  _DWORD *v23; // [xsp+40h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  result = *((_QWORD *)this + 25);
  if ( result )
  {
    v3 = (_DWORD *)*((_QWORD *)this + 5);
    v22 = v3;
    if ( v3 )
      ++v3[2];
    Caver::SpellComponent::SetCasterObject();
    if ( v22 )
    {
      v4 = v22[2] - 1;
      v22[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
    }
    result = *((_QWORD *)this + 25);
    *(_QWORD *)(result + 132) = *((_QWORD *)this + 18);
    *(_DWORD *)(result + 140) = *((_DWORD *)this + 38);
    if ( result )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 272LL))(result);
      if ( (result & 1) != 0 )
      {
        v5 = *(_DWORD **)(*((_QWORD *)this + 25) + 40LL);
        v23 = v5;
        if ( v5 )
          ++v5[2];
        Caver::SceneObject::AddChildObject();
        if ( v23 )
        {
          v6 = v23[2] - 1;
          v23[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        v7 = *((_QWORD *)this + 24);
        Caver::SceneObject::WorldPointFromLocalPoint();
        if ( fabsf(*(float *)&v23 - *(float *)(v7 + 112)) <= 0.0001 )
        {
          v9 = (_DWORD *)(v7 + 116);
          if ( fabsf(*((float *)&v23 + 1) - *(float *)(v7 + 116)) <= 0.0001 )
          {
LABEL_42:
            *(_DWORD *)(*((_QWORD *)this + 24) + 120LL) = *(_DWORD *)(*((_QWORD *)this + 5) + 120LL);
            return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 280LL))(*((_QWORD *)this + 25));
          }
          v8 = HIDWORD(v23);
        }
        else
        {
          v8 = HIDWORD(v23);
          v9 = (_DWORD *)(v7 + 116);
        }
        *(_DWORD *)(v7 + 112) = (_DWORD)v23;
        *v9 = v8;
        if ( !*(_BYTE *)(v7 + 180) )
        {
          Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v7);
          *(_BYTE *)(v7 + 180) = 1;
        }
        goto LABEL_42;
      }
    }
  }
  v10 = (_DWORD **)((char *)this + 168);
  if ( *((_QWORD *)this + 21) )
    goto LABEL_17;
  if ( *(_QWORD *)(*((_QWORD *)this + 20) - 24LL) )
  {
    Caver::ObjectLibrary::TemplateForName();
    result = (__int64)v22;
    if ( v22 )
      ++v22[2];
    v19 = *v10;
    *v10 = v22;
    if ( v19 )
    {
      v20 = v19[2] - 1;
      v19[2] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
        result = (__int64)v22;
      }
    }
    if ( result )
    {
      v21 = *(_DWORD *)(result + 8) - 1;
      *(_DWORD *)(result + 8) = v21;
      if ( !v21 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    }
    if ( *v10 )
    {
LABEL_17:
      v11 = (Caver::SceneObject *)operator new(0x128u);
      Caver::SceneObject::SceneObject(v11);
      ++*((_DWORD *)v11 + 2);
      v12 = (_DWORD *)*((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v11;
      if ( v12 )
      {
        v13 = v12[2] - 1;
        v12[2] = v13;
        if ( !v13 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
          v11 = (Caver::SceneObject *)*((_QWORD *)this + 22);
        }
      }
      Caver::SceneObject::InitWithTemplate(v11);
      v14 = *((_QWORD *)this + 22);
      Caver::SceneObject::WorldPointFromLocalPoint();
      if ( fabsf(*(float *)&v22 - *(float *)(v14 + 112)) <= 0.0001 )
      {
        v16 = (_DWORD *)(v14 + 116);
        if ( fabsf(*((float *)&v22 + 1) - *(float *)(v14 + 116)) <= 0.0001 )
        {
LABEL_26:
          v17 = *((_QWORD *)this + 5);
          v18 = *((_QWORD *)this + 22);
          *(_DWORD *)(v18 + 120) = *(_DWORD *)(v17 + 120);
          *(_QWORD *)(v18 + 104) = *(_QWORD *)(v17 + 104);
          *(_DWORD *)(v18 + 120) = *(_DWORD *)(v17 + 120);
          return (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v17 + 32) + 40LL))(
                   *(_QWORD *)(v17 + 32),
                   (char *)this + 176);
        }
        v15 = HIDWORD(v22);
      }
      else
      {
        v15 = HIDWORD(v22);
        v16 = (_DWORD *)(v14 + 116);
      }
      *(_DWORD *)(v14 + 112) = (_DWORD)v22;
      *v16 = v15;
      if ( !*(_BYTE *)(v14 + 180) )
      {
        Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v14);
        *(_BYTE *)(v14 + 180) = 1;
      }
      goto LABEL_26;
    }
  }
  return result;
}

