/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BE6D8
 * Mangled: _ZN5Caver23StoreController_Android21HandleProductPurchaseERKSsbS2_
 * Demangled: Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *
 * Callers: 2
 *   0x00000000001FF430  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *   0x00000000004BE34C  Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB620  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair()
 *   0x00000000001FB660  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::find(std::string const&)
 *   0x00000000002003A0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *   0x00000000002009B0  boost::bad_function_call::bad_function_call(void)
 *   0x0000000000202A00  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BEA78  Caver::StoreController_Android::ResetHasRestoredPurchases(void)
 *   0x000000000054A024  sub_54A024
 *   0x000000000054CA60  sub_54CA60
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 89
 *   insn=0x00000000004BE6F0 string=0x00000000004BE6F4 "Z"
 *   insn=0x00000000004BE6F4 string=0x00000000004BE6F8 "H"
 *   insn=0x00000000004BE710 string=0x00000000004BE714 "`"
 *   insn=0x00000000004BE710 string=0x00000000004BE720 "`"
 *   insn=0x00000000004BE718 string=0x00000000004BE71C "!"
 *   insn=0x00000000004BE728 string=0x00000000001FB660 "0'"
 *   insn=0x00000000004BE72C string=0x00000000004BE730 "u""
 *   insn=0x00000000004BE738 string=0x00000000004BE8E8 "H"
 *   insn=0x00000000004BE74C string=0x00000000004BE750 "\t\t@"
 *   insn=0x00000000004BE750 string=0x00000000004BE754 ")"
 *   insn=0x00000000004BE754 string=0x00000000004BE758 "\t\t"
 *   insn=0x00000000004BE760 string=0x00000000004BE764 "i"
 *   insn=0x00000000004BE768 string=0x00000000004BE76C ")"
 *   insn=0x00000000004BE76C string=0x00000000004BE770 "("
 *   insn=0x00000000004BE770 string=0x00000000004BE774 ""
 *   insn=0x00000000004BE77C string=0x00000000004BE780 "!a"
 *   insn=0x00000000004BE790 string=0x00000000004BE794 ""
 *   insn=0x00000000004BE79C string=0x00000000004BE7A0 "H"
 *   insn=0x00000000004BE7B4 string=0x00000000004BE7B8 ""
 *   insn=0x00000000004BE7B8 string=0x00000000004BE7BC ""
 *   insn=0x00000000004BE7C0 string=0x00000000004BE7C4 " a"
 *   insn=0x00000000004BE7C8 string=0x00000000004BE7CC "!!"
 *   insn=0x00000000004BE7DC string=0x00000000004BE818 ""
 *   insn=0x00000000004BE7E0 string=0x00000000004BE7E4 "s"
 *   insn=0x00000000004BE818 string=0x00000000004BE81C ""
 *   insn=0x00000000004BE820 string=0x00000000004BE824 "9!"
 *   insn=0x00000000004BE83C string=0x00000000004BE840 "H"
 *   insn=0x00000000004BE840 string=0x00000000004BE844 ""
 *   insn=0x00000000004BE844 string=0x00000000004BE848 ""
 *   insn=0x00000000004BE848 string=0x00000000004BE84C ""
 *   insn=0x00000000004BE86C string=0x00000000004BE870 "|8"
 *   insn=0x00000000004BE878 string=0x00000000004BE87C "i"
 *   insn=0x00000000004BE87C string=0x00000000001FB620 "0'"
 *   insn=0x00000000004BE884 string=0x00000000004BE888 "h6@"
 *   insn=0x00000000004BE884 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BE888 string=0x00000000004BE88C ""
 *   insn=0x00000000004BE88C string=0x00000000004BE890 "h6"
 *   insn=0x00000000004BE894 string=0x00000000004BE898 "h"
 *   insn=0x00000000004BE898 string=0x00000000004BE89C "("
 *   insn=0x00000000004BE89C string=0x00000000004BE8A0 ""
 *   insn=0x00000000004BE8A0 string=0x00000000004BE8A4 ""
 *   insn=0x00000000004BE8AC string=0x00000000004BE8B0 " a"
 *   insn=0x00000000004BE8C8 string=0x00000000004BE8CC "@"
 *   insn=0x00000000004BE8CC string=0x00000000004BE8D0 ""
 *   insn=0x00000000004BE8D0 string=0x00000000004BE8D4 ""
 *   insn=0x00000000004BE8D8 string=0x00000000004BE8DC ""
 *   insn=0x00000000004BE8DC string=0x00000000004BE8E0 "@"
 *   insn=0x00000000004BE8F4 string=0x00000000004BE914 "o"
 *   insn=0x00000000004BE914 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BE924 string=0x00000000004BE928 "H"
 *   insn=0x00000000004BE928 string=0x00000000004BE92C ","
 *   insn=0x00000000004BE928 string=0x00000000004BE970 "("
 *   insn=0x00000000004BE938 string=0x00000000004BE93C "\t\t@"
 *   insn=0x00000000004BE93C string=0x00000000004BE940 ")"
 *   insn=0x00000000004BE940 string=0x00000000004BE944 "\t\t"
 *   insn=0x00000000004BE944 string=0x00000000004BE948 "A"
 *   insn=0x00000000004BE948 string=0x00000000004BE94C "\t"
 *   insn=0x00000000004BE94C string=0x00000000004BE950 ")@"
 *   insn=0x00000000004BE954 string=0x00000000004BE958 " "
 *   insn=0x00000000004BE958 string=0x00000000004BE95C "5"
 *   insn=0x00000000004BE970 string=0x00000000004BE974 ""
 *   insn=0x00000000004BE974 string=0x00000000004BE978 ""
 *   insn=0x00000000004BE980 string=0x00000000004BE984 " !"
 *   insn=0x00000000004BE998 string=0x00000000004BE99C "H"
 *   insn=0x00000000004BE99C string=0x00000000004BE9A0 ""
 *   insn=0x00000000004BE99C string=0x00000000004BE9E4 "("
 *   insn=0x00000000004BE9A8 string=0x00000000004BE9AC "("
 *   insn=0x00000000004BE9AC string=0x00000000004BE9B0 "\t\t@"
 *   insn=0x00000000004BE9B0 string=0x00000000004BE9B4 ")"
 *   insn=0x00000000004BE9B4 string=0x00000000004BE9B8 "\t\t"
 *   insn=0x00000000004BE9BC string=0x00000000004BE9C0 "\t"
 *   insn=0x00000000004BE9C0 string=0x00000000004BE9C4 ")@"
 *   insn=0x00000000004BE9C8 string=0x00000000004BE9CC " "
 *   insn=0x00000000004BE9DC string=0x00000000004BE9E0 "h"
 *   insn=0x00000000004BE9E4 string=0x00000000004BE9E8 ""
 *   insn=0x00000000004BE9E8 string=0x00000000004BE9EC ""
 *   insn=0x00000000004BE9F4 string=0x00000000004BE9F8 " a"
 *   insn=0x00000000004BEA10 string=0x00000000004BEA14 "@"
 *   insn=0x00000000004BEA14 string=0x00000000004BEA18 ""
 *   insn=0x00000000004BEA18 string=0x00000000004BEA1C ""
 *   insn=0x00000000004BEA20 string=0x00000000004BEA24 ""
 *   insn=0x00000000004BEA24 string=0x00000000004BEA28 "@"
 *   insn=0x00000000004BEA40 string=0x00000000004BEA44 "\t\t@"
 *   insn=0x00000000004BEA44 string=0x00000000004BEA48 ")"
 *   insn=0x00000000004BEA48 string=0x00000000004BEA4C "\t\t"
 *   insn=0x00000000004BEA50 string=0x00000000004BEA54 "\t"
 *   insn=0x00000000004BEA54 string=0x00000000004BEA58 ")@"
 *   insn=0x00000000004BEA5C string=0x00000000004BEA60 " "
 *   insn=0x00000000004BEA70 string=0x00000000004BEA74 "6>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController_Android::HandleProductPurchase(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // x0
  __int64 v9; // x20
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  void (__fastcall *v13)(__int128 *, __int128 *, __int64); // x8
  void *v14; // x20
  void (__fastcall *v15)(__int128 *, __int128 *, __int64); // x8
  __int64 v16; // x8
  __int64 v17; // [xsp+8h] [xbp-A8h]
  __int128 v18; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v19; // [xsp+20h] [xbp-90h]
  __int64 v20; // [xsp+28h] [xbp-88h]
  __int64 v21; // [xsp+30h] [xbp-80h]
  __int64 v22; // [xsp+38h] [xbp-78h]
  __int128 v23; // [xsp+40h] [xbp-70h] BYREF
  __int64 v24; // [xsp+50h] [xbp-60h]
  char v25[16]; // [xsp+58h] [xbp-58h] BYREF
  __int64 v26; // [xsp+68h] [xbp-48h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a3 & 1) != 0 )
    std::set<std::string>::insert();
  result = std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::find();
  v9 = result;
  if ( a1 + 72 != result )
  {
    v20 = *(_QWORD *)(result + 40);
    v10 = *(_QWORD *)(result + 48);
    v21 = v10;
    if ( v10 )
      ++*(_QWORD *)(v10 + 16);
    v22 = 0;
    v11 = *(_QWORD *)(result + 56);
    if ( v11 )
    {
      v22 = *(_QWORD *)(result + 56);
      if ( (v11 & 1) != 0 )
      {
        v24 = *(_QWORD *)(result + 80);
        v23 = *(_OWORD *)(result + 64);
        if ( v10 )
          goto LABEL_10;
        goto LABEL_22;
      }
      (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(v11 & 0xFFFFFFFFFFFFFFFELL))(result + 64, &v23, 0);
      v10 = v21;
    }
    if ( v10 )
    {
LABEL_10:
      if ( *(_QWORD *)(v10 + 8) && v20 )
      {
        v12 = v22;
        if ( !v22 )
        {
          boost::bad_function_call::bad_function_call((boost::bad_function_call *)v25);
          boost::throw_exception<boost::bad_function_call>();
        }
        v17 = v22;
        if ( (v22 & 1) != 0 )
        {
          v19 = v24;
          v18 = v23;
        }
        else
        {
          (*(void (__fastcall **)(__int128 *, __int128 *, _QWORD))(v22 & 0xFFFFFFFFFFFFFFFELL))(&v23, &v18, 0);
          v12 = v17;
        }
        (*(void (__fastcall **)(__int128 *, __int64, _QWORD, __int64))((v12 & 0xFFFFFFFFFFFFFFFELL) + 8))(
          &v18,
          a2,
          a3 & 1,
          a4);
        if ( (v17 & 1) == 0 )
        {
          v13 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v17 & 0xFFFFFFFFFFFFFFFELL);
          if ( v13 )
            v13(&v18, &v18, 2);
        }
      }
    }
LABEL_22:
    v14 = (void *)sub_54CA60(v9, a1 + 72);
    std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::~pair();
    operator delete(v14);
    --*(_QWORD *)(a1 + 104);
    if ( v22 )
    {
      if ( (v22 & 1) == 0 )
      {
        v15 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v22 & 0xFFFFFFFFFFFFFFFELL);
        if ( v15 )
          v15(&v23, &v23, 2);
      }
      v22 = 0;
    }
    result = v21;
    if ( v21 )
    {
      v16 = *(_QWORD *)(v21 + 16) - 1LL;
      *(_QWORD *)(v21 + 16) = v16;
      if ( !v16 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
    }
  }
  return result;
}

