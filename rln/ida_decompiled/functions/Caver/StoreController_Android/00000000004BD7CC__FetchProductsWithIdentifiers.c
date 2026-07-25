/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD7CC
 * Mangled: _ZN5Caver23StoreController_Android28FetchProductsWithIdentifiersERKSt6vectorISsSaISsEENS_12TargetActionIFvRKSsRKN5boost10shared_ptrINS_12StoreProductEEES8_EEE
 * Demangled: Caver::StoreController_Android::FetchProductsWithIdentifiers(std::vector<std::string,std::allocator<std::string>> const&,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>)
 *
 * Callers: 1
 *   0x00000000004BD468  Caver::StoreController_Android::FetchProductWithIdentifier(std::string const&,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>)
 *
 * Callees: 4
 *   0x00000000001F8560  Caver::AndroidQueueStoreProductFetch(std::string const&)
 *   0x00000000001F9A00  Caver::AndroidProcessStoreQueue(void)
 *   0x00000000001FE490  boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=(boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)> const&)
 *   0x00000000002029B0  std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::operator[](std::string const&)
 *
 * Referenced strings: 20
 *   insn=0x00000000004BD7E0 string=0x00000000004BD7E4 "4`@"
 *   insn=0x00000000004BD7EC string=0x00000000004BD7F0 "@"
 *   insn=0x00000000004BD7F4 string=0x00000000004BD7F8 "vB"
 *   insn=0x00000000004BD800 string=0x00000000004BD804 "k"
 *   insn=0x00000000004BD804 string=0x00000000004BD808 "h"
 *   insn=0x00000000004BD814 string=0x00000000004BD818 "y"
 *   insn=0x00000000004BD818 string=0x00000000004BD81C "?"
 *   insn=0x00000000004BD824 string=0x00000000004BD828 "(@"
 *   insn=0x00000000004BD828 string=0x00000000004BD82C ""
 *   insn=0x00000000004BD82C string=0x00000000004BD830 "("
 *   insn=0x00000000004BD834 string=0x00000000004BD838 "@"
 *   insn=0x00000000004BD838 string=0x00000000004BD83C ""
 *   insn=0x00000000004BD83C string=0x00000000004BD840 ""
 *   insn=0x00000000004BD844 string=0x00000000004BD848 ""
 *   insn=0x00000000004BD848 string=0x00000000004BD84C "@"
 *   insn=0x00000000004BD864 string=0x00000000004BD868 ">"
 *   insn=0x00000000004BD868 string=0x00000000001F8560 "0'"
 *   insn=0x00000000004BD870 string=0x00000000004BD874 "A"
 *   insn=0x00000000004BD888 string=0x00000000004BD88C "]"
 *   insn=0x00000000004BD88C string=0x00000000001F9A00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController_Android::FetchProductsWithIdentifiers(Caver *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // x20
  __int64 v4; // x24
  _QWORD *v6; // x23
  _QWORD *v7; // x0
  _QWORD *v8; // x25
  __int64 v9; // x8

  v3 = *a2;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    do
    {
      v6 = (_QWORD *)std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::operator[]();
      v7 = (_QWORD *)v6[1];
      *v6 = *a3;
      v8 = (_QWORD *)a3[1];
      if ( v8 != v7 )
      {
        if ( v8 )
          ++v8[2];
        if ( v7 )
        {
          v9 = v7[2] - 1LL;
          v7[2] = v9;
          if ( !v9 )
            (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        }
        v6[1] = v8;
      }
      boost::function<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>::operator=();
      a1 = (Caver *)Caver::AndroidQueueStoreProductFetch();
      v3 += 8;
    }
    while ( v4 != v3 );
  }
  return Caver::AndroidProcessStoreQueue(a1);
}

