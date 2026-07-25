/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD890
 * Mangled: _ZNSt3mapISsN5Caver12TargetActionIFvRKSsRKN5boost10shared_ptrINS0_12StoreProductEEES3_EEESt4lessISsESaISt4pairIS2_SB_EEEixES3_
 * Demangled: std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::operator[](std::string const&)
 *
 * Callers: 1
 *   0x00000000002029B0  std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::operator[](std::string const&)
 *
 * Callees: 12
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC460  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair()
 *   0x00000000001FD460  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::string const&)
 *   0x0000000000201090  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_create_node(std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BDCC8  Caver::StoreController_Android::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>)
 *   0x000000000054C8A0  sub_54C8A0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 97
 *   insn=0x00000000004BD8AC string=0x00000000004BD8B0 "I"
 *   insn=0x00000000004BD8B0 string=0x00000000004BD8B4 "("
 *   insn=0x00000000004BD8C8 string=0x00000000004BD8CC "7"
 *   insn=0x00000000004BD8EC string=0x00000000004BD8F0 ""
 *   insn=0x00000000004BD8F4 string=0x00000000004BD8F8 """
 *   insn=0x00000000004BD8F8 string=0x00000000004BD8FC "%"
 *   insn=0x00000000004BD8FC string=0x00000000001F5190 "P'"
 *   insn=0x00000000004BD900 string=0x00000000004BD904 "@"
 *   insn=0x00000000004BD910 string=0x00000000004BD914 ""
 *   insn=0x00000000004BD950 string=0x00000000004BD954 "@"
 *   insn=0x00000000004BD958 string=0x00000000004BD95C "a"
 *   insn=0x00000000004BD95C string=0x00000000004BD960 ""
 *   insn=0x00000000004BD960 string=0x00000000004BD964 ")"
 *   insn=0x00000000004BD968 string=0x00000000004BD96C """
 *   insn=0x00000000004BD96C string=0x00000000004BD970 ""
 *   insn=0x00000000004BD970 string=0x00000000004BD974 "`"
 *   insn=0x00000000004BD998 string=0x00000000004BD99C "\t\t@"
 *   insn=0x00000000004BD99C string=0x00000000004BD9A0 ")"
 *   insn=0x00000000004BD9A0 string=0x00000000004BD9A4 "\t\t"
 *   insn=0x00000000004BD9AC string=0x00000000004BD9B0 "("
 *   insn=0x00000000004BD9B4 string=0x00000000004BD9B8 "h"
 *   insn=0x00000000004BD9B8 string=0x00000000004BD9BC ""
 *   insn=0x00000000004BD9BC string=0x00000000004BD9C0 ""
 *   insn=0x00000000004BD9C4 string=0x00000000004BD9C8 " a"
 *   insn=0x00000000004BD9CC string=0x00000000004BD9D0 "!"
 *   insn=0x00000000004BD9E4 string=0x00000000004BD9E8 ",\t"
 *   insn=0x00000000004BDA20 string=0x00000000001FD460 "0'"
 *   insn=0x00000000004BDA28 string=0x00000000004BDA2C "6"
 *   insn=0x00000000004BDA30 string=0x00000000004BDA34 "s"
 *   insn=0x00000000004BDA38 string=0x00000000004BDA3C " "
 *   insn=0x00000000004BDA44 string=0x00000000004BDA48 ""
 *   insn=0x00000000004BDA48 string=0x00000000004BDA4C ")"
 *   insn=0x00000000004BDA50 string=0x00000000004BDA54 """
 *   insn=0x00000000004BDA74 string=0x00000000004BDA78 "`"
 *   insn=0x00000000004BDAA4 string=0x00000000004BDAA8 ""
 *   insn=0x00000000004BDAB0 string=0x00000000004BDAB4 "k"
 *   insn=0x00000000004BDAB4 string=0x00000000001FC460 "0'"
 *   insn=0x00000000004BDAB8 string=0x00000000004BDABC "h"
 *   insn=0x00000000004BDABC string=0x00000000004BDAC0 "("
 *   insn=0x00000000004BDAC0 string=0x00000000004BDAC4 ""
 *   insn=0x00000000004BDAC4 string=0x00000000004BDAC8 ""
 *   insn=0x00000000004BDAD0 string=0x00000000004BDAD4 " a"
 *   insn=0x00000000004BDAEC string=0x00000000004BDAF0 "@"
 *   insn=0x00000000004BDAF0 string=0x00000000004BDAF4 ""
 *   insn=0x00000000004BDAF4 string=0x00000000004BDAF8 ""
 *   insn=0x00000000004BDAFC string=0x00000000004BDB00 ""
 *   insn=0x00000000004BDB00 string=0x00000000004BDB04 "@"
 *   insn=0x00000000004BDB0C string=0x00000000004BDB10 ""
 *   insn=0x00000000004BDB18 string=0x00000000004BDB1C "A"
 *   insn=0x00000000004BDB1C string=0x00000000004BDB20 "`"
 *   insn=0x00000000004BDB44 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BDB50 string=0x00000000004BDB54 "\t\t@"
 *   insn=0x00000000004BDB54 string=0x00000000004BDB58 ")"
 *   insn=0x00000000004BDB58 string=0x00000000004BDB5C "\t\t"
 *   insn=0x00000000004BDB60 string=0x00000000004BDB64 "\t"
 *   insn=0x00000000004BDB64 string=0x00000000004BDB68 ")@"
 *   insn=0x00000000004BDB6C string=0x00000000004BDB70 " "
 *   insn=0x00000000004BDB70 string=0x00000000004BDB74 "C"
 *   insn=0x00000000004BDB80 string=0x00000000004BDB84 "("
 *   insn=0x00000000004BDB84 string=0x00000000004BDB88 "\t\t@"
 *   insn=0x00000000004BDB88 string=0x00000000004BDB8C ")"
 *   insn=0x00000000004BDB8C string=0x00000000004BDB90 "\t\t"
 *   insn=0x00000000004BDB94 string=0x00000000004BDB98 "\t"
 *   insn=0x00000000004BDB98 string=0x00000000004BDB9C ")@"
 *   insn=0x00000000004BDBA0 string=0x00000000004BDBA4 " "
 *   insn=0x00000000004BDBA8 string=0x00000000004BDBAC "I"
 *   insn=0x00000000004BDBAC string=0x00000000004BDBB0 ")"
 *   insn=0x00000000004BDBBC string=0x00000000004BDBC0 ")"
 *   insn=0x00000000004BDBC0 string=0x00000000004BDBC4 ")=G"
 *   insn=0x00000000004BDBC4 string=0x00000000004BDBC8 "!"
 *   insn=0x00000000004BDBCC string=0x00000000004BDBD0 "\t"
 *   insn=0x00000000004BDBCC string=0x00000000004BDBFC "\t"
 *   insn=0x00000000004BDBD0 string=0x00000000004BDBD4 "*"
 *   insn=0x00000000004BDBD4 string=0x00000000004BDBD8 "\n"
 *   insn=0x00000000004BDBDC string=0x00000000004BDBE0 "?"
 *   insn=0x00000000004BDBE0 string=0x00000000004BDBE4 "L"
 *   insn=0x00000000004BDBF0 string=0x00000000004BDBF4 ""
 *   insn=0x00000000004BDBF4 string=0x00000000004BDC34 "("
 *   insn=0x00000000004BDBFC string=0x00000000004BDC00 "*"
 *   insn=0x00000000004BDC00 string=0x00000000004BDC04 "\n"
 *   insn=0x00000000004BDC04 string=0x00000000004BDC08 "?"
 *   insn=0x00000000004BDC0C string=0x00000000004BDC10 ""
 *   insn=0x00000000004BDC2C string=0x00000000004BDC30 "h"
 *   insn=0x00000000004BDC34 string=0x00000000004BDC38 ""
 *   insn=0x00000000004BDC38 string=0x00000000004BDC3C ""
 *   insn=0x00000000004BDC44 string=0x00000000004BDC48 " a"
 *   insn=0x00000000004BDC60 string=0x00000000004BDC64 "@"
 *   insn=0x00000000004BDC64 string=0x00000000004BDC68 ""
 *   insn=0x00000000004BDC68 string=0x00000000004BDC6C ""
 *   insn=0x00000000004BDC70 string=0x00000000004BDC74 ""
 *   insn=0x00000000004BDC74 string=0x00000000004BDC78 "@"
 *   insn=0x00000000004BDC90 string=0x00000000004BDC94 "\t\t@"
 *   insn=0x00000000004BDC94 string=0x00000000004BDC98 ")"
 *   insn=0x00000000004BDC98 string=0x00000000004BDC9C "\t\t"
 *   insn=0x00000000004BDCA0 string=0x00000000004BDCA4 "\t"
 *   insn=0x00000000004BDCA4 string=0x00000000004BDCA8 ")@"
 *   insn=0x00000000004BDCAC string=0x00000000004BDCB0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::operator[](
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
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_get_insert_hint_unique_pos();
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
    node = std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::_M_create_node();
    sub_54C8A0(v24, node, v23, v7);
    ++*(_QWORD *)(a1 + 40);
  }
  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair();
  return node + 40;
}

