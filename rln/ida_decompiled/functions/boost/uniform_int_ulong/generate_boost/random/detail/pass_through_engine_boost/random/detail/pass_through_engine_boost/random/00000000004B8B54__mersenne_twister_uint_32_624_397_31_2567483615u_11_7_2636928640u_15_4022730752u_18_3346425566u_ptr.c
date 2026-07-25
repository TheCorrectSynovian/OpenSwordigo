/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8B54
 * Mangled: _ZN5boost11uniform_intImE8generateINS_6random6detail19pass_through_engineINS5_IPNS3_16mersenne_twisterIjLi32ELi624ELi397ELi31ELj2567483615ELi11ELi7ELj2636928640ELi15ELj4022730752ELi18ELj3346425566EEEEEEEEEmRT_mmm
 * Demangled: boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *
 * Callers: 2
 *   0x00000000001F88B0  boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *   0x00000000004B8A9C  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *
 * Callees: 2
 *   0x00000000001F3410  boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()(void)
 *   0x00000000001F88B0  boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *
 * Referenced strings: 25
 *   insn=0x00000000004B8B7C string=0x00000000004B8B80 ""
 *   insn=0x00000000004B8B8C string=0x00000000004B8B90 " "
 *   insn=0x00000000004B8B90 string=0x00000000004B8B94 "vB "
 *   insn=0x00000000004B8B90 string=0x00000000001F3410 "P'"
 *   insn=0x00000000004B8B94 string=0x00000000004B8B98 "F"
 *   insn=0x00000000004B8B9C string=0x00000000004B8BA0 "D"
 *   insn=0x00000000004B8BB0 string=0x00000000004B8BB4 ""
 *   insn=0x00000000004B8BE0 string=0x00000000004B8BE4 "I"
 *   insn=0x00000000004B8BE8 string=0x00000000004B8BEC "?"
 *   insn=0x00000000004B8BF4 string=0x00000000004B8BF8 "_"
 *   insn=0x00000000004B8C18 string=0x00000000004B8C1C "%"
 *   insn=0x00000000004B8C1C string=0x00000000004B8C20 ""
 *   insn=0x00000000004B8C1C string=0x00000000001F88B0 "0'"
 *   insn=0x00000000004B8C28 string=0x00000000004B8C38 "|"
 *   insn=0x00000000004B8C38 string=0x00000000004B8C3C ""
 *   insn=0x00000000004B8C44 string=0x00000000004B8C48 "\n"
 *   insn=0x00000000004B8C4C string=0x00000000004B8C50 "("
 *   insn=0x00000000004B8C58 string=0x00000000004B8C5C ""
 *   insn=0x00000000004B8C5C string=0x00000000004B8C60 "v"
 *   insn=0x00000000004B8C7C string=0x00000000004B8C80 "\t"
 *   insn=0x00000000004B8C80 string=0x00000000004B8C84 ")\t"
 *   insn=0x00000000004B8C84 string=0x00000000004B8C88 "(}"
 *   insn=0x00000000004B8C90 string=0x00000000004B8C94 "6"
 *   insn=0x00000000004B8C9C string=0x00000000004B8CA0 ""
 *   insn=0x00000000004B8CA8 string=0x00000000004B8CAC "vB("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::uniform_int<unsigned long>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // x27
  __int64 v7; // x22
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x23
  unsigned __int64 v10; // x25
  __int64 v11; // x28
  unsigned __int64 v12; // x26
  unsigned __int64 v13; // x0
  int v14; // w8
  unsigned __int64 v15; // x8
  _BOOL4 v16; // w9
  __int64 v17; // x10
  _BOOL4 v18; // w8
  bool v19; // zf
  unsigned int v20; // w9
  unsigned int v21; // w22
  unsigned int v22; // w8

  if ( !a4 )
    return a2;
  if ( a4 == 0xFFFFFFFF )
    return a2
         + (unsigned int)boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()();
  v8 = HIDWORD(a4);
  if ( HIDWORD(a4) )
  {
    v9 = a4 + 1;
    if ( (_DWORD)a4 == -1 )
      ++v8;
    if ( a4 == -1 )
      v10 = v8;
    else
      v10 = HIDWORD(v9);
    do
    {
      v7 = 0;
      if ( v10 )
      {
        v11 = 1;
        while ( 1 )
        {
          v12 = v11 << 32;
          v7 += v11
              * (unsigned int)boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()();
          if ( 0xFFFFFFFFLL * v11 == v9 - v11 )
            break;
          v11 <<= 32;
          if ( v12 > v10 )
            goto LABEL_17;
        }
        v14 = 1;
      }
      else
      {
        v12 = 1;
LABEL_17:
        v13 = boost::uniform_int<unsigned long>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>();
        if ( 0xFFFFFFFFFFFFFFFFLL / v12 >= v13 )
        {
          v15 = v13 * v12 + v7;
          v16 = __CFADD__(v13 * v12, v7);
          v17 = v15 + a2;
          v18 = v15 > a4;
          v19 = !v16 && !v18;
          if ( v16 || v18 )
            v14 = 3;
          else
            v14 = 1;
          if ( v19 )
            v7 = v17;
          else
            v7 = v4;
        }
        else
        {
          v14 = 3;
          v7 = v4;
        }
      }
      v4 = v7;
    }
    while ( v14 == 3 );
  }
  else
  {
    v20 = 0xFFFFFFFF / ((int)a4 + 1);
    if ( ~(v20 * ((_DWORD)a4 + 1)) == (_DWORD)a4 )
      v21 = v20 + 1;
    else
      v21 = 0xFFFFFFFF / ((int)a4 + 1);
    do
      v22 = (unsigned int)boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>::operator()()
          / v21;
    while ( v22 > (unsigned int)a4 );
    return a2 + v22;
  }
  return v7;
}

