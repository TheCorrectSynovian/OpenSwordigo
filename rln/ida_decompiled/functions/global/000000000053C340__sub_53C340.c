/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053C340
 * Mangled: sub_53C340
 * Demangled: sub_53C340
 *
 * Callers: 23
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x000000000053175C  sub_53175C
 *   0x0000000000531C5C  sub_531C5C
 *   0x0000000000531FD8  sub_531FD8
 *   0x000000000053228C  sub_53228C
 *   0x0000000000532504  sub_532504
 *   0x0000000000532614  sub_532614
 *   0x0000000000532724  sub_532724
 *   0x000000000053C134  sub_53C134
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x00000000005532C0  sub_5532C0
 *   0x0000000000553630  sub_553630
 *   0x0000000000553A38  sub_553A38
 *   0x0000000000553F40  sub_553F40
 *   0x00000000005542C8  sub_5542C8
 *   0x0000000000554584  sub_554584
 *   0x0000000000554804  sub_554804
 *   0x0000000000554914  sub_554914
 *   0x0000000000554A24  sub_554A24
 *
 * Callees: 11
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x000000000051CDD0  sub_51CDD0
 *   0x000000000051CE80  sub_51CE80
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x000000000053C350 string=0x000000000053C354 "s"
 *   insn=0x000000000053C354 string=0x000000000053C358 "`"
 *   insn=0x000000000053C35C string=0x000000000053C360 "S"
 *   insn=0x000000000053C360 string=0x000000000053C364 "`>G"
 *   insn=0x000000000053C38C string=0x000000000053C390 "@"
 *   insn=0x000000000053C390 string=0x000000000053C394 "bxb"
 *   insn=0x000000000053C394 string=0x000000000053C398 "b"
 *   insn=0x000000000053C398 string=0x000000000053C444 "" "
 *   insn=0x000000000053C39C string=0x000000000053C3A0 """
 *   insn=0x000000000053C39C string=0x000000000053C3B0 "s>G"
 *   insn=0x000000000053C3A4 string=0x000000000053C3A8 "A"
 *   insn=0x000000000053C3A8 string=0x000000000053C3AC " "
 *   insn=0x000000000053C3C0 string=0x000000000053C3C4 " "
 *   insn=0x000000000053C3C0 string=0x00000000001FBB50 "0'"
 *   insn=0x000000000053C3E0 string=0x00000000001FD6E0 "0'"
 *   insn=0x000000000053C3F4 string=0x000000000053C3F8 "c"
 *   insn=0x000000000053C3F8 string=0x000000000053C3FC "S"
 *   insn=0x000000000053C408 string=0x000000000053C40C ""
 *   insn=0x000000000053C40C string=0x000000000053C410 "`>G"
 *   insn=0x000000000053C40C string=0x00000000001F7040 "0'"
 *   insn=0x000000000053C420 string=0x000000000053C424 "`"
 *   insn=0x000000000053C424 string=0x000000000053C428 "bxb"
 *   insn=0x000000000053C42C string=0x000000000053C430 ""@"
 *   insn=0x000000000053C430 string=0x000000000053C434 "B"
 *   insn=0x000000000053C434 string=0x000000000053C438 """
 *   insn=0x000000000053C444 string=0x000000000053C448 "C"
 *   insn=0x000000000053C448 string=0x000000000053C44C "c"
 *   insn=0x000000000053C44C string=0x000000000053C450 "C"
 *   insn=0x000000000053C458 string=0x000000000053C45C "`"
 *   insn=0x000000000053C470 string=0x000000000053C4C4 "o"
 *   insn=0x000000000053C47C string=0x00000000001F9460 "0'"
 *   insn=0x000000000053C484 string=0x000000000053C488 "B@*"
 *   insn=0x000000000053C490 string=0x000000000053C494 "!"
 *   insn=0x000000000053C494 string=0x000000000053C498 "B@7"
 *   insn=0x000000000053C49C string=0x00000000001FB4A0 "0'"
 *   insn=0x000000000053C4B8 string=0x000000000053C4C8 "n"
 *   insn=0x000000000053C4C4 string=0x00000000001F8280 "0'"
 *   insn=0x000000000053C4CC string=0x000000000053C46C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53C340(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned __int8 v4; // w0
  int v5; // w0
  __int64 result; // x0
  int v7; // w0
  unsigned int *v8; // x2
  unsigned int v9; // w3
  _QWORD *exception; // x0
  __int64 v11; // [xsp+20h] [xbp+20h]
  __int64 v12; // [xsp+20h] [xbp+20h]
  _DWORD *v13; // [xsp+28h] [xbp+28h]
  _DWORD *v14; // [xsp+28h] [xbp+28h]

  v4 = atomic_load((unsigned __int8 *)&byte_6FBE38);
  if ( (v4 & 1) != 0 || (v12 = a3, v14 = a2, v7 = __cxa_guard_acquire((__guard *)&byte_6FBE38), a2 = v14, a3 = v12, !v7) )
  {
    if ( !&pthread_create )
      goto LABEL_12;
  }
  else
  {
    qword_6FBE00 = 0;
    qword_6FBE08 = 0;
    qword_6FBE10 = 0;
    qword_6FBE18 = 0;
    qword_6FBE20 = 0;
    __cxa_guard_release((__guard *)&byte_6FBE38);
    a3 = v12;
    a2 = v14;
    if ( !&pthread_create )
    {
LABEL_12:
      result = *(_QWORD *)(a1 + 24) + 8 * a3;
      if ( !*(_QWORD *)result )
      {
        ++a2[2];
        *(_QWORD *)result = a2;
        goto LABEL_7;
      }
      goto LABEL_5;
    }
  }
  v11 = a3;
  v13 = a2;
  v5 = pthread_mutex_lock((pthread_mutex_t *)&qword_6FBE00);
  a2 = v13;
  if ( v5 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = off_6B6A90;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'__gnu_cxx::__concurrence_lock_error,
      (void (*)(void *))sub_51CDD0);
  }
  result = 8 * v11;
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v11) )
  {
    v8 = v13 + 2;
    do
      v9 = __ldaxr(v8);
    while ( __stlxr(v9 + 1, v8) );
    result += *(_QWORD *)(a1 + 24);
    *(_QWORD *)result = v13;
    goto LABEL_7;
  }
LABEL_5:
  if ( a2 )
    result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
LABEL_7:
  if ( &pthread_create )
  {
    result = pthread_mutex_unlock((pthread_mutex_t *)&qword_6FBE00);
    if ( (_DWORD)result )
      sub_51CE80();
  }
  return result;
}

