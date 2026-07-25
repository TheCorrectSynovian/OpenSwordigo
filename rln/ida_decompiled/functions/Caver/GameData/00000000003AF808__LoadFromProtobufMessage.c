/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AF808
 * Mangled: _ZN5Caver8GameData23LoadFromProtobufMessageERKNS_5Proto8GameDataE
 * Demangled: Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callers: 1
 *   0x00000000001F94D0  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 28
 *   0x00000000001F4620  Caver::GameData::AddQuest(boost::shared_ptr<Caver::Quest> const&)
 *   0x00000000001F4FE0  Caver::EntityClass::EntityClass(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5890  boost::detail::shared_count::shared_count<Caver::Quest>(Caver::Quest *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8AE0  Caver::Quest::Quest(void)
 *   0x00000000001F8BF0  boost::detail::shared_count::shared_count<Caver::GuideTarget>(Caver::GuideTarget *)
 *   0x00000000001F9420  Caver::Item::LoadFromProtobufMessage(Caver::Proto::Item const&)
 *   0x00000000001F9D20  std::map<std::string,boost::shared_ptr<Caver::Item>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::operator[](std::string const&)
 *   0x00000000001FAA70  std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Skill>*,std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>>,boost::shared_ptr<Caver::Skill> const&)
 *   0x00000000001FC060  Caver::GameData::AddItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FC880  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *   0x00000000001FDA00  boost::detail::shared_count::shared_count<Caver::Skill>(Caver::Skill *)
 *   0x00000000001FDC80  Caver::EntityClass::LoadFromProtobufMessage(Caver::Proto::EntityClass const&)
 *   0x00000000001FDF20  boost::detail::shared_count::shared_count<Caver::EntityClass>(Caver::EntityClass *)
 *   0x0000000000200A50  Caver::Item::Item(void)
 *   0x0000000000200BF0  std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GuideTarget>*,std::vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>>,boost::shared_ptr<Caver::GuideTarget> const&)
 *   0x00000000002010B0  boost::detail::shared_count::shared_count<Caver::Item>(Caver::Item *)
 *   0x0000000000202440  Caver::Quest::LoadFromProtobufMessage(Caver::Proto::Quest const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000202EA0  Caver::Skill::LoadFromProtobufMessage(Caver::Proto::Skill const&)
 *   0x0000000000203630  Caver::GameData::AddEntityClass(boost::shared_ptr<Caver::EntityClass> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 178
 *   insn=0x00000000003AF820 string=0x00000000003AF824 "X"
 *   insn=0x00000000003AF824 string=0x00000000003AF828 ""
 *   insn=0x00000000003AF834 string=0x00000000003AF838 "h"
 *   insn=0x00000000003AF840 string=0x00000000003AF8F4 "hR@"
 *   insn=0x00000000003AF850 string=0x00000000003AF854 "c"
 *   insn=0x00000000003AF854 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003AF858 string=0x00000000003AF85C "}D"
 *   insn=0x00000000003AF878 string=0x00000000003AF87C "5L"
 *   insn=0x00000000003AF87C string=0x00000000003AF880 "h\n@"
 *   insn=0x00000000003AF88C string=0x00000000001F9420 "0'"
 *   insn=0x00000000003AF898 string=0x00000000001FC060 "0'"
 *   insn=0x00000000003AF89C string=0x00000000003AF8A0 "6"
 *   insn=0x00000000003AF8A0 string=0x00000000003AF8E4 "h"
 *   insn=0x00000000003AF8A4 string=0x00000000003AF8A8 ""
 *   insn=0x00000000003AF8B8 string=0x00000000003AF8BC "\t@"
 *   insn=0x00000000003AF8C4 string=0x00000000003AF8C8 ""
 *   insn=0x00000000003AF8D8 string=0x00000000003AF8DC "@"
 *   insn=0x00000000003AF8EC string=0x00000000003AF8F0 ""
 *   insn=0x00000000003AF8FC string=0x00000000003AFA10 "h"
 *   insn=0x00000000003AF900 string=0x00000000003AF904 ")"
 *   insn=0x00000000003AF910 string=0x00000000003AF914 ":a"
 *   insn=0x00000000003AF918 string=0x00000000003AF91C "@"
 *   insn=0x00000000003AF924 string=0x00000000003AF928 "."
 *   insn=0x00000000003AF944 string=0x00000000003AF948 ".8"
 *   insn=0x00000000003AF948 string=0x00000000001FDA00 "0'"
 *   insn=0x00000000003AF958 string=0x00000000003AF95C "h&@"
 *   insn=0x00000000003AF964 string=0x00000000003AF968 "NM"
 *   insn=0x00000000003AF96C string=0x00000000003AF970 "?"
 *   insn=0x00000000003AF978 string=0x00000000003AF97C "("
 *   insn=0x00000000003AF980 string=0x00000000003AF984 "("
 *   insn=0x00000000003AF988 string=0x00000000003AF98C "\t"
 *   insn=0x00000000003AF988 string=0x00000000003AF998 "(@"
 *   insn=0x00000000003AF98C string=0x00000000003AF990 ")"
 *   insn=0x00000000003AF990 string=0x00000000003AF994 "\t"
 *   insn=0x00000000003AF9A8 string=0x00000000003AFA00 "hR"
 *   insn=0x00000000003AF9B0 string=0x00000000003AF9B4 "/,"
 *   insn=0x00000000003AF9B4 string=0x00000000001FAA70 "0'"
 *   insn=0x00000000003AF9B8 string=0x00000000003AF9BC "7"
 *   insn=0x00000000003AF9C0 string=0x00000000003AF9C4 ""
 *   insn=0x00000000003AF9D4 string=0x00000000003AF9D8 "\t@"
 *   insn=0x00000000003AF9E0 string=0x00000000003AF9E4 ""
 *   insn=0x00000000003AF9F4 string=0x00000000003AF9F8 "@"
 *   insn=0x00000000003AFA00 string=0x00000000003AFA04 "9"
 *   insn=0x00000000003AFA04 string=0x00000000003AFA08 "?"
 *   insn=0x00000000003AFA18 string=0x00000000003AFACC "h"
 *   insn=0x00000000003AFA30 string=0x00000000003AFA34 "+$"
 *   insn=0x00000000003AFA34 string=0x00000000001F8AE0 "0'"
 *   insn=0x00000000003AFA44 string=0x00000000001F5890 "P'"
 *   insn=0x00000000003AFA54 string=0x00000000003AFA58 "hB@"
 *   insn=0x00000000003AFA60 string=0x00000000003AFA64 "wJ"
 *   insn=0x00000000003AFA70 string=0x00000000001F4620 "P'"
 *   insn=0x00000000003AFA74 string=0x00000000003AFA78 "6"
 *   insn=0x00000000003AFA78 string=0x00000000003AFABC "h"
 *   insn=0x00000000003AFA7C string=0x00000000003AFA80 ""
 *   insn=0x00000000003AFA90 string=0x00000000003AFA94 "\t@"
 *   insn=0x00000000003AFA9C string=0x00000000003AFAA0 ""
 *   insn=0x00000000003AFAB0 string=0x00000000003AFAB4 "@"
 *   insn=0x00000000003AFAC4 string=0x00000000003AFAC8 ""
 *   insn=0x00000000003AFAD4 string=0x00000000003AFB88 "h"
 *   insn=0x00000000003AFAEC string=0x00000000003AFAF0 "<"
 *   insn=0x00000000003AFAF0 string=0x00000000001F4FE0 "P'"
 *   insn=0x00000000003AFAFC string=0x00000000003AFB00 "9"
 *   insn=0x00000000003AFB00 string=0x00000000001FDF20 "0'"
 *   insn=0x00000000003AFB10 string=0x00000000003AFB14 "h^@"
 *   insn=0x00000000003AFB1C string=0x00000000003AFB20 "X8"
 *   insn=0x00000000003AFB20 string=0x00000000001FDC80 "0'"
 *   insn=0x00000000003AFB30 string=0x00000000003AFB34 "6"
 *   insn=0x00000000003AFB34 string=0x00000000003AFB78 "h"
 *   insn=0x00000000003AFB38 string=0x00000000003AFB3C ""
 *   insn=0x00000000003AFB4C string=0x00000000003AFB50 "\t@"
 *   insn=0x00000000003AFB58 string=0x00000000003AFB5C ""
 *   insn=0x00000000003AFB6C string=0x00000000003AFB70 "@"
 *   insn=0x00000000003AFB80 string=0x00000000003AFB84 ""
 *   insn=0x00000000003AFB8C string=0x00000000003AFB90 "k\t"
 *   insn=0x00000000003AFB90 string=0x00000000003AFCBC ""
 *   insn=0x00000000003AFB94 string=0x00000000003AFB98 ")"
 *   insn=0x00000000003AFBA4 string=0x00000000003AFBA8 "(a"
 *   insn=0x00000000003AFBF4 string=0x00000000001F8BF0 "0'"
 *   insn=0x00000000003AFC00 string=0x00000000003AFC04 "SK"
 *   insn=0x00000000003AFC04 string=0x00000000003AFC08 "hz@"
 *   insn=0x00000000003AFC10 string=0x00000000003AFC14 "3"
 *   insn=0x00000000003AFC14 string=0x00000000001FC880 "0'"
 *   insn=0x00000000003AFC18 string=0x00000000003AFC1C "?"
 *   insn=0x00000000003AFC24 string=0x00000000003AFC28 "("
 *   insn=0x00000000003AFC2C string=0x00000000003AFC30 "("
 *   insn=0x00000000003AFC34 string=0x00000000003AFC38 "\t"
 *   insn=0x00000000003AFC34 string=0x00000000003AFC44 "(@"
 *   insn=0x00000000003AFC38 string=0x00000000003AFC3C ")"
 *   insn=0x00000000003AFC3C string=0x00000000003AFC40 "\t"
 *   insn=0x00000000003AFC54 string=0x00000000003AFCAC "h"
 *   insn=0x00000000003AFC64 string=0x00000000003AFC68 "7"
 *   insn=0x00000000003AFC6C string=0x00000000003AFC70 ""
 *   insn=0x00000000003AFC80 string=0x00000000003AFC84 "\t@"
 *   insn=0x00000000003AFC8C string=0x00000000003AFC90 ""
 *   insn=0x00000000003AFCA0 string=0x00000000003AFCA4 "@"
 *   insn=0x00000000003AFCAC string=0x00000000003AFCB0 "9"
 *   insn=0x00000000003AFCB0 string=0x00000000003AFCB4 "?"
 *   insn=0x00000000003AFCB4 string=0x00000000003AFCB8 ""
 *   insn=0x00000000003AFCC8 string=0x00000000003AFCE8 "z"
 *   insn=0x00000000003AFCE8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AFCFC string=0x00000000003AFD00 ""
 *   insn=0x00000000003AFD04 string=0x00000000003AFD08 "a"
 *   insn=0x00000000003AFD0C string=0x00000000003AFD10 "\t@"
 *   insn=0x00000000003AFD1C string=0x00000000003AFD20 ""
 *   insn=0x00000000003AFD24 string=0x00000000003AFD28 "a"
 *   insn=0x00000000003AFD2C string=0x00000000003AFD30 "@"
 *   insn=0x00000000003AFD38 string=0x00000000003AFD3C "V"
 *   insn=0x00000000003AFD44 string=0x00000000003AFD48 "t\n"
 *   insn=0x00000000003AFD4C string=0x00000000003AFD50 ""
 *   insn=0x00000000003AFD5C string=0x00000000003AFD60 "\t@"
 *   insn=0x00000000003AFD6C string=0x00000000003AFD70 ""
 *   insn=0x00000000003AFD7C string=0x00000000003AFD80 "@"
 *   insn=0x00000000003AFD88 string=0x00000000003AFD8C "B"
 *   insn=0x00000000003AFDA0 string=0x00000000003AFDA4 ""
 *   insn=0x00000000003AFDA8 string=0x00000000003AFDAC "A"
 *   insn=0x00000000003AFDB0 string=0x00000000003AFDB4 "\t@"
 *   insn=0x00000000003AFDC0 string=0x00000000003AFDC4 ""
 *   insn=0x00000000003AFDC8 string=0x00000000003AFDCC "A"
 *   insn=0x00000000003AFDD0 string=0x00000000003AFDD4 "@"
 *   insn=0x00000000003AFDDC string=0x00000000003AFDE0 "-"
 *   insn=0x00000000003AFDE8 string=0x00000000003AFDEC "1"
 *   insn=0x00000000003AFDEC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003AFE04 string=0x00000000003AFE08 ""
 *   insn=0x00000000003AFE0C string=0x00000000003AFE10 "!"
 *   insn=0x00000000003AFE14 string=0x00000000003AFE18 "\t@"
 *   insn=0x00000000003AFE24 string=0x00000000003AFE28 ""
 *   insn=0x00000000003AFE2C string=0x00000000003AFE30 "!"
 *   insn=0x00000000003AFE34 string=0x00000000003AFE38 "@"
 *   insn=0x00000000003AFE4C string=0x00000000003AFE50 "4"
 *   insn=0x00000000003AFE54 string=0x00000000003AFE58 ""
 *   insn=0x00000000003AFE64 string=0x00000000003AFE68 "\t@"
 *   insn=0x00000000003AFE74 string=0x00000000003AFE78 ""
 *   insn=0x00000000003AFE84 string=0x00000000003AFE88 "@"
 *   insn=0x00000000003AFE98 string=0x00000000003AFE9C ",y"
 *   insn=0x00000000003AFEB0 string=0x00000000003AFEB4 "U"
 *   insn=0x00000000003AFEC8 string=0x00000000003AFECC "h"
 *   insn=0x00000000003AFEE0 string=0x00000000003AFEE4 "i"@"
 *   insn=0x00000000003AFEE0 string=0x00000000001F9D20 "0'"
 *   insn=0x00000000003AFEE8 string=0x00000000003AFEEC "\n"
 *   insn=0x00000000003AFEEC string=0x00000000003AFEF0 "J"
 *   insn=0x00000000003AFEF0 string=0x00000000003AFEF4 "\n"
 *   insn=0x00000000003AFEF8 string=0x00000000003AFEFC "\t "
 *   insn=0x00000000003AFEFC string=0x00000000003AFF00 "3"
 *   insn=0x00000000003AFF00 string=0x00000000003AFF04 "h"
 *   insn=0x00000000003AFF04 string=0x00000000003AFF08 ""
 *   insn=0x00000000003AFF08 string=0x00000000003AFF0C "h"
 *   insn=0x00000000003AFF10 string=0x00000000003AFF14 "h"
 *   insn=0x00000000003AFF14 string=0x00000000003AFF18 "\t@"
 *   insn=0x00000000003AFF20 string=0x00000000003AFF24 "h\n@"
 *   insn=0x00000000003AFF24 string=0x00000000003AFF28 ""
 *   insn=0x00000000003AFF28 string=0x00000000003AFF2C "h\n"
 *   insn=0x00000000003AFF30 string=0x00000000003AFF34 "h"
 *   insn=0x00000000003AFF34 string=0x00000000003AFF38 "@"
 *   insn=0x00000000003AFF48 string=0x00000000003AFF4C ")"
 *   insn=0x00000000003AFF54 string=0x00000000003AFF58 "A"
 *   insn=0x00000000003AFF80 string=0x00000000003AFF84 ")=G"
 *   insn=0x00000000003AFF84 string=0x00000000003AFF88 "!"
 *   insn=0x00000000003AFF8C string=0x00000000003AFF90 "\t"
 *   insn=0x00000000003AFF8C string=0x00000000003AFFA4 "\t"
 *   insn=0x00000000003AFF90 string=0x00000000003AFF94 "*"
 *   insn=0x00000000003AFF94 string=0x00000000003AFF98 "\n"
 *   insn=0x00000000003AFFA0 string=0x00000000003AFFB0 "?"
 *   insn=0x00000000003AFFA4 string=0x00000000003AFFA8 "*"
 *   insn=0x00000000003AFFA8 string=0x00000000003AFFAC "\n"
 *   insn=0x00000000003AFFB0 string=0x00000000003AFFB4 "L"
 *   insn=0x00000000003AFFCC string=0x00000000003AFFD0 "J"
 *   insn=0x00000000003AFFD4 string=0x00000000003AFFD8 "(a"
 *   insn=0x00000000003AFFE4 string=0x00000000003AFFE8 "J=G"
 *   insn=0x00000000003AFFE8 string=0x00000000003AFFEC ")!"
 *   insn=0x00000000003AFFF0 string=0x00000000003AFFF4 "*"
 *   insn=0x00000000003AFFF0 string=0x00000000003B0020 "*"
 *   insn=0x00000000003AFFF4 string=0x00000000003AFFF8 "K"
 *   insn=0x00000000003AFFF8 string=0x00000000003AFFFC "+"
 *   insn=0x00000000003B0000 string=0x00000000003B0004 "_"
 *   insn=0x00000000003B0018 string=0x00000000003B001C "*F"
 *   insn=0x00000000003B0020 string=0x00000000003B0024 "K"
 *   insn=0x00000000003B0024 string=0x00000000003B0028 "+"
 *   insn=0x00000000003B0028 string=0x00000000003B002C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameData::LoadFromProtobufMessage(Caver::GameData *this, const Caver::Proto::GameData *a2)
{
  __int64 v4; // x23
  Caver::Item *v5; // x22
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x25
  __int64 v9; // x0
  Caver::Item **v10; // x1
  _QWORD *v11; // x23
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x23
  Caver::Quest *v15; // x22
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x23
  Caver::EntityClass *v19; // x22
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x25
  __int64 v23; // x0
  Caver::Item **v24; // x1
  _QWORD *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x8
  int64x2_t v28; // [xsp+48h] [xbp-70h]
  int64x2_t v29; // [xsp+48h] [xbp-70h]
  Caver::Item *v30; // [xsp+60h] [xbp-58h]
  Caver::Item *v31; // [xsp+60h] [xbp-58h]
  _QWORD *v32; // [xsp+68h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  if ( *((int *)a2 + 6) >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = (Caver::Item *)operator new(0x38u);
      Caver::Item::Item(v5);
      boost::detail::shared_count::shared_count<Caver::Item>();
      boost::detail::sp_enable_shared_from_this();
      Caver::Item::LoadFromProtobufMessage(v5, *(const Caver::Proto::Item **)(*((_QWORD *)a2 + 2) + 8 * v4));
      Caver::GameData::AddItem();
      if ( v32 )
      {
        v6 = v32[1] - 1LL;
        v32[1] = v6;
        if ( !v6 )
        {
          (*(void (__fastcall **)())(*v32 + 16LL))();
          v7 = v32[2] - 1LL;
          v32[2] = v7;
          if ( !v7 )
            (*(void (__fastcall **)())(*v32 + 24LL))();
        }
      }
      ++v4;
    }
    while ( v4 < *((int *)a2 + 6) );
  }
  if ( *((int *)a2 + 20) >= 1 )
  {
    v8 = 0;
    v28 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
    while ( 1 )
    {
      v9 = operator new(0x28u);
      *(int64x2_t *)v9 = v28;
      *(_QWORD *)(v9 + 16) = &byte_6FD2F8;
      v30 = (Caver::Item *)v9;
      boost::detail::shared_count::shared_count<Caver::Skill>();
      boost::detail::sp_enable_shared_from_this();
      Caver::Skill::LoadFromProtobufMessage(v30, *(const Caver::Proto::Skill **)(*((_QWORD *)a2 + 9) + 8 * v8));
      v10 = (Caver::Item **)*((_QWORD *)this + 7);
      if ( v10 != *((Caver::Item ***)this + 8) )
        break;
      std::vector<boost::shared_ptr<Caver::Skill>>::_M_insert_aux();
      v11 = v32;
      if ( v32 )
        goto LABEL_16;
LABEL_19:
      if ( ++v8 >= *((int *)a2 + 20) )
        goto LABEL_20;
    }
    *v10 = v30;
    v10[1] = (Caver::Item *)v32;
    if ( v32 )
      ++v32[1];
    *((_QWORD *)this + 7) = v10 + 2;
    v11 = v32;
    if ( !v32 )
      goto LABEL_19;
LABEL_16:
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
    goto LABEL_19;
  }
LABEL_20:
  if ( *((int *)a2 + 34) >= 1 )
  {
    v14 = 0;
    do
    {
      v15 = (Caver::Quest *)operator new(0x28u);
      Caver::Quest::Quest(v15);
      boost::detail::shared_count::shared_count<Caver::Quest>();
      boost::detail::sp_enable_shared_from_this();
      Caver::Quest::LoadFromProtobufMessage(v15, *(const Caver::Proto::Quest **)(*((_QWORD *)a2 + 16) + 8 * v14));
      Caver::GameData::AddQuest();
      if ( v32 )
      {
        v16 = v32[1] - 1LL;
        v32[1] = v16;
        if ( !v16 )
        {
          (*(void (__fastcall **)())(*v32 + 16LL))();
          v17 = v32[2] - 1LL;
          v32[2] = v17;
          if ( !v17 )
            (*(void (__fastcall **)())(*v32 + 24LL))();
        }
      }
      ++v14;
    }
    while ( v14 < *((int *)a2 + 34) );
  }
  if ( *((int *)a2 + 48) >= 1 )
  {
    v18 = 0;
    do
    {
      v19 = (Caver::EntityClass *)operator new(0x20u);
      Caver::EntityClass::EntityClass(v19);
      boost::detail::shared_count::shared_count<Caver::EntityClass>();
      boost::detail::sp_enable_shared_from_this();
      Caver::EntityClass::LoadFromProtobufMessage(
        v19,
        *(const Caver::Proto::EntityClass **)(*((_QWORD *)a2 + 23) + 8 * v18));
      Caver::GameData::AddEntityClass();
      if ( v32 )
      {
        v20 = v32[1] - 1LL;
        v32[1] = v20;
        if ( !v20 )
        {
          (*(void (__fastcall **)())(*v32 + 16LL))();
          v21 = v32[2] - 1LL;
          v32[2] = v21;
          if ( !v21 )
            (*(void (__fastcall **)())(*v32 + 24LL))();
        }
      }
      ++v18;
    }
    while ( v18 < *((int *)a2 + 48) );
  }
  if ( *((int *)a2 + 62) >= 1 )
  {
    v22 = 0;
    v29 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
    while ( 1 )
    {
      v23 = operator new(0x60u);
      *(_DWORD *)v23 = 0;
      *(int64x2_t *)(v23 + 8) = v29;
      *(int64x2_t *)(v23 + 24) = v29;
      *(_BYTE *)(v23 + 40) = 0;
      *(_QWORD *)(v23 + 56) = 0;
      *(_QWORD *)(v23 + 64) = 0;
      *(_QWORD *)(v23 + 72) = v23 + 56;
      *(_QWORD *)(v23 + 80) = v23 + 56;
      *(_QWORD *)(v23 + 88) = 0;
      v31 = (Caver::Item *)v23;
      boost::detail::shared_count::shared_count<Caver::GuideTarget>();
      boost::detail::sp_enable_shared_from_this();
      Caver::GuideTarget::LoadFromProtobufMessage(
        v31,
        *(const Caver::Proto::GuideTarget **)(*((_QWORD *)a2 + 30) + 8 * v22));
      v24 = (Caver::Item **)*((_QWORD *)this + 27);
      if ( v24 != *((Caver::Item ***)this + 28) )
        break;
      std::vector<boost::shared_ptr<Caver::GuideTarget>>::_M_insert_aux();
      v25 = v32;
      if ( v32 )
        goto LABEL_42;
LABEL_45:
      if ( ++v22 >= *((int *)a2 + 62) )
        return;
    }
    *v24 = v31;
    v24[1] = (Caver::Item *)v32;
    if ( v32 )
      ++v32[1];
    *((_QWORD *)this + 27) = v24 + 2;
    v25 = v32;
    if ( !v32 )
      goto LABEL_45;
LABEL_42:
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
    goto LABEL_45;
  }
}

