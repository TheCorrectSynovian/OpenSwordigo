/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000583120
 * Mangled: sub_583120
 * Demangled: sub_583120
 *
 * Callers: 1
 *   0x0000000000583220  sub_583220
 *
 * Callees: 5
 *   0x00000000001F89E0  .free
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FE620  .abort
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x0000000000583134 string=0x0000000000583138 "A"
 *   insn=0x0000000000583154 string=0x0000000000583158 "F"
 *   insn=0x0000000000583168 string=0x000000000058316C "a"
 *   insn=0x000000000058316C string=0x0000000000583170 "?"
 *   insn=0x0000000000583174 string=0x0000000000583178 "`"
 *   insn=0x0000000000583174 string=0x00000000005831B0 "a"
 *   insn=0x0000000000583178 string=0x000000000058317C "s"
 *   insn=0x0000000000583198 string=0x000000000058319C "a"
 *   insn=0x00000000005831A0 string=0x00000000005831A4 "a"
 *   insn=0x00000000005831A0 string=0x00000000005831BC "a"
 *   insn=0x00000000005831A4 string=0x00000000005831A8 "?"
 *   insn=0x00000000005831A8 string=0x00000000005831AC "!"
 *   insn=0x00000000005831AC string=0x0000000000583190 "`"
 *   insn=0x00000000005831BC string=0x00000000005831C0 "!"
 *   insn=0x00000000005831C0 string=0x00000000005831C4 "?"
 *   insn=0x00000000005831C4 string=0x00000000005831C8 "A"
 *   insn=0x00000000005831C8 string=0x00000000005831CC "a"
 *   insn=0x00000000005831D0 string=0x00000000005831D4 "`"
 *   insn=0x00000000005831D8 string=0x00000000005831DC "\n"
 *   insn=0x00000000005831D8 string=0x00000000001F89E0 "0'"
 *   insn=0x00000000005831E0 string=0x00000000005831E4 "\n"
 *   insn=0x00000000005831EC string=0x0000000000583200 ""
 *   insn=0x00000000005831F4 string=0x00000000005831F8 "V"
 *   insn=0x00000000005831F8 string=0x00000000001FBB50 "0'"
 *   insn=0x0000000000583204 string=0x0000000000583208 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_583120(_DWORD *a1)
{
  __int64 *j; // x0
  __int64 i; // x19

  if ( !a1 || !*a1 )
    return 0;
  if ( &pthread_create )
    pthread_mutex_lock((pthread_mutex_t *)&unk_6FE568);
  j = &qword_6FE590;
  for ( i = qword_6FE590; i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_DWORD **)(i + 24) == a1 )
    {
LABEL_14:
      *j = *(_QWORD *)(i + 40);
      goto LABEL_21;
    }
    j = (__int64 *)(i + 40);
  }
  for ( j = &qword_6FE598; ; j = (__int64 *)(i + 40) )
  {
    i = *j;
    if ( !*j )
    {
      if ( !&pthread_create )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (*(_BYTE *)(i + 32) & 1) != 0 )
      break;
    if ( *(_DWORD **)(i + 24) == a1 )
      goto LABEL_14;
LABEL_10:
    ;
  }
  if ( **(_DWORD ***)(i + 24) != a1 )
    goto LABEL_10;
  *j = *(_QWORD *)(i + 40);
  free(*(void **)(i + 24));
LABEL_21:
  if ( &pthread_create )
  {
LABEL_19:
    pthread_mutex_unlock((pthread_mutex_t *)&unk_6FE568);
    if ( i )
      return i;
LABEL_20:
    abort();
  }
  return i;
}

