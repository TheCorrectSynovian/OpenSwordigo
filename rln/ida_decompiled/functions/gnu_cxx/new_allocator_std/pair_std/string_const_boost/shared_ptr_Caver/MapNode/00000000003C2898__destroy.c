/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2898
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIN5Caver7MapNodeEEEEE7destroyEPS8_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>*)
 *
 * Callers: 1
 *   0x0000000000201E70  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 39
 *   insn=0x00000000003C28A8 string=0x00000000003C28AC "U"
 *   insn=0x00000000003C28B8 string=0x00000000003C28BC "t\n@"
 *   insn=0x00000000003C28BC string=0x00000000003C28C0 "4"
 *   insn=0x00000000003C28C0 string=0x00000000003C2904 "h"
 *   insn=0x00000000003C28C4 string=0x00000000003C28C8 ""
 *   insn=0x00000000003C28D4 string=0x00000000003C28D8 "\t@"
 *   insn=0x00000000003C28E4 string=0x00000000003C28E8 ""
 *   insn=0x00000000003C28F4 string=0x00000000003C28F8 "@"
 *   insn=0x00000000003C2904 string=0x00000000003C2908 "\t"
 *   insn=0x00000000003C2908 string=0x00000000003C290C ")"
 *   insn=0x00000000003C2914 string=0x00000000003C2918 "A"
 *   insn=0x00000000003C2918 string=0x00000000003C2940 "\t"
 *   insn=0x00000000003C2928 string=0x00000000003C2984 "S"
 *   insn=0x00000000003C2940 string=0x00000000003C2944 ")=G"
 *   insn=0x00000000003C2944 string=0x00000000003C2948 "!"
 *   insn=0x00000000003C294C string=0x00000000003C2950 "\t"
 *   insn=0x00000000003C294C string=0x00000000003C2964 "\t"
 *   insn=0x00000000003C2950 string=0x00000000003C2954 "*"
 *   insn=0x00000000003C2954 string=0x00000000003C2958 "\n"
 *   insn=0x00000000003C2960 string=0x00000000003C2970 "?"
 *   insn=0x00000000003C2964 string=0x00000000003C2968 "*"
 *   insn=0x00000000003C2968 string=0x00000000003C296C "\n"
 *   insn=0x00000000003C2970 string=0x00000000003C2974 "L"
 *   insn=0x00000000003C2984 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C2988 string=0x00000000003C298C "\n"
 *   insn=0x00000000003C298C string=0x00000000003C2990 "J"
 *   insn=0x00000000003C2994 string=0x00000000003C2998 "(a"
 *   insn=0x00000000003C29A0 string=0x00000000003C29A4 "\n"
 *   insn=0x00000000003C29A4 string=0x00000000003C29A8 "J=G"
 *   insn=0x00000000003C29A8 string=0x00000000003C29AC ")!"
 *   insn=0x00000000003C29B0 string=0x00000000003C29B4 "*"
 *   insn=0x00000000003C29B0 string=0x00000000003C29E0 "*"
 *   insn=0x00000000003C29B4 string=0x00000000003C29B8 "K"
 *   insn=0x00000000003C29B8 string=0x00000000003C29BC "+"
 *   insn=0x00000000003C29C0 string=0x00000000003C29C4 "_"
 *   insn=0x00000000003C29D0 string=0x00000000003C29D4 "t"
 *   insn=0x00000000003C29E0 string=0x00000000003C29E4 "K"
 *   insn=0x00000000003C29E4 string=0x00000000003C29E8 "+"
 *   insn=0x00000000003C29E8 string=0x00000000003C29EC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>::destroy(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9

  _ReadStatusReg(TPIDR_EL0);
  v3 = (_QWORD *)a2[2];
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v6 = (__int64 *)(*a2 - 24LL);
  if ( v6 != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(*a2 - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v6);
  }
}

