/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000582F6C
 * Mangled: sub_582F6C
 * Demangled: sub_582F6C
 *
 * Callers: 1
 *   0x0000000000583008  sub_583008
 *
 * Callees: 3
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 8
 *   insn=0x0000000000582F90 string=0x0000000000582F94 "a"
 *   insn=0x0000000000582FA0 string=0x0000000000582FA4 "`"
 *   insn=0x0000000000582FA8 string=0x0000000000582FAC "b"
 *   insn=0x0000000000582FAC string=0x0000000000582FB0 "c\n"
 *   insn=0x0000000000582FB0 string=0x0000000000582FB4 "`B"
 *   insn=0x0000000000582FB4 string=0x0000000000582FB8 " <G"
 *   insn=0x0000000000582FD0 string=0x0000000000582FD4 "a"
 *   insn=0x0000000000582FF4 string=0x00000000001FBB50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_582F6C(__int64 *result, _QWORD *a2, __int64 a3, __int64 a4)
{
  if ( result && *(_DWORD *)result )
  {
    *a2 = -1;
    a2[4] = 0;
    a2[3] = result;
    a2[1] = a3;
    a2[2] = a4;
    *((_WORD *)a2 + 16) = 2040;
    if ( &pthread_create )
      pthread_mutex_lock((pthread_mutex_t *)&unk_6FE568);
    result = &qword_6FE3C8;
    a2[5] = qword_6FE590;
    qword_6FE590 = (__int64)a2;
    if ( &pthread_create )
      return (__int64 *)pthread_mutex_unlock((pthread_mutex_t *)&unk_6FE568);
  }
  return result;
}

