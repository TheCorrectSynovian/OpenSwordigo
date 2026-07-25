/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CD7DC
 * Mangled: _ZN5Caver14TextureLibrary25RefreshUnusedTexturesListEv
 * Demangled: Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *
 * Callers: 1
 *   0x00000000001F38F0  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F78F0  std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *   0x00000000001FA360  std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *   0x00000000001FDF40  Caver::Texture::TextureRetainCount(void)
 *   0x00000000001FE1A0  std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture>*,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000002023D0  std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004CD7C0  Caver::TextureLoadTimeSortPredicate(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x000000000054C640  sub_54C640
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 68
 *   insn=0x00000000004CD7F0 string=0x00000000004CD7F4 "W"
 *   insn=0x00000000004CD804 string=0x00000000004CD808 "u"
 *   insn=0x00000000004CD808 string=0x00000000004CD80C "v"
 *   insn=0x00000000004CD820 string=0x00000000004CD824 "@"
 *   insn=0x00000000004CD824 string=0x00000000004CD828 ""
 *   insn=0x00000000004CD828 string=0x00000000004CD82C ""
 *   insn=0x00000000004CD830 string=0x00000000004CD834 ""
 *   insn=0x00000000004CD834 string=0x00000000004CD838 ""
 *   insn=0x00000000004CD85C string=0x00000000004CD91C "t"
 *   insn=0x00000000004CD868 string=0x00000000004CD86C "@"
 *   insn=0x00000000004CD868 string=0x00000000004CD878 "8@"
 *   insn=0x00000000004CD86C string=0x00000000004CD870 ""
 *   insn=0x00000000004CD870 string=0x00000000004CD874 ""
 *   insn=0x00000000004CD878 string=0x00000000004CD87C ""
 *   insn=0x00000000004CD87C string=0x00000000004CD8BC "8@"
 *   insn=0x00000000004CD884 string=0x00000000004CD888 "@"
 *   insn=0x00000000004CD888 string=0x00000000004CD88C ""
 *   insn=0x00000000004CD88C string=0x00000000004CD890 ""
 *   insn=0x00000000004CD894 string=0x00000000004CD898 ""
 *   insn=0x00000000004CD898 string=0x00000000004CD89C ""
 *   insn=0x00000000004CD8A4 string=0x00000000004CD8A8 "f"
 *   insn=0x00000000004CD8B0 string=0x00000000004CD8B4 "a"
 *   insn=0x00000000004CD8BC string=0x00000000004CD8C0 ""
 *   insn=0x00000000004CD8C4 string=0x00000000001FDF40 "0'"
 *   insn=0x00000000004CD8D0 string=0x00000000004CD8D4 ""
 *   insn=0x00000000004CD8D4 string=0x00000000004CD8D8 "h"
 *   insn=0x00000000004CD8DC string=0x00000000004CD8E0 "?"
 *   insn=0x00000000004CD8E0 string=0x00000000004CD8E4 " "
 *   insn=0x00000000004CD8E4 string=0x00000000004CD8E8 " "
 *   insn=0x00000000004CD8EC string=0x00000000004CD8F0 "@"
 *   insn=0x00000000004CD8EC string=0x00000000004CD8FC "( "
 *   insn=0x00000000004CD8F0 string=0x00000000004CD8F4 ""
 *   insn=0x00000000004CD8F4 string=0x00000000004CD8F8 ""
 *   insn=0x00000000004CD90C string=0x00000000004CD910 "$"
 *   insn=0x00000000004CD920 string=0x00000000004CD924 "`"
 *   insn=0x00000000004CD92C string=0x00000000004CD930 "c"
 *   insn=0x00000000004CD930 string=0x00000000004CD934 "h"
 *   insn=0x00000000004CD930 string=0x00000000004CD7C0 ""
 *   insn=0x00000000004CD934 string=0x00000000004CD938 ""
 *   insn=0x00000000004CD93C string=0x00000000004CD940 """
 *   insn=0x00000000004CD950 string=0x00000000004CD954 "K"
 *   insn=0x00000000004CD958 string=0x00000000004CD95C "B"
 *   insn=0x00000000004CD96C string=0x00000000001F78F0 "0'"
 *   insn=0x00000000004CD984 string=0x00000000004CD988 "v"
 *   insn=0x00000000004CD988 string=0x00000000004CD98C "s""
 *   insn=0x00000000004CD988 string=0x00000000001FA360 "0'"
 *   insn=0x00000000004CD990 string=0x00000000004CD994 "a"
 *   insn=0x00000000004CD99C string=0x00000000004CD9A0 "B"
 *   insn=0x00000000004CD9BC string=0x00000000004CD9D8 ">"
 *   insn=0x00000000004CD9D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CD9E0 string=0x00000000004CD9E4 "("
 *   insn=0x00000000004CD9E4 string=0x00000000004CD9E8 "\t\t@"
 *   insn=0x00000000004CD9E8 string=0x00000000004CD9EC ")"
 *   insn=0x00000000004CD9EC string=0x00000000004CD9F0 "\t\t"
 *   insn=0x00000000004CD9F4 string=0x00000000004CD9F8 "\t"
 *   insn=0x00000000004CD9F8 string=0x00000000004CD9FC ")"
 *   insn=0x00000000004CDA00 string=0x00000000004CDA04 " "
 *   insn=0x00000000004CDA0C string=0x00000000004CDA10 "O"
 *   insn=0x00000000004CDA34 string=0x00000000004CDA38 "a"
 *   insn=0x00000000004CDA3C string=0x00000000004CDA40 "?"
 *   insn=0x00000000004CDA40 string=0x00000000004CDA44 "@"
 *   insn=0x00000000004CDA44 string=0x00000000004CDA48 "H"
 *   insn=0x00000000004CDA48 string=0x00000000004CDA4C "("
 *   insn=0x00000000004CDA50 string=0x00000000004CDA54 "\t\t@"
 *   insn=0x00000000004CDA50 string=0x00000000004CDA60 "( "
 *   insn=0x00000000004CDA54 string=0x00000000004CDA58 ")"
 *   insn=0x00000000004CDA58 string=0x00000000004CDA5C "\t\t"
 *   insn=0x00000000004CDA60 string=0x00000000004CDA64 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextureLibrary::RefreshUnusedTexturesList(Caver::TextureLibrary *this)
{
  __int64 *v2; // x19
  char *v3; // x21
  char *v4; // x22
  char *v5; // x24
  _DWORD *v6; // x0
  int v7; // w8
  _QWORD *v8; // x22
  __int64 v9; // x0
  _DWORD *v10; // x0
  int v11; // w8
  _QWORD *v12; // x1
  char *v13; // x20
  char *v14; // x19
  __int64 v15; // [xsp+30h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)((char *)this + 72);
  v3 = (char *)*((_QWORD *)this + 9);
  v4 = (char *)*((_QWORD *)this + 10);
  if ( v4 != v3 )
  {
    v5 = (char *)*((_QWORD *)this + 9);
    do
    {
      v6 = *(_DWORD **)v5;
      if ( *(_QWORD *)v5 )
      {
        v7 = v6[2] - 1;
        v6[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      v5 += 8;
    }
    while ( v4 != v5 );
  }
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 10) = v3;
  if ( (_QWORD *)((char *)this + 16) != v8 )
  {
    while ( 1 )
    {
      v9 = v8[5];
      v15 = v9;
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      if ( *(_QWORD *)(v9 + 112)
        || !*(_DWORD *)(v9 + 56)
        || (unsigned int)Caver::Texture::TextureRetainCount((Caver::Texture *)v9) != 2 )
      {
        goto LABEL_11;
      }
      v10 = (_DWORD *)v15;
      if ( !*(_BYTE *)(v15 + 160) )
        break;
LABEL_12:
      if ( v10 )
      {
        v11 = v10[2] - 1;
        v10[2] = v11;
        if ( !v11 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      v8 = (_QWORD *)sub_54C640(v8);
      if ( (_QWORD *)((char *)this + 16) == v8 )
      {
        v3 = (char *)*((_QWORD *)this + 10);
        goto LABEL_25;
      }
    }
    v12 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v12 == *((_QWORD **)this + 11) )
    {
      std::vector<boost::intrusive_ptr<Caver::Texture>>::_M_insert_aux();
    }
    else
    {
      *v12 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      *((_QWORD *)this + 10) = v12 + 1;
    }
LABEL_11:
    v10 = (_DWORD *)v15;
    goto LABEL_12;
  }
LABEL_25:
  v13 = (char *)*v2;
  if ( (char *)*v2 != v3 )
  {
    std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>();
    if ( v3 - v13 < 129 )
    {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>();
    }
    else
    {
      v14 = v13 + 128;
      std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>();
      if ( v13 + 128 != v3 )
      {
        do
        {
          std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,__gnu_cxx::__ops::_Val_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>();
          v14 += 8;
        }
        while ( v3 != v14 );
      }
    }
  }
}

