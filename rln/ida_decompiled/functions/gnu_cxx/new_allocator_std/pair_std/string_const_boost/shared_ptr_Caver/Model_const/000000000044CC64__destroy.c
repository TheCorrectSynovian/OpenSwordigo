/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044CC64
 * Mangled: _ZN9__gnu_cxx13new_allocatorISt4pairIKSsN5boost10shared_ptrIKN5Caver5ModelEEEEE7destroyEPS9_
 * Demangled: __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Model const>>*)
 *
 * Callers: 1
 *   0x00000000001F63D0  __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>::destroy(std::pair<std::string const,boost::shared_ptr<Caver::Model const>>*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 34
 *   insn=0x000000000044CC74 string=0x000000000044CC78 "U"
 *   insn=0x000000000044CC84 string=0x000000000044CC88 "t\n@"
 *   insn=0x000000000044CC88 string=0x000000000044CC8C "4"
 *   insn=0x000000000044CC8C string=0x000000000044CCD0 "h"
 *   insn=0x000000000044CC90 string=0x000000000044CC94 ""
 *   insn=0x000000000044CCA0 string=0x000000000044CCA4 "\t@"
 *   insn=0x000000000044CCB0 string=0x000000000044CCB4 ""
 *   insn=0x000000000044CCC0 string=0x000000000044CCC4 "@"
 *   insn=0x000000000044CCD4 string=0x000000000044CCD8 ")"
 *   insn=0x000000000044CCE0 string=0x000000000044CCE4 "A"
 *   insn=0x000000000044CCF4 string=0x000000000044CD50 "`"
 *   insn=0x000000000044CD0C string=0x000000000044CD10 ")=G"
 *   insn=0x000000000044CD10 string=0x000000000044CD14 "!"
 *   insn=0x000000000044CD18 string=0x000000000044CD1C "\t"
 *   insn=0x000000000044CD18 string=0x000000000044CD30 "\t"
 *   insn=0x000000000044CD1C string=0x000000000044CD20 "*"
 *   insn=0x000000000044CD20 string=0x000000000044CD24 "\n"
 *   insn=0x000000000044CD2C string=0x000000000044CD3C "?"
 *   insn=0x000000000044CD30 string=0x000000000044CD34 "*"
 *   insn=0x000000000044CD34 string=0x000000000044CD38 "\n"
 *   insn=0x000000000044CD3C string=0x000000000044CD40 "L"
 *   insn=0x000000000044CD50 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044CD58 string=0x000000000044CD5C "J"
 *   insn=0x000000000044CD60 string=0x000000000044CD64 "(a"
 *   insn=0x000000000044CD70 string=0x000000000044CD74 "J=G"
 *   insn=0x000000000044CD74 string=0x000000000044CD78 ")!"
 *   insn=0x000000000044CD7C string=0x000000000044CD80 "*"
 *   insn=0x000000000044CD7C string=0x000000000044CDAC "*"
 *   insn=0x000000000044CD80 string=0x000000000044CD84 "K"
 *   insn=0x000000000044CD84 string=0x000000000044CD88 "+"
 *   insn=0x000000000044CD8C string=0x000000000044CD90 "_"
 *   insn=0x000000000044CDAC string=0x000000000044CDB0 "K"
 *   insn=0x000000000044CDB0 string=0x000000000044CDB4 "+"
 *   insn=0x000000000044CDB4 string=0x000000000044CDB8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __gnu_cxx::new_allocator<std::pair<std::string const,boost::shared_ptr<Caver::Model const>>>::destroy(
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

