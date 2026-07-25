/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A450
 * Mangled: _ZN5Caver27AndroidPurchaseStoreProductERKSs
 * Demangled: Caver::AndroidPurchaseStoreProduct(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F72E0  Caver::AndroidPurchaseStoreProduct(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x000000000047A45C string=0x000000000047A460 "t"
 *   insn=0x000000000047A464 string=0x000000000047A468 "u"
 *   insn=0x000000000047A470 string=0x000000000047A474 "\t"
 *   insn=0x000000000047A470 string=0x00000000005960B5 "purchaseStoreProduct"
 *   insn=0x000000000047A478 string=0x000000000059602A "(Ljava/lang/String;)V"
 *   insn=0x000000000047A47C string=0x000000000047A480 "B"
 *   insn=0x000000000047A480 string=0x000000000047A484 ")"
 *   insn=0x000000000047A484 string=0x000000000047A488 "c"
 *   insn=0x000000000047A48C string=0x000000000047A490 " "
 *   insn=0x000000000047A494 string=0x000000000047A498 "a"
 *   insn=0x000000000047A4A8 string=0x000000000047A4AC ""
 *   insn=0x000000000047A4D0 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidPurchaseStoreProduct(_QWORD *a1)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "purchaseStoreProduct",
    "(Ljava/lang/String;)V");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  return _JNIEnv::CallStaticVoidMethod();
}

