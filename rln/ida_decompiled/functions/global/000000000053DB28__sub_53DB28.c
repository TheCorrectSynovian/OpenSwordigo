/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DB28
 * Mangled: sub_53DB28
 * Demangled: sub_53DB28
 *
 * Callers: 37
 *   0x00000000002616A4  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x000000000046AF3C  boost::detail::lexical_cast<int,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x0000000000488B48  boost::detail::lexical_cast<uint,std::string,false,char>(boost::call_traits<std::string>::param_type,char *,ulong)
 *   0x0000000000488C6C  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><uint>(uint &)
 *   0x0000000000521E3C  sub_521E3C
 *   0x0000000000522294  sub_522294
 *   0x0000000000522C5C  sub_522C5C
 *   0x000000000053E60C  sub_53E60C
 *   0x000000000053E680  sub_53E680
 *   0x0000000000545964  sub_545964
 *   0x0000000000545D04  sub_545D04
 *   0x000000000054606C  sub_54606C
 *   0x0000000000546320  sub_546320
 *   0x00000000005464C0  sub_5464C0
 *   0x000000000054695C  sub_54695C
 *   0x0000000000546A98  sub_546A98
 *   0x0000000000546C04  sub_546C04
 *   0x0000000000546D9C  sub_546D9C
 *   0x0000000000547234  sub_547234
 *   0x00000000005473C8  sub_5473C8
 *   0x0000000000547574  sub_547574
 *   0x0000000000547764  sub_547764
 *   0x0000000000547C7C  sub_547C7C
 *   0x0000000000548020  sub_548020
 *   0x0000000000548378  sub_548378
 *   0x000000000054862C  sub_54862C
 *   0x00000000005487CC  sub_5487CC
 *   0x0000000000548C68  sub_548C68
 *   0x0000000000548F10  sub_548F10
 *   0x00000000005490A8  sub_5490A8
 *   0x0000000000549540  sub_549540
 *   0x0000000000549880  sub_549880
 *   0x0000000000549A70  sub_549A70
 *   0x000000000054B470  sub_54B470
 *   0x000000000054B92C  sub_54B92C
 *   0x000000000055EDEC  sub_55EDEC
 *   0x0000000000562010  sub_562010
 *
 * Callees: 12
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x000000000051CE50  sub_51CE50
 *   0x000000000051CE80  sub_51CE80
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000053D774  sub_53D774
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 36
 *   insn=0x000000000053DB38 string=0x000000000053DB3C "4"
 *   insn=0x000000000053DB4C string=0x000000000053DB50 "@"
 *   insn=0x000000000053DB4C string=0x000000000053DB64 "S"
 *   insn=0x000000000053DB5C string=0x000000000053DB60 "P"
 *   insn=0x000000000053DB60 string=0x00000000001F60A0 "0'"
 *   insn=0x000000000053DB64 string=0x000000000053DB68 "wFD"
 *   insn=0x000000000053DB70 string=0x000000000053DB74 "U"
 *   insn=0x000000000053DB80 string=0x000000000053DB84 "sFD"
 *   insn=0x000000000053DB84 string=0x000000000053DB88 "a"
 *   insn=0x000000000053DB88 string=0x000000000053DB8C "?"
 *   insn=0x000000000053DB8C string=0x000000000053DB90 "@"
 *   insn=0x000000000053DB94 string=0x000000000053DB9C "`"
 *   insn=0x000000000053DBA4 string=0x000000000053DBA8 "4"
 *   insn=0x000000000053DBAC string=0x000000000053DBB0 "`"
 *   insn=0x000000000053DBB8 string=0x000000000053DCD0 "`|"
 *   insn=0x000000000053DBC4 string=0x000000000053DBC8 "!"
 *   insn=0x000000000053DBD4 string=0x000000000053DBD8 "`"
 *   insn=0x000000000053DBE0 string=0x00000000001FBB50 "0'"
 *   insn=0x000000000053DBE4 string=0x000000000053DCC0 "p|"
 *   insn=0x000000000053DC00 string=0x00000000001FD6E0 "0'"
 *   insn=0x000000000053DC0C string=0x000000000053DC10 "!"
 *   insn=0x000000000053DC10 string=0x000000000053DC14 "?|"
 *   insn=0x000000000053DC14 string=0x000000000053DC18 "?|"
 *   insn=0x000000000053DC18 string=0x000000000053DC1C "?"
 *   insn=0x000000000053DC1C string=0x000000000053DC20 ""
 *   insn=0x000000000053DC20 string=0x00000000001F7040 "0'"
 *   insn=0x000000000053DC24 string=0x000000000053DC28 "4"
 *   insn=0x000000000053DC3C string=0x000000000053DC40 "!"
 *   insn=0x000000000053DC60 string=0x000000000053DC64 "!"
 *   insn=0x000000000053DC84 string=0x000000000053DC88 "A"
 *   insn=0x000000000053DC8C string=0x000000000053DC90 "U"
 *   insn=0x000000000053DCA4 string=0x000000000053DCA8 "8"
 *   insn=0x000000000053DCB0 string=0x000000000053DCB4 "!"
 *   insn=0x000000000053DCC8 string=0x000000000053DCD8 "j"
 *   insn=0x000000000053DCD4 string=0x000000000053DCC4 "?"
 *   insn=0x000000000053DCD8 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_53DB28(_QWORD *a1)
{
  unsigned int *result; // x0
  unsigned __int8 v3; // w0
  unsigned int *v4; // x0
  unsigned int v5; // w1
  unsigned int v6; // w1

  *a1 = 0;
  if ( &pthread_create )
    pthread_once(dword_6FBE30, (void (*)(void))sub_53D774);
  if ( qword_6FBE40 )
  {
    result = (unsigned int *)qword_6FBE48;
  }
  else
  {
    sub_53CB20((__int64)&unk_6FC840, 2);
    result = (unsigned int *)&unk_6FC840;
    qword_6FBE40 = (__int64)&unk_6FC840;
    qword_6FBE48 = (__int64)&unk_6FC840;
  }
  *a1 = result;
  if ( (unsigned int *)qword_6FBE40 == result )
  {
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(result);
      while ( __stlxr(v6 + 1, result) );
    }
    else
    {
      ++*result;
    }
  }
  else
  {
    v3 = atomic_load((unsigned __int8 *)&byte_6FC2E0);
    if ( (v3 & 1) != 0 || !__cxa_guard_acquire((__guard *)&byte_6FC2E0) )
    {
      if ( !&pthread_create )
      {
LABEL_15:
        result = (unsigned int *)qword_6FBE48;
        ++*(_DWORD *)qword_6FBE48;
        *a1 = result;
        return result;
      }
    }
    else
    {
      qword_6FCF40 = 0;
      qword_6FCF48 = 0;
      qword_6FCF50 = 0;
      qword_6FCF58 = 0;
      qword_6FCF60 = 0;
      __cxa_guard_release((__guard *)&byte_6FC2E0);
      if ( !&pthread_create )
        goto LABEL_15;
    }
    if ( pthread_mutex_lock((pthread_mutex_t *)&qword_6FCF40) )
      sub_51CE50();
    v4 = (unsigned int *)qword_6FBE48;
    do
      v5 = __ldaxr(v4);
    while ( __stlxr(v5 + 1, v4) );
    *a1 = qword_6FBE48;
    result = (unsigned int *)pthread_mutex_unlock((pthread_mutex_t *)&qword_6FCF40);
    if ( (_DWORD)result )
      sub_51CE80();
  }
  return result;
}

