/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CE724
 * Mangled: _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPN5boost13intrusive_ptrIN5Caver7TextureEEESt6vectorIS6_SaIS6_EEEElNS0_5__ops15_Iter_comp_iterIPFbRKS6_SF_EEEEvT_SJ_T0_T1_
 * Demangled: std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callers: 1
 *   0x00000000002023D0  std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Callees: 3
 *   0x00000000001F65C0  std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *   0x00000000001FE350  std::__pop_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *   0x00000000002023D0  std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *
 * Referenced strings: 27
 *   insn=0x00000000004CE75C string=0x00000000004CE760 ""
 *   insn=0x00000000004CE760 string=0x00000000004CE764 ""
 *   insn=0x00000000004CE778 string=0x00000000004CE77C "`"
 *   insn=0x00000000004CE77C string=0x00000000004CE780 "@"
 *   insn=0x00000000004CE788 string=0x00000000004CE78C "`"
 *   insn=0x00000000004CE790 string=0x00000000004CE794 "("
 *   insn=0x00000000004CE79C string=0x00000000004CE7A0 ")"
 *   insn=0x00000000004CE7AC string=0x00000000004CE7B0 "`"
 *   insn=0x00000000004CE7C8 string=0x00000000004CE7CC "`"
 *   insn=0x00000000004CE7D0 string=0x00000000004CE7D4 " "
 *   insn=0x00000000004CE7D4 string=0x00000000004CE7F8 "\t"
 *   insn=0x00000000004CE7DC string=0x00000000004CE7E0 ""
 *   insn=0x00000000004CE7E8 string=0x00000000004CE7EC "`"
 *   insn=0x00000000004CE7F4 string=0x00000000004CE808 ")"
 *   insn=0x00000000004CE7FC string=0x00000000004CE800 ""
 *   insn=0x00000000004CE80C string=0x00000000004CE810 "("
 *   insn=0x00000000004CE828 string=0x00000000004CE82C "`"
 *   insn=0x00000000004CE830 string=0x00000000004CE834 "9#"
 *   insn=0x00000000004CE83C string=0x00000000004CE840 "`"
 *   insn=0x00000000004CE844 string=0x00000000004CE848 "?"
 *   insn=0x00000000004CE84C string=0x00000000004CE850 "("
 *   insn=0x00000000004CE850 string=0x00000000004CE854 "\t"
 *   insn=0x00000000004CE854 string=0x00000000004CE858 ""
 *   insn=0x00000000004CE858 string=0x00000000004CE85C ")"
 *   insn=0x00000000004CE874 string=0x00000000004CE878 ""
 *   insn=0x00000000004CE894 string=0x00000000004CE898 "J"
 *   insn=0x00000000004CE898 string=0x00000000001F65C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(char *, char *))
{
  char *v4; // x21
  unsigned __int64 v6; // x8
  char *v9; // x25
  char *v10; // x24
  __int64 v11; // x9
  __int64 v12; // x9
  char v13; // w0
  __int64 v14; // x8
  char v15; // w0
  char *v16; // x25
  char *i; // x24
  __int64 v18; // x9
  char *v19; // x21
  bool v20; // cc

  v4 = a2;
  v6 = a2 - a1;
  if ( a2 - a1 >= 129 )
  {
    while ( 1 )
    {
      if ( !a3 )
      {
        std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>();
        v19 = v4 - 8;
        do
        {
          std::__pop_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>();
          v20 = v19 - a1 <= 8;
          v19 -= 8;
        }
        while ( !v20 );
        return;
      }
      v9 = &a1[(v6 >> 1) & 0x7FFFFFFFFFFFFFF8LL];
      --a3;
      v10 = v4 - 8;
      if ( (a4(a1 + 8, v9) & 1) != 0 )
        break;
      if ( (a4(a1 + 8, v4 - 8) & 1) != 0 )
      {
        v12 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 1) = v12;
        goto LABEL_13;
      }
      v15 = a4(v9, v4 - 8);
      v14 = *(_QWORD *)a1;
      if ( (v15 & 1) != 0 )
        goto LABEL_11;
      *(_QWORD *)a1 = *(_QWORD *)v9;
      *(_QWORD *)v9 = v14;
LABEL_13:
      v16 = v4;
      for ( i = a1 + 8; ; i += 8 )
      {
        while ( (a4(i, a1) & 1) != 0 )
          i += 8;
        do
          v16 -= 8;
        while ( (a4(a1, v16) & 1) != 0 );
        if ( v16 <= i )
          break;
        v18 = *(_QWORD *)i;
        *(_QWORD *)i = *(_QWORD *)v16;
        *(_QWORD *)v16 = v18;
      }
      std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>();
      v6 = i - a1;
      v4 = i;
      if ( i - a1 <= 128 )
        return;
    }
    if ( (a4(v9, v4 - 8) & 1) != 0 )
    {
      v11 = *(_QWORD *)a1;
      *(_QWORD *)a1 = *(_QWORD *)v9;
      *(_QWORD *)v9 = v11;
      goto LABEL_13;
    }
    v13 = a4(a1 + 8, v4 - 8);
    v14 = *(_QWORD *)a1;
    if ( (v13 & 1) == 0 )
    {
      *(_QWORD *)a1 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v14;
      goto LABEL_13;
    }
LABEL_11:
    *(_QWORD *)a1 = *(_QWORD *)v10;
    *(_QWORD *)v10 = v14;
    goto LABEL_13;
  }
}

