/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A2F8C
 * Mangled: _ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver16ProfilePanelViewEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(boost::shared_ptr<Caver::ProfilePanelView> *)
 *
 * Callers: 1
 *   0x0000000000201F20  boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(boost::shared_ptr<Caver::ProfilePanelView> *)
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FE6D0  std::__make_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x0000000000200710  std::__move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x0000000000201ED0  std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x0000000000202FB0  std::__pop_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 33
 *   insn=0x00000000003A2FA8 string=0x00000000003A2FAC "h"
 *   insn=0x00000000003A2FBC string=0x00000000003A2FC0 "5"
 *   insn=0x00000000003A2FC4 string=0x00000000003A2FC8 ""
 *   insn=0x00000000003A2FD4 string=0x00000000003A2FD8 "\t@"
 *   insn=0x00000000003A2FE4 string=0x00000000003A2FE8 ""
 *   insn=0x00000000003A2FF4 string=0x00000000003A2FF8 "@"
 *   insn=0x00000000003A3020 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003A3048 string=0x00000000003A304C "6"
 *   insn=0x00000000003A3050 string=0x00000000003A3054 ""
 *   insn=0x00000000003A3060 string=0x00000000003A3064 "\t@"
 *   insn=0x00000000003A3070 string=0x00000000003A3074 ""
 *   insn=0x00000000003A3080 string=0x00000000003A3084 "@"
 *   insn=0x00000000003A3094 string=0x00000000003A3098 "a"
 *   insn=0x00000000003A30A4 string=0x00000000003A30A8 "z"
 *   insn=0x00000000003A30E8 string=0x00000000003A30EC ""
 *   insn=0x00000000003A30EC string=0x00000000003A30F0 ""
 *   insn=0x00000000003A3120 string=0x00000000003A3124 "`"
 *   insn=0x00000000003A3128 string=0x00000000003A312C "9C"
 *   insn=0x00000000003A3134 string=0x00000000003A3138 "`"
 *   insn=0x00000000003A313C string=0x00000000003A3140 "?"
 *   insn=0x00000000003A3140 string=0x00000000003A3144 "I"
 *   insn=0x00000000003A3144 string=0x00000000003A3148 "("
 *   insn=0x00000000003A3148 string=0x00000000003A314C "\t"
 *   insn=0x00000000003A314C string=0x00000000003A3150 ""
 *   insn=0x00000000003A3150 string=0x00000000003A3154 ")"
 *   insn=0x00000000003A3154 string=0x00000000003A3158 "@"
 *   insn=0x00000000003A3158 string=0x00000000003A315C ")@"
 *   insn=0x00000000003A315C string=0x00000000003A3160 "("
 *   insn=0x00000000003A3160 string=0x00000000003A3164 "\t"
 *   insn=0x00000000003A317C string=0x00000000003A3180 "T{"
 *   insn=0x00000000003A3180 string=0x00000000003A3184 ""
 *   insn=0x00000000003A31A0 string=0x00000000003A31A4 "Km"
 *   insn=0x00000000003A31B8 string=0x00000000003A31BC "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::checked_array_delete<boost::shared_ptr<Caver::ProfilePanelView>>(_QWORD *a1)
{
  __int64 v2; // x8
  __int64 v3; // x23
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8

  if ( a1 )
  {
    v2 = *(a1 - 1);
    if ( v2 )
    {
      v3 = 2 * v2;
      do
      {
        v4 = (_QWORD *)a1[v3 - 1];
        if ( v4 )
        {
          v5 = v4[1] - 1LL;
          v4[1] = v5;
          if ( !v5 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
            v6 = v4[2] - 1LL;
            v4[2] = v6;
            if ( !v6 )
              (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
          }
        }
        v3 -= 2;
      }
      while ( v3 * 8 );
    }
    operator delete[](a1 - 1);
  }
}

