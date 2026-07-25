/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A528
 * Mangled: _ZN5Caver21AndroidCheckPromotionERKSs
 * Demangled: Caver::AndroidCheckPromotion(std::string const&)
 *
 * Callers: 1
 *   0x00000000002010C0  Caver::AndroidCheckPromotion(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x000000000047A534 string=0x000000000047A538 "t"
 *   insn=0x000000000047A53C string=0x000000000047A540 "u"
 *   insn=0x000000000047A548 string=0x000000000047A54C "\t"
 *   insn=0x000000000047A548 string=0x00000000005960E5 "checkPromotion"
 *   insn=0x000000000047A550 string=0x00000000005960F4 "(Ljava/lang/String;)Z"
 *   insn=0x000000000047A554 string=0x000000000047A558 "B"
 *   insn=0x000000000047A558 string=0x000000000047A55C ")"
 *   insn=0x000000000047A55C string=0x000000000047A560 "c"
 *   insn=0x000000000047A564 string=0x000000000047A568 " "
 *   insn=0x000000000047A56C string=0x000000000047A570 "a"
 *   insn=0x000000000047A580 string=0x000000000047A584 ""
 *   insn=0x000000000047A59C string=0x00000000001F93F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AndroidCheckPromotion(_QWORD *a1)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "checkPromotion",
    "(Ljava/lang/String;)Z");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  return (unsigned __int8)_JNIEnv::CallStaticBooleanMethod() != 0;
}

