/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BE34C
 * Mangled: _ZN5Caver23StoreController_Android18HandleProductFetchERKSsRKN5boost10shared_ptrINS_12StoreProductEEES2_
 * Demangled: Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8930  Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Callees: 11
 *   0x00000000001F4D20  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::find(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC460  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair()
 *   0x00000000002009B0  boost::bad_function_call::bad_function_call(void)
 *   0x0000000000202A00  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BE6D8  Caver::StoreController_Android::HandleProductPurchase(std::string const&,bool,std::string const&)
 *   0x000000000054A024  sub_54A024
 *   0x000000000054CA60  sub_54CA60
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 88
 *   insn=0x00000000004BE364 string=0x00000000004BE368 "Z"
 *   insn=0x00000000004BE368 string=0x00000000004BE36C "H"
 *   insn=0x00000000004BE370 string=0x00000000004BE374 "`B"
 *   insn=0x00000000004BE384 string=0x00000000004BE388 "f"
 *   insn=0x00000000004BE388 string=0x00000000001F4D20 "P'"
 *   insn=0x00000000004BE38C string=0x00000000004BE390 "ub"
 *   insn=0x00000000004BE398 string=0x00000000004BE548 "H"
 *   insn=0x00000000004BE3AC string=0x00000000004BE3B0 "\t\t@"
 *   insn=0x00000000004BE3B0 string=0x00000000004BE3B4 ")"
 *   insn=0x00000000004BE3B4 string=0x00000000004BE3B8 "\t\t"
 *   insn=0x00000000004BE3C0 string=0x00000000004BE3C4 "i"
 *   insn=0x00000000004BE3C8 string=0x00000000004BE3CC ")"
 *   insn=0x00000000004BE3CC string=0x00000000004BE3D0 "("
 *   insn=0x00000000004BE3D0 string=0x00000000004BE3D4 ""
 *   insn=0x00000000004BE3DC string=0x00000000004BE3E0 "!a"
 *   insn=0x00000000004BE3F0 string=0x00000000004BE3F4 ""
 *   insn=0x00000000004BE3FC string=0x00000000004BE400 "H"
 *   insn=0x00000000004BE414 string=0x00000000004BE418 ""
 *   insn=0x00000000004BE418 string=0x00000000004BE41C ""
 *   insn=0x00000000004BE420 string=0x00000000004BE424 " a"
 *   insn=0x00000000004BE428 string=0x00000000004BE42C "!!"
 *   insn=0x00000000004BE43C string=0x00000000004BE478 ""
 *   insn=0x00000000004BE440 string=0x00000000004BE444 "[\t"
 *   insn=0x00000000004BE448 string=0x00000000004BE44C "m"
 *   insn=0x00000000004BE478 string=0x00000000004BE47C ""
 *   insn=0x00000000004BE480 string=0x00000000004BE484 "9!"
 *   insn=0x00000000004BE49C string=0x00000000004BE4A0 "H"
 *   insn=0x00000000004BE4A0 string=0x00000000004BE4A4 ""
 *   insn=0x00000000004BE4A4 string=0x00000000004BE4A8 ""
 *   insn=0x00000000004BE4A8 string=0x00000000004BE4AC ""
 *   insn=0x00000000004BE4CC string=0x00000000004BE4D0 "d9"
 *   insn=0x00000000004BE4DC string=0x00000000001FC460 "0'"
 *   insn=0x00000000004BE4E0 string=0x00000000004BE4E4 "s"
 *   insn=0x00000000004BE4E4 string=0x00000000004BE4E8 "h"
 *   insn=0x00000000004BE4E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BE4E8 string=0x00000000004BE4EC ""
 *   insn=0x00000000004BE4EC string=0x00000000004BE4F0 "h"
 *   insn=0x00000000004BE4F4 string=0x00000000004BE4F8 "h"
 *   insn=0x00000000004BE4F8 string=0x00000000004BE4FC "("
 *   insn=0x00000000004BE4FC string=0x00000000004BE500 ""
 *   insn=0x00000000004BE500 string=0x00000000004BE504 ""
 *   insn=0x00000000004BE50C string=0x00000000004BE510 " a"
 *   insn=0x00000000004BE528 string=0x00000000004BE52C "@"
 *   insn=0x00000000004BE52C string=0x00000000004BE530 ""
 *   insn=0x00000000004BE530 string=0x00000000004BE534 ""
 *   insn=0x00000000004BE538 string=0x00000000004BE53C ""
 *   insn=0x00000000004BE53C string=0x00000000004BE540 "@"
 *   insn=0x00000000004BE554 string=0x00000000004BE574 "W"
 *   insn=0x00000000004BE574 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BE584 string=0x00000000004BE588 "H"
 *   insn=0x00000000004BE588 string=0x00000000004BE58C ","
 *   insn=0x00000000004BE588 string=0x00000000004BE5D0 "("
 *   insn=0x00000000004BE598 string=0x00000000004BE59C "\t\t@"
 *   insn=0x00000000004BE59C string=0x00000000004BE5A0 ")"
 *   insn=0x00000000004BE5A0 string=0x00000000004BE5A4 "\t\t"
 *   insn=0x00000000004BE5A4 string=0x00000000004BE5A8 "A"
 *   insn=0x00000000004BE5A8 string=0x00000000004BE5AC "\t"
 *   insn=0x00000000004BE5AC string=0x00000000004BE5B0 ")@"
 *   insn=0x00000000004BE5B4 string=0x00000000004BE5B8 " "
 *   insn=0x00000000004BE5B8 string=0x00000000004BE5BC "5"
 *   insn=0x00000000004BE5D0 string=0x00000000004BE5D4 ""
 *   insn=0x00000000004BE5D4 string=0x00000000004BE5D8 ""
 *   insn=0x00000000004BE5E0 string=0x00000000004BE5E4 " !"
 *   insn=0x00000000004BE5F8 string=0x00000000004BE5FC "H"
 *   insn=0x00000000004BE5FC string=0x00000000004BE600 ""
 *   insn=0x00000000004BE5FC string=0x00000000004BE644 "("
 *   insn=0x00000000004BE608 string=0x00000000004BE60C "("
 *   insn=0x00000000004BE60C string=0x00000000004BE610 "\t\t@"
 *   insn=0x00000000004BE610 string=0x00000000004BE614 ")"
 *   insn=0x00000000004BE614 string=0x00000000004BE618 "\t\t"
 *   insn=0x00000000004BE61C string=0x00000000004BE620 "\t"
 *   insn=0x00000000004BE620 string=0x00000000004BE624 ")@"
 *   insn=0x00000000004BE628 string=0x00000000004BE62C " "
 *   insn=0x00000000004BE63C string=0x00000000004BE640 "h"
 *   insn=0x00000000004BE644 string=0x00000000004BE648 ""
 *   insn=0x00000000004BE648 string=0x00000000004BE64C ""
 *   insn=0x00000000004BE654 string=0x00000000004BE658 " a"
 *   insn=0x00000000004BE670 string=0x00000000004BE674 "@"
 *   insn=0x00000000004BE674 string=0x00000000004BE678 ""
 *   insn=0x00000000004BE678 string=0x00000000004BE67C ""
 *   insn=0x00000000004BE680 string=0x00000000004BE684 ""
 *   insn=0x00000000004BE684 string=0x00000000004BE688 "@"
 *   insn=0x00000000004BE6A0 string=0x00000000004BE6A4 "\t\t@"
 *   insn=0x00000000004BE6A4 string=0x00000000004BE6A8 ")"
 *   insn=0x00000000004BE6A8 string=0x00000000004BE6AC "\t\t"
 *   insn=0x00000000004BE6B0 string=0x00000000004BE6B4 "\t"
 *   insn=0x00000000004BE6B4 string=0x00000000004BE6B8 ")@"
 *   insn=0x00000000004BE6BC string=0x00000000004BE6C0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreController_Android::HandleProductFetch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x0
  __int64 v9; // x20
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  void (__fastcall *v13)(__int128 *, __int128 *, __int64); // x8
  void *v14; // x20
  void (__fastcall *v15)(__int128 *, __int128 *, __int64); // x8
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // [xsp+8h] [xbp-A8h]
  __int128 v19; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v20; // [xsp+20h] [xbp-90h]
  __int64 v21; // [xsp+28h] [xbp-88h]
  __int64 v22; // [xsp+30h] [xbp-80h]
  __int64 v23; // [xsp+38h] [xbp-78h]
  __int128 v24; // [xsp+40h] [xbp-70h] BYREF
  __int64 v25; // [xsp+50h] [xbp-60h]
  _BYTE v26[16]; // [xsp+58h] [xbp-58h] BYREF
  __int64 v27; // [xsp+68h] [xbp-48h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  std::_Rb_tree<std::string,std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>,std::_Select1st<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::find();
  v9 = v8;
  if ( a1 + 24 == v8 )
    return;
  v21 = *(_QWORD *)(v8 + 40);
  v10 = *(_QWORD *)(v8 + 48);
  v22 = v10;
  if ( v10 )
    ++*(_QWORD *)(v10 + 16);
  v23 = 0;
  v11 = *(_QWORD *)(v8 + 56);
  if ( v11 )
  {
    v23 = *(_QWORD *)(v8 + 56);
    if ( (v11 & 1) != 0 )
    {
      v25 = *(_QWORD *)(v8 + 80);
      v24 = *(_OWORD *)(v8 + 64);
      if ( v10 )
        goto LABEL_8;
      goto LABEL_20;
    }
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(v11 & 0xFFFFFFFFFFFFFFFELL))(v8 + 64, &v24, 0);
    v10 = v22;
  }
  if ( v10 )
  {
LABEL_8:
    if ( *(_QWORD *)(v10 + 8) && v21 )
    {
      v12 = v23;
      if ( !v23 )
      {
        boost::bad_function_call::bad_function_call((boost::bad_function_call *)v26);
        boost::throw_exception<boost::bad_function_call>();
      }
      v18 = v23;
      if ( (v23 & 1) != 0 )
      {
        v20 = v25;
        v19 = v24;
      }
      else
      {
        (*(void (__fastcall **)(__int128 *, __int128 *, _QWORD))(v23 & 0xFFFFFFFFFFFFFFFELL))(&v24, &v19, 0);
        v12 = v18;
      }
      (*(void (__fastcall **)(__int128 *, __int64, __int64, __int64))((v12 & 0xFFFFFFFFFFFFFFFELL) + 8))(
        &v19,
        a2,
        a3,
        a4);
      if ( (v18 & 1) == 0 )
      {
        v13 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v18 & 0xFFFFFFFFFFFFFFFELL);
        if ( v13 )
          v13(&v19, &v19, 2);
      }
    }
  }
LABEL_20:
  v14 = (void *)sub_54CA60(v9, a1 + 24);
  std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>::~pair();
  operator delete(v14);
  --*(_QWORD *)(a1 + 56);
  if ( v23 )
  {
    if ( (v23 & 1) == 0 )
    {
      v15 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v23 & 0xFFFFFFFFFFFFFFFELL);
      if ( v15 )
        v15(&v24, &v24, 2);
    }
    v23 = 0;
  }
  v16 = v22;
  if ( v22 )
  {
    v17 = *(_QWORD *)(v22 + 16) - 1LL;
    *(_QWORD *)(v22 + 16) = v17;
    if ( !v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  }
}

