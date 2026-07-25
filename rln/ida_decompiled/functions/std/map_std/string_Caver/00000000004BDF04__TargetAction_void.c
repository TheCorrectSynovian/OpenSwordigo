/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BDF04
 * Mangled: _ZNSt3mapISsN5Caver12TargetActionIFvRKSsbS3_EEESt4lessISsESaISt4pairIS2_S5_EEEixES3_
 * Demangled: std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x0000000000201B70  std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::operator[](std::string const&)
 *
 * Callees: 12
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C60  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::string const&)
 *   0x00000000001FB620  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair()
 *   0x0000000000203710  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BE33C  Caver::StoreController_Android::RestoreCompletedTransactions(Caver::TargetAction<void ()(std::vector<std::string,std::allocator<std::string>> const&,std::string const&)>)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 101
 *   insn=0x00000000004BDF20 string=0x00000000004BDF24 "I"
 *   insn=0x00000000004BDF24 string=0x00000000004BDF28 "("
 *   insn=0x00000000004BDF3C string=0x00000000004BDF40 "7"
 *   insn=0x00000000004BDF60 string=0x00000000004BDF64 ""
 *   insn=0x00000000004BDF68 string=0x00000000004BDF6C """
 *   insn=0x00000000004BDF70 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004BDF74 string=0x00000000004BDF78 "@"
 *   insn=0x00000000004BDF84 string=0x00000000004BDF88 ""
 *   insn=0x00000000004BDFC4 string=0x00000000004BDFC8 "@"
 *   insn=0x00000000004BDFCC string=0x00000000004BDFD0 "a"
 *   insn=0x00000000004BDFD0 string=0x00000000004BDFD4 ""
 *   insn=0x00000000004BDFD4 string=0x00000000004BDFD8 ")"
 *   insn=0x00000000004BDFDC string=0x00000000004BDFE0 """
 *   insn=0x00000000004BDFE0 string=0x00000000004BDFE4 "k"
 *   insn=0x00000000004BDFE4 string=0x00000000004BDFE8 "`"
 *   insn=0x00000000004BDFFC string=0x00000000004BE000 "J"
 *   insn=0x00000000004BE00C string=0x00000000004BE010 "\t\t@"
 *   insn=0x00000000004BE010 string=0x00000000004BE014 ")"
 *   insn=0x00000000004BE014 string=0x00000000004BE018 "\t\t"
 *   insn=0x00000000004BE020 string=0x00000000004BE024 "("
 *   insn=0x00000000004BE028 string=0x00000000004BE02C "h"
 *   insn=0x00000000004BE02C string=0x00000000004BE030 ""
 *   insn=0x00000000004BE030 string=0x00000000004BE034 ""
 *   insn=0x00000000004BE038 string=0x00000000004BE03C " a"
 *   insn=0x00000000004BE040 string=0x00000000004BE044 "!"
 *   insn=0x00000000004BE058 string=0x00000000004BE05C ",\t"
 *   insn=0x00000000004BE094 string=0x00000000001F7C60 "0'"
 *   insn=0x00000000004BE09C string=0x00000000004BE0A0 "6"
 *   insn=0x00000000004BE0A4 string=0x00000000004BE0A8 "s"
 *   insn=0x00000000004BE0AC string=0x00000000004BE0B0 " "
 *   insn=0x00000000004BE0B8 string=0x00000000004BE0BC ""
 *   insn=0x00000000004BE0BC string=0x00000000004BE0C0 ")"
 *   insn=0x00000000004BE0C4 string=0x00000000004BE0C8 """
 *   insn=0x00000000004BE0C8 string=0x00000000004BE0CC "1"
 *   insn=0x00000000004BE0E8 string=0x00000000004BE0EC "`"
 *   insn=0x00000000004BE118 string=0x00000000004BE11C ""
 *   insn=0x00000000004BE124 string=0x00000000004BE128 ">"
 *   insn=0x00000000004BE128 string=0x00000000001FB620 "0'"
 *   insn=0x00000000004BE12C string=0x00000000004BE130 "h"
 *   insn=0x00000000004BE130 string=0x00000000004BE134 "("
 *   insn=0x00000000004BE134 string=0x00000000004BE138 ""
 *   insn=0x00000000004BE138 string=0x00000000004BE13C ""
 *   insn=0x00000000004BE144 string=0x00000000004BE148 " a"
 *   insn=0x00000000004BE160 string=0x00000000004BE164 "@"
 *   insn=0x00000000004BE164 string=0x00000000004BE168 ""
 *   insn=0x00000000004BE168 string=0x00000000004BE16C ""
 *   insn=0x00000000004BE170 string=0x00000000004BE174 ""
 *   insn=0x00000000004BE174 string=0x00000000004BE178 "@"
 *   insn=0x00000000004BE180 string=0x00000000004BE184 ""
 *   insn=0x00000000004BE18C string=0x00000000004BE190 "A"
 *   insn=0x00000000004BE190 string=0x00000000004BE194 "`"
 *   insn=0x00000000004BE190 string=0x00000000004BE1B8 "F"
 *   insn=0x00000000004BE1B8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BE1C4 string=0x00000000004BE1C8 "\t\t@"
 *   insn=0x00000000004BE1C8 string=0x00000000004BE1CC ")"
 *   insn=0x00000000004BE1CC string=0x00000000004BE1D0 "\t\t"
 *   insn=0x00000000004BE1D4 string=0x00000000004BE1D8 "\t"
 *   insn=0x00000000004BE1D8 string=0x00000000004BE1DC ")@"
 *   insn=0x00000000004BE1E0 string=0x00000000004BE1E4 " "
 *   insn=0x00000000004BE1E4 string=0x00000000004BE1E8 "C"
 *   insn=0x00000000004BE1F4 string=0x00000000004BE1F8 "("
 *   insn=0x00000000004BE1F8 string=0x00000000004BE1FC "\t\t@"
 *   insn=0x00000000004BE1FC string=0x00000000004BE200 ")"
 *   insn=0x00000000004BE200 string=0x00000000004BE204 "\t\t"
 *   insn=0x00000000004BE208 string=0x00000000004BE20C "\t"
 *   insn=0x00000000004BE20C string=0x00000000004BE210 ")@"
 *   insn=0x00000000004BE214 string=0x00000000004BE218 " "
 *   insn=0x00000000004BE21C string=0x00000000004BE220 ")"
 *   insn=0x00000000004BE220 string=0x00000000004BE224 ")"
 *   insn=0x00000000004BE230 string=0x00000000004BE234 ")"
 *   insn=0x00000000004BE234 string=0x00000000004BE238 ")=G"
 *   insn=0x00000000004BE238 string=0x00000000004BE23C "!"
 *   insn=0x00000000004BE240 string=0x00000000004BE244 "\t"
 *   insn=0x00000000004BE240 string=0x00000000004BE270 "\t"
 *   insn=0x00000000004BE244 string=0x00000000004BE248 "*"
 *   insn=0x00000000004BE248 string=0x00000000004BE24C "\n"
 *   insn=0x00000000004BE250 string=0x00000000004BE254 "?"
 *   insn=0x00000000004BE254 string=0x00000000004BE258 "L"
 *   insn=0x00000000004BE25C string=0x00000000004BE260 "Q"
 *   insn=0x00000000004BE264 string=0x00000000004BE268 ""
 *   insn=0x00000000004BE268 string=0x00000000004BE2A8 "("
 *   insn=0x00000000004BE270 string=0x00000000004BE274 "*"
 *   insn=0x00000000004BE274 string=0x00000000004BE278 "\n"
 *   insn=0x00000000004BE278 string=0x00000000004BE27C "?"
 *   insn=0x00000000004BE280 string=0x00000000004BE284 ""
 *   insn=0x00000000004BE2A0 string=0x00000000004BE2A4 "h"
 *   insn=0x00000000004BE2A8 string=0x00000000004BE2AC ""
 *   insn=0x00000000004BE2AC string=0x00000000004BE2B0 ""
 *   insn=0x00000000004BE2B8 string=0x00000000004BE2BC " a"
 *   insn=0x00000000004BE2D4 string=0x00000000004BE2D8 "@"
 *   insn=0x00000000004BE2D8 string=0x00000000004BE2DC ""
 *   insn=0x00000000004BE2DC string=0x00000000004BE2E0 ""
 *   insn=0x00000000004BE2E4 string=0x00000000004BE2E8 ""
 *   insn=0x00000000004BE2E8 string=0x00000000004BE2EC "@"
 *   insn=0x00000000004BE2F4 string=0x00000000004BE2F8 "s"
 *   insn=0x00000000004BE304 string=0x00000000004BE308 "\t\t@"
 *   insn=0x00000000004BE308 string=0x00000000004BE30C ")"
 *   insn=0x00000000004BE30C string=0x00000000004BE310 "\t\t"
 *   insn=0x00000000004BE314 string=0x00000000004BE318 "\t"
 *   insn=0x00000000004BE318 string=0x00000000004BE31C ")@"
 *   insn=0x00000000004BE320 string=0x00000000004BE324 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::operator[](
        __int64 a1,
        const void **a2)
{
  __int64 node; // x19
  _QWORD *v3; // x28
  const void *v4; // x23
  const void **v5; // x22
  unsigned __int64 v6; // x25
  __int64 v7; // x20
  _QWORD *v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x21
  size_t v11; // x2
  int v12; // w0
  int v13; // w0
  _QWORD *v14; // x1
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x9
  __int64 v17; // x23
  size_t v18; // x2
  int v19; // w0
  int v20; // w0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x22
  unsigned int v24; // w23
  _QWORD *v25; // x1
  unsigned __int64 v26; // x8
  unsigned __int64 v27; // x9
  __int64 v28; // x19
  size_t v29; // x2
  unsigned int v30; // w0
  void *v33[9]; // [xsp+48h] [xbp-98h] BYREF

  node = a1 + 8;
  v33[8] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    v4 = *a2;
    v5 = a2;
    v6 = *((_QWORD *)*a2 - 3);
    v7 = a1 + 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v3[4];
        v9 = *(v8 - 3);
        v10 = v9 - v6;
        v11 = v9 <= v6 ? *(v8 - 3) : v6;
        v12 = memcmp(v8, v4, v11);
        if ( v12 )
          break;
        if ( v10 <= 0x7FFFFFFF )
        {
          v13 = v10 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v10;
          if ( v13 < 0 )
            goto LABEL_8;
        }
LABEL_15:
        node = (__int64)v3;
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_18;
      }
      if ( (v12 & 0x80000000) == 0 )
        goto LABEL_15;
LABEL_8:
      v3 = (_QWORD *)v3[3];
      if ( !v3 )
        goto LABEL_18;
    }
  }
  v5 = a2;
  v7 = a1 + 8;
LABEL_18:
  if ( node != v7 )
  {
    v14 = *(_QWORD **)(node + 32);
    v15 = *((_QWORD *)*v5 - 3);
    v16 = *(v14 - 3);
    v17 = v15 - v16;
    if ( v15 <= v16 )
      v18 = *((_QWORD *)*v5 - 3);
    else
      v18 = *(v14 - 3);
    v19 = memcmp(*v5, v14, v18);
    if ( v19 )
    {
      if ( (v19 & 0x80000000) == 0 )
        return node + 40;
    }
    else
    {
      if ( v17 > 0x7FFFFFFF )
        return node + 40;
      v20 = v17 <= (__int64)0xFFFFFFFF80000000LL ? 0x80000000 : v17;
      if ( (v20 & 0x80000000) == 0 )
        return node + 40;
    }
  }
  sub_56A528(v33, v5);
  memset(&v33[1], 0, 24);
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_get_insert_hint_unique_pos();
  node = v21;
  v23 = v22;
  if ( v22 )
  {
    v24 = 1;
    if ( !v21 && v7 != v22 )
    {
      v25 = *(_QWORD **)(v22 + 32);
      v26 = *((_QWORD *)v33[0] - 3);
      v27 = *(v25 - 3);
      v28 = v26 - v27;
      if ( v26 <= v27 )
        v29 = *((_QWORD *)v33[0] - 3);
      else
        v29 = *(v25 - 3);
      v30 = memcmp(v33[0], v25, v29);
      if ( !v30 )
      {
        v30 = 0x7FFFFFFF;
        if ( v28 <= 0x7FFFFFFF )
        {
          if ( v28 <= (__int64)0xFFFFFFFF80000000LL )
            v30 = 0x80000000;
          else
            v30 = v28;
        }
      }
      v24 = v30 >> 31;
    }
    node = std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::_M_create_node();
    sub_54C8A0(v24, node, v23, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair();
  return node + 40;
}

