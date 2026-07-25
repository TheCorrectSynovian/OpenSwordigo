/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000583248
 * Mangled: sub_583248
 * Demangled: sub_583248
 *
 * Callers: 2
 *   0x0000000000580100  sub_580100
 *   0x00000000005806A8  sub_5806A8
 *
 * Callees: 9
 *   0x00000000001F3950  .dl_iterate_phdr
 *   0x00000000001FBB50  .pthread_mutex_unlock
 *   0x00000000001FFA70  .pthread_mutex_lock
 *   0x0000000000581E04  sub_581E04
 *   0x0000000000581EC4  sub_581EC4
 *   0x00000000005822A0  sub_5822A0
 *   0x00000000005822B0  sub_5822B0
 *   0x00000000005829FC  sub_5829FC
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x0000000000583274 string=0x0000000000583278 " #"
 *   insn=0x0000000000583274 string=0x0000000000583284 " #"
 *   insn=0x000000000058328C string=0x0000000000583290 "`"
 *   insn=0x000000000058328C string=0x00000000005832BC "8#"
 *   insn=0x0000000000583298 string=0x00000000005832B4 "s"
 *   insn=0x00000000005832C4 string=0x00000000005832C8 "`"
 *   insn=0x00000000005832E8 string=0x00000000005832EC "#"
 *   insn=0x00000000005832E8 string=0x0000000000583308 "a"
 *   insn=0x00000000005832EC string=0x00000000005832F0 "`"
 *   insn=0x00000000005832F8 string=0x00000000005832FC """
 *   insn=0x00000000005832FC string=0x0000000000583300 "!"
 *   insn=0x0000000000583308 string=0x000000000058330C "S"
 *   insn=0x0000000000583310 string=0x0000000000583314 "4"
 *   insn=0x000000000058331C string=0x0000000000583320 "U"
 *   insn=0x0000000000583320 string=0x0000000000583324 " #"
 *   insn=0x0000000000583320 string=0x0000000000583388 " "
 *   insn=0x0000000000583328 string=0x000000000058332C "\t"
 *   insn=0x000000000058332C string=0x00000000001FBB50 "0'"
 *   insn=0x0000000000583330 string=0x0000000000583334 "`"
 *   insn=0x0000000000583338 string=0x000000000058333C "a"
 *   insn=0x000000000058333C string=0x0000000000583340 "`\n@"
 *   insn=0x0000000000583344 string=0x0000000000583348 "`B@y"
 *   insn=0x000000000058334C string=0x0000000000583350 "a"
 *   insn=0x00000000005833B4 string=0x00000000005833B8 "f"
 *   insn=0x00000000005833B8 string=0x00000000001F3950 "P'"
 *   insn=0x00000000005833C0 string=0x00000000005833C4 "t"
 *   insn=0x00000000005833C4 string=0x00000000005833C8 "`"
 *   insn=0x00000000005833CC string=0x00000000005833D0 "`\n@"
 *   insn=0x00000000005833D4 string=0x00000000005833D8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_583248(unsigned __int64 a1, _QWORD *a2)
{
  __int64 i; // x19
  unsigned int *v5; // x20
  _QWORD *v6; // x1
  __int64 *v7; // x2
  char v8; // w1
  unsigned __int8 v9; // w0
  char v10; // w21
  char *v11; // x0
  unsigned __int64 v12; // x0
  unsigned __int64 data; // [xsp+50h] [xbp+50h] BYREF
  __int64 v15; // [xsp+58h] [xbp+58h]
  __int64 v16; // [xsp+60h] [xbp+60h]
  unsigned __int64 v17; // [xsp+68h] [xbp+68h]
  unsigned int *v18; // [xsp+70h] [xbp+70h]
  int v19; // [xsp+78h] [xbp+78h]

  if ( &pthread_create )
    pthread_mutex_lock((pthread_mutex_t *)&unk_6FE568);
  for ( i = qword_6FE598; ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
      goto LABEL_9;
    if ( a1 >= *(_QWORD *)i )
      break;
  }
  v5 = sub_5829FC(i, a1);
  if ( v5 )
  {
LABEL_25:
    if ( !&pthread_create )
      goto LABEL_18;
  }
  else
  {
LABEL_9:
    while ( 1 )
    {
      i = qword_6FE590;
      if ( !qword_6FE590 )
        break;
      qword_6FE590 = *(_QWORD *)(qword_6FE590 + 40);
      v5 = sub_5829FC(i, a1);
      v6 = (_QWORD *)qword_6FE598;
      v7 = &qword_6FE598;
      while ( v6 && *v6 >= *(_QWORD *)i )
      {
        v7 = v6 + 5;
        v6 = (_QWORD *)v6[5];
      }
      *(_QWORD *)(i + 40) = v6;
      *v7 = i;
      if ( v5 )
        goto LABEL_25;
    }
    v5 = 0;
    if ( !&pthread_create )
      goto LABEL_21;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&unk_6FE568);
  if ( v5 )
  {
LABEL_18:
    *a2 = *(_QWORD *)(i + 8);
    v8 = *(_BYTE *)(i + 32);
    a2[1] = *(_QWORD *)(i + 16);
    v9 = (unsigned __int64)*(unsigned __int16 *)(i + 32) >> 3;
    if ( (v8 & 4) != 0 )
      v9 = sub_5822A0((__int64)v5);
    v10 = v9;
    v11 = (char *)sub_581E04(v9, i);
    sub_581EC4(v10, v11, (char *)v5 + 8, &data);
    v12 = data;
    goto LABEL_24;
  }
LABEL_21:
  v19 = 1;
  data = a1;
  v5 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( (dl_iterate_phdr((int (*)(struct dl_phdr_info *, size_t, void *))sub_5822B0, &data) & 0x80000000) == 0 )
  {
    v5 = v18;
    if ( v18 )
    {
      *a2 = v15;
      a2[1] = v16;
      v12 = v17;
LABEL_24:
      a2[2] = v12;
    }
  }
  return v5;
}

