/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053D830
 * Mangled: sub_53D830
 * Demangled: sub_53D830
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FBCA0  .setlocale
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x000000000051CE50  sub_51CE50
 *   0x000000000051CE80  sub_51CE80
 *   0x000000000053B814  sub_53B814
 *   0x000000000053B81C  sub_53B81C
 *   0x000000000053D7B8  sub_53D7B8
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 71
 *   insn=0x000000000053D84C string=0x000000000053D850 "s"
 *   insn=0x000000000053D854 string=0x000000000053D858 "`"
 *   insn=0x000000000053D854 string=0x000000000053D7B8 " "
 *   insn=0x000000000053D858 string=0x000000000053D85C " "
 *   insn=0x000000000053D85C string=0x000000000053D860 "3"
 *   insn=0x000000000053D860 string=0x000000000053D864 "`>G"
 *   insn=0x000000000053D864 string=0x000000000053D868 "`"
 *   insn=0x000000000053D868 string=0x000000000053D954 "@"
 *   insn=0x000000000053D878 string=0x000000000053D87C "@"
 *   insn=0x000000000053D884 string=0x000000000053D888 "W"
 *   insn=0x000000000053D888 string=0x000000000053D88C """
 *   insn=0x000000000053D88C string=0x000000000053D890 "B"
 *   insn=0x000000000053D890 string=0x000000000053D894 """
 *   insn=0x000000000053D8AC string=0x000000000053D8B0 """
 *   insn=0x000000000053D8B8 string=0x000000000059E5F8 "*"
 *   insn=0x000000000053D8BC string=0x000000000053D8C0 "!"
 *   insn=0x000000000053D8C0 string=0x000000000053D8C4 "G"
 *   insn=0x000000000053D8C8 string=0x000000000053D8CC "A"
 *   insn=0x000000000053D8D0 string=0x000000000053D8D4 "@`"
 *   insn=0x000000000053D8D4 string=0x000000000053D8D8 "!"
 *   insn=0x000000000053D8E0 string=0x000000000053D8E4 "s>G"
 *   insn=0x000000000053D8E0 string=0x000000000053D99C "a>G"
 *   insn=0x000000000053D8F4 string=0x000000000053D8F8 "`"
 *   insn=0x000000000053D8F4 string=0x00000000001FBB50 "0'"
 *   insn=0x000000000053D8F8 string=0x000000000053D9E4 "'}"
 *   insn=0x000000000053D920 string=0x000000000053D924 "o"
 *   insn=0x000000000053D924 string=0x00000000001FD6E0 "0'"
 *   insn=0x000000000053D930 string=0x000000000053D934 "!"
 *   insn=0x000000000053D934 string=0x000000000053D938 "3"
 *   insn=0x000000000053D938 string=0x000000000053D93C "?|"
 *   insn=0x000000000053D93C string=0x000000000053D940 "?|"
 *   insn=0x000000000053D940 string=0x000000000053D944 "?"
 *   insn=0x000000000053D948 string=0x000000000053D94C "`>G"
 *   insn=0x000000000053D948 string=0x00000000001F7040 "0'"
 *   insn=0x000000000053D960 string=0x000000000053D964 "#"
 *   insn=0x000000000053D968 string=0x000000000053D96C "c"
 *   insn=0x000000000053D96C string=0x000000000053D970 "#"
 *   insn=0x000000000053D980 string=0x000000000053D984 "A"
 *   insn=0x000000000053D980 string=0x00000000001FBCA0 "0'"
 *   insn=0x000000000053D988 string=0x000000000053D98C "@`"
 *   insn=0x000000000053D98C string=0x000000000053D990 "!"
 *   insn=0x000000000053D994 string=0x000000000053D998 "`"
 *   insn=0x000000000053D99C string=0x000000000053D9A0 "a"
 *   insn=0x000000000053D9A0 string=0x000000000053D9A4 "B "
 *   insn=0x000000000053D9A0 string=0x000000000053D9CC "A"
 *   insn=0x000000000053D9A4 string=0x000000000053D9A8 "A"
 *   insn=0x000000000053D9A8 string=0x000000000053D9AC "#"
 *   insn=0x000000000053D9AC string=0x000000000053D9B0 "C"
 *   insn=0x000000000053D9B4 string=0x000000000053D9B8 "?"
 *   insn=0x000000000053D9C0 string=0x000000000053D9C4 "x"
 *   insn=0x000000000053D9CC string=0x000000000053D9D0 "#"
 *   insn=0x000000000053D9D0 string=0x000000000053D9D4 "?"
 *   insn=0x000000000053D9D4 string=0x000000000053D9D8 "C"
 *   insn=0x000000000053D9F8 string=0x000000000053D9FC "s>G"
 *   insn=0x000000000053DA04 string=0x000000000053DA0C "Q"
 *   insn=0x000000000053DA0C string=0x000000000053DA10 "`"
 *   insn=0x000000000053DA24 string=0x000000000053DA28 "@`"
 *   insn=0x000000000053DA28 string=0x000000000053DA2C "!"
 *   insn=0x000000000053DA30 string=0x000000000053DA34 "@"
 *   insn=0x000000000053DA34 string=0x000000000053DA38 "a>G"
 *   insn=0x000000000053DA3C string=0x000000000053DA40 "a"
 *   insn=0x000000000053DA40 string=0x000000000053DA44 "a"
 *   insn=0x000000000053DA40 string=0x000000000053DA6C "A"
 *   insn=0x000000000053DA44 string=0x000000000053DA48 """
 *   insn=0x000000000053DA48 string=0x000000000053DA4C "b"
 *   insn=0x000000000053DA50 string=0x000000000053DA54 "?"
 *   insn=0x000000000053DA54 string=0x000000000053DA58 ","
 *   insn=0x000000000053DA5C string=0x000000000053DA60 "Q"
 *   insn=0x000000000053DA68 string=0x00000000001F8280 "0'"
 *   insn=0x000000000053DA6C string=0x000000000053DA70 "#"
 *   insn=0x000000000053DA70 string=0x000000000053DA74 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_53D830@<X0>(unsigned int **a1@<X0>, _QWORD *a2@<X8>)
{
  unsigned __int8 v4; // w0
  unsigned int *v5; // x1
  __int64 v6; // x23
  unsigned int v7; // w2
  unsigned int *v8; // x2
  char *v9; // x2
  char *v10; // x0
  unsigned int *v12; // x2
  int v13; // w1
  int v14; // w1
  char *locale; // [xsp+48h] [xbp+48h] BYREF

  sub_53D7B8();
  v4 = atomic_load((unsigned __int8 *)&byte_6FC2E0);
  if ( (v4 & 1) != 0 || !__cxa_guard_acquire((__guard *)&byte_6FC2E0) )
  {
    if ( !&pthread_create )
    {
LABEL_14:
      v8 = *a1;
      v6 = qword_6FBE48;
      ++**a1;
      goto LABEL_7;
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
      goto LABEL_14;
  }
  if ( pthread_mutex_lock((pthread_mutex_t *)&qword_6FCF40) )
    sub_51CE50();
  v5 = *a1;
  v6 = qword_6FBE48;
  do
    v7 = __ldaxr(v5);
  while ( __stlxr(v7 + 1, v5) );
  v8 = *a1;
LABEL_7:
  qword_6FBE48 = (__int64)v8;
  sub_53B81C((__int64)a1, (__int64 *)&locale);
  if ( (unsigned int)sub_5689E0((int)&locale, "*") )
  {
    setlocale(6, locale);
    v9 = locale;
    v10 = locale - 24;
    if ( locale - 24 == (char *)&qword_6FD2E0 )
      goto LABEL_9;
  }
  else
  {
    v9 = locale;
    v10 = locale - 24;
    if ( locale - 24 == (char *)&qword_6FD2E0 )
      goto LABEL_9;
  }
  if ( !&pthread_create )
  {
    v14 = *((_DWORD *)v9 - 2);
    *((_DWORD *)v9 - 2) = v14 - 1;
    if ( v14 > 0 )
      goto LABEL_11;
    goto LABEL_20;
  }
  v12 = (unsigned int *)(v9 - 8);
  do
    v13 = __ldaxr(v12);
  while ( __stlxr(v13 - 1, v12) );
  if ( v13 <= 0 )
  {
LABEL_20:
    operator delete(v10);
LABEL_9:
    if ( !&pthread_create )
      goto LABEL_11;
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)&qword_6FCF40) )
    sub_51CE80();
LABEL_11:
  sub_53B814(a2, v6);
  return a2;
}

