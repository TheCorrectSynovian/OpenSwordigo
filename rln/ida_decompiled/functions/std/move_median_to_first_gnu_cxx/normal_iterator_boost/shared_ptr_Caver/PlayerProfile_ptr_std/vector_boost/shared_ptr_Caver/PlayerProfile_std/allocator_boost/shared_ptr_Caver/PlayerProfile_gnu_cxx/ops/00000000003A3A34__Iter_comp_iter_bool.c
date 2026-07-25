/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A3A34
 * Mangled: _ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN5Caver13PlayerProfileEEESt6vectorIS6_SaIS6_EEEENS0_5__ops15_Iter_comp_iterIPFbRKS6_SF_EEEEvT_SJ_SJ_SJ_T0_
 * Demangled: std::__move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callers: 1
 *   0x0000000000200710  std::__move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>,std::allocator<boost::shared_ptr<Caver::PlayerProfile>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000003A3A64 string=0x00000000003A3A68 "@"
 *   insn=0x00000000003A3A7C string=0x00000000003A3A80 "i"
 *   insn=0x00000000003A3A80 string=0x00000000003A3A84 "h"
 *   insn=0x00000000003A3A88 string=0x00000000003A3A8C "%"
 *   insn=0x00000000003A3A8C string=0x00000000003A3B20 "h"
 *   insn=0x00000000003A3A98 string=0x00000000003A3A9C "@"
 *   insn=0x00000000003A3AA0 string=0x00000000003A3AA4 "i"
 *   insn=0x00000000003A3AA4 string=0x00000000003A3AA8 "h"
 *   insn=0x00000000003A3AAC string=0x00000000003A3AB0 "\t"
 *   insn=0x00000000003A3AB0 string=0x00000000003A3AD4 "h"
 *   insn=0x00000000003A3ABC string=0x00000000003A3AC0 "h"
 *   insn=0x00000000003A3AC8 string=0x00000000003A3ACC "i"
 *   insn=0x00000000003A3AE0 string=0x00000000003A3B2C "i"
 *   insn=0x00000000003A3AEC string=0x00000000003A3AF0 "h"
 *   insn=0x00000000003A3AF8 string=0x00000000003A3AFC "i"
 *   insn=0x00000000003A3B00 string=0x00000000003A3B04 "h"
 *   insn=0x00000000003A3B0C string=0x00000000003A3B10 ""
 *   insn=0x00000000003A3B14 string=0x00000000003A3B18 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__move_median_to_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::PlayerProfile> *,std::vector<boost::shared_ptr<Caver::PlayerProfile>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::shared_ptr<Caver::PlayerProfile> const&,boost::shared_ptr<Caver::PlayerProfile> const&)>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 result; // x0
  __int64 v11; // x9
  __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x9

  if ( (a5(a2, a3) & 1) != 0 )
  {
    result = a5(a3, a4);
    if ( (result & 1) != 0 )
    {
      v11 = *a1;
      *a1 = *a3;
      *a3 = v11;
LABEL_12:
      v14 = a3[1];
      a3[1] = a1[1];
      goto LABEL_13;
    }
    result = a5(a2, a4);
    v13 = *a1;
    if ( (result & 1) == 0 )
    {
      *a1 = *a2;
      *a2 = v13;
      goto LABEL_8;
    }
LABEL_10:
    *a1 = *a4;
    *a4 = v13;
    v14 = a4[1];
    a4[1] = a1[1];
    goto LABEL_13;
  }
  result = a5(a2, a4);
  if ( (result & 1) == 0 )
  {
    result = a5(a3, a4);
    v13 = *a1;
    if ( (result & 1) == 0 )
    {
      *a1 = *a3;
      *a3 = v13;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v12 = *a1;
  *a1 = *a2;
  *a2 = v12;
LABEL_8:
  v14 = a2[1];
  a2[1] = a1[1];
LABEL_13:
  a1[1] = v14;
  return result;
}

