/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000583054
 * Mangled: sub_583054
 * Demangled: sub_583054
 *
 * Callers: 1
 *   0x00000000005830E8  sub_5830E8
 *
 * Callees: 3
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 15
 *   insn=0x0000000000583060 string=0x0000000000583064 "?"
 *   insn=0x0000000000583068 string=0x000000000058306C " "
 *   insn=0x000000000058306C string=0x0000000000583070 "@"
 *   insn=0x0000000000583070 string=0x0000000000583074 " "
 *   insn=0x0000000000583074 string=0x0000000000583078 """
 *   insn=0x000000000058307C string=0x0000000000583080 " @@y"
 *   insn=0x0000000000583084 string=0x0000000000583088 "$"
 *   insn=0x000000000058308C string=0x0000000000583090 "#"
 *   insn=0x0000000000583090 string=0x0000000000583094 " @"
 *   insn=0x0000000000583094 string=0x0000000000583098 "@<G"
 *   insn=0x000000000058309C string=0x00000000005830A0 "`""
 *   insn=0x000000000058309C string=0x00000000005830B4 "`""
 *   insn=0x00000000005830A8 string=0x00000000005830AC "q"
 *   insn=0x00000000005830B8 string=0x00000000005830BC """
 *   insn=0x00000000005830D8 string=0x00000000001FBB50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_583054(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int16 v4; // w0
  __int64 *result; // x0
  _QWORD *v6; // [xsp+28h] [xbp+28h]

  a2[4] = 0;
  a2[3] = a1;
  *((_BYTE *)a2 + 32) = 2;
  a2[1] = a3;
  v4 = *((_WORD *)a2 + 16);
  *a2 = -1;
  a2[2] = a4;
  *((_WORD *)a2 + 16) = v4 | 0x7F8;
  if ( &pthread_create )
  {
    v6 = a2;
    pthread_mutex_lock((pthread_mutex_t *)&unk_6FE568);
    a2 = v6;
  }
  result = &qword_6FE3C8;
  a2[5] = qword_6FE590;
  qword_6FE590 = (__int64)a2;
  if ( &pthread_create )
    return (__int64 *)pthread_mutex_unlock((pthread_mutex_t *)&unk_6FE568);
  return result;
}

