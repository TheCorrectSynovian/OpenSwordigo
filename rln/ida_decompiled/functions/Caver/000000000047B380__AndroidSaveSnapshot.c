/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B380
 * Mangled: _ZN5Caver19AndroidSaveSnapshotERKSsS1_S1_xx
 * Demangled: Caver::AndroidSaveSnapshot(std::string const&,std::string const&,std::string const&,long long,long long)
 *
 * Callers: 1
 *   0x00000000001F4A70  Caver::AndroidSaveSnapshot(std::string const&,std::string const&,std::string const&,long long,long long)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 30
 *   insn=0x000000000047B398 string=0x000000000047B39C "{"
 *   insn=0x000000000047B39C string=0x000000000047B3A0 "h3F"
 *   insn=0x000000000047B3A0 string=0x000000000047B3A4 "z"
 *   insn=0x000000000047B3A8 string=0x000000000047B3AC "A7F"
 *   insn=0x000000000047B3AC string=0x000000000047B3B0 "\t"
 *   insn=0x000000000047B3BC string=0x000000000047B3C0 ")"
 *   insn=0x000000000047B3BC string=0x00000000005962FA "saveSnapshot"
 *   insn=0x000000000047B3C4 string=0x0000000000596307 "(Ljava/lang/String;[BLjava/lang/String;JJ)V"
 *   insn=0x000000000047B3C8 string=0x000000000047B3CC "B"
 *   insn=0x000000000047B3CC string=0x000000000047B3D0 "c"
 *   insn=0x000000000047B3D8 string=0x000000000047B3DC " "
 *   insn=0x000000000047B3DC string=0x000000000047B3E0 "h3F"
 *   insn=0x000000000047B3E8 string=0x000000000047B3EC "\n"
 *   insn=0x000000000047B3EC string=0x000000000047B3F0 "!"
 *   insn=0x000000000047B3F4 string=0x000000000047B3F8 "I"
 *   insn=0x000000000047B3F8 string=0x000000000047B3FC " "
 *   insn=0x000000000047B3FC string=0x000000000047B400 "h3F"
 *   insn=0x000000000047B40C string=0x000000000047B410 "\t"
 *   insn=0x000000000047B41C string=0x000000000047B420 ")AC"
 *   insn=0x000000000047B420 string=0x000000000047B424 " "
 *   insn=0x000000000047B424 string=0x000000000047B428 "y3F"
 *   insn=0x000000000047B42C string=0x000000000047B430 "Z7F"
 *   insn=0x000000000047B430 string=0x000000000047B434 "("
 *   insn=0x000000000047B438 string=0x000000000047B43C ""
 *   insn=0x000000000047B440 string=0x000000000047B444 "h3F"
 *   insn=0x000000000047B44C string=0x000000000047B450 "\t"
 *   insn=0x000000000047B454 string=0x000000000047B458 ")"
 *   insn=0x000000000047B458 string=0x000000000047B45C " "
 *   insn=0x000000000047B494 string=0x000000000047B498 "&"
 *   insn=0x000000000047B498 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidSaveSnapshot(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // x0

  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "saveSnapshot",
    "(Ljava/lang/String;[BLjava/lang/String;JJ)V");
  v6 = (*(_QWORD *(__fastcall **)(__int64 __return_ptr, __int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1408LL))(
         qword_6E9C60,
         qword_6E9C60,
         *(unsigned int *)(*a2 - 24LL));
  (*(void (__fastcall **)(__int64 __return_ptr, __int64, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)qword_6E9C60 + 1664LL))(
    qword_6E9C60,
    qword_6E9C60,
    v6,
    0,
    *(unsigned int *)(*a2 - 24LL));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  (*(void (__fastcall **)(__int64 __return_ptr, __int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(
    qword_6E9C60,
    qword_6E9C60,
    *a3);
  return _JNIEnv::CallStaticVoidMethod();
}

