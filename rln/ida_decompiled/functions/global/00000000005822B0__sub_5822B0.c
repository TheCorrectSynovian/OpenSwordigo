/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005822B0
 * Mangled: sub_5822B0
 * Demangled: sub_5822B0
 *
 * Callers: 1
 *   0x0000000000583248  sub_583248
 *
 * Callees: 6
 *   0x00000000001FE620  .abort
 *   0x0000000000581DA4  sub_581DA4
 *   0x0000000000581E64  sub_581E64
 *   0x0000000000581EC4  sub_581EC4
 *   0x0000000000582140  sub_582140
 *   0x00000000005822A0  sub_5822A0
 *
 * Referenced strings: 94
 *   insn=0x00000000005822B0 string=0x00000000005822B4 "?"
 *   insn=0x00000000005822CC string=0x00000000005822D0 ""
 *   insn=0x00000000005822D4 string=0x00000000005822D8 "C(@"
 *   insn=0x00000000005822D4 string=0x00000000005823C8 "?d"
 *   insn=0x00000000005822D8 string=0x00000000005822DC "c"
 *   insn=0x00000000005822DC string=0x00000000005822E0 "!"
 *   insn=0x00000000005822E8 string=0x00000000005822EC "#,E"
 *   insn=0x00000000005822F4 string=0x00000000005822F8 "a"
 *   insn=0x00000000005822F8 string=0x00000000005822FC "i"
 *   insn=0x00000000005822F8 string=0x0000000000582384 "$,"
 *   insn=0x00000000005822FC string=0x0000000000582300 "h "
 *   insn=0x0000000000582308 string=0x000000000058230C "\t"
 *   insn=0x0000000000582318 string=0x000000000058231C "!"
 *   insn=0x000000000058231C string=0x0000000000582320 "J"
 *   insn=0x000000000058231C string=0x00000000005823E0 "0@y\t"
 *   insn=0x0000000000582320 string=0x0000000000582324 "("
 *   insn=0x0000000000582324 string=0x0000000000582328 "$"
 *   insn=0x0000000000582328 string=0x000000000058232C "_"
 *   insn=0x0000000000582330 string=0x0000000000582334 "_"
 *   insn=0x0000000000582334 string=0x0000000000582338 "b"
 *   insn=0x0000000000582338 string=0x000000000058233C "?"
 *   insn=0x000000000058233C string=0x0000000000582340 "'@"
 *   insn=0x0000000000582340 string=0x0000000000582344 "("
 *   insn=0x0000000000582348 string=0x000000000058234C "c "
 *   insn=0x000000000058234C string=0x0000000000582350 " "
 *   insn=0x0000000000582354 string=0x0000000000582358 ")"
 *   insn=0x0000000000582358 string=0x000000000058235C "a"
 *   insn=0x000000000058235C string=0x0000000000582360 "X"
 *   insn=0x0000000000582368 string=0x000000000058236C "("
 *   insn=0x0000000000582384 string=0x0000000000582388 "d "
 *   insn=0x000000000058238C string=0x0000000000582390 "e"
 *   insn=0x0000000000582394 string=0x0000000000582398 "?"
 *   insn=0x0000000000582398 string=0x000000000058239C "?"
 *   insn=0x000000000058239C string=0x00000000005823A0 "!"
 *   insn=0x00000000005823A0 string=0x00000000005823A4 "!"
 *   insn=0x00000000005823A4 string=0x00000000005823A8 "?"
 *   insn=0x00000000005823A8 string=0x00000000005823AC "a"
 *   insn=0x00000000005823AC string=0x00000000005823B0 "c "
 *   insn=0x00000000005823B0 string=0x00000000005823B4 "a@"
 *   insn=0x00000000005823B8 string=0x00000000005823BC "a"
 *   insn=0x00000000005823BC string=0x00000000005823C0 "_("
 *   insn=0x00000000005823C8 string=0x00000000005823CC "\t"
 *   insn=0x00000000005823E0 string=0x00000000005823E4 "\t"
 *   insn=0x00000000005823E4 string=0x00000000005823E8 "\n"
 *   insn=0x00000000005823EC string=0x00000000005823F0 ""
 *   insn=0x00000000005823F0 string=0x00000000005823F4 ""
 *   insn=0x0000000000582400 string=0x0000000000582470 "l"
 *   insn=0x0000000000582410 string=0x0000000000582414 "C"
 *   insn=0x000000000058241C string=0x0000000000582420 "C"
 *   insn=0x0000000000582424 string=0x0000000000582428 " "
 *   insn=0x000000000058242C string=0x0000000000582430 ")!"
 *   insn=0x0000000000582434 string=0x0000000000582438 "J!"
 *   insn=0x0000000000582440 string=0x0000000000582444 "\t"
 *   insn=0x0000000000582458 string=0x000000000058245C "k"
 *   insn=0x0000000000582470 string=0x000000000058247C "."
 *   insn=0x0000000000582494 string=0x0000000000582498 "#"
 *   insn=0x000000000058249C string=0x00000000005824A0 "$"
 *   insn=0x00000000005824A8 string=0x00000000005824AC ""
 *   insn=0x00000000005824AC string=0x00000000005824B0 ""
 *   insn=0x00000000005824B0 string=0x00000000005824B4 ""
 *   insn=0x00000000005824B4 string=0x00000000005824B8 "\n"
 *   insn=0x00000000005824B8 string=0x00000000005824BC "\t"
 *   insn=0x00000000005824D4 string=0x00000000005826A4 " "
 *   insn=0x00000000005824E4 string=0x00000000005824E8 "_"
 *   insn=0x00000000005824F8 string=0x00000000005824FC "r"
 *   insn=0x0000000000582508 string=0x000000000058250C "@\t"
 *   insn=0x000000000058250C string=0x0000000000582634 "`"
 *   insn=0x0000000000582524 string=0x0000000000582528 "O"
 *   insn=0x0000000000582538 string=0x000000000058253C "b"
 *   insn=0x000000000058254C string=0x0000000000582550 "!"
 *   insn=0x0000000000582554 string=0x0000000000582558 "a"
 *   insn=0x000000000058255C string=0x0000000000582560 "?"
 *   insn=0x0000000000582574 string=0x0000000000582578 "?"
 *   insn=0x0000000000582588 string=0x000000000058258C "B\t"
 *   insn=0x000000000058258C string=0x0000000000582590 "`"
 *   insn=0x00000000005825A0 string=0x00000000005825A4 "?"
 *   insn=0x00000000005825B0 string=0x00000000005825B4 "B"
 *   insn=0x00000000005825B8 string=0x00000000005825BC "?"
 *   insn=0x00000000005825BC string=0x00000000005825C0 "B"
 *   insn=0x00000000005825E0 string=0x00000000005825E4 "/"
 *   insn=0x00000000005825FC string=0x0000000000582600 "B "
 *   insn=0x0000000000582604 string=0x0000000000582608 "/"
 *   insn=0x000000000058260C string=0x0000000000582610 "a"
 *   insn=0x000000000058261C string=0x0000000000582620 "?"
 *   insn=0x0000000000582620 string=0x0000000000582624 "B"
 *   insn=0x0000000000582624 string=0x0000000000582628 "w"
 *   insn=0x0000000000582624 string=0x000000000058262C "u"
 *   insn=0x0000000000582638 string=0x000000000058263C "`\n@"
 *   insn=0x000000000058264C string=0x0000000000582650 "b"
 *   insn=0x0000000000582664 string=0x0000000000582668 "`"
 *   insn=0x0000000000582684 string=0x0000000000582688 "b"
 *   insn=0x0000000000582690 string=0x0000000000582694 "B "
 *   insn=0x0000000000582694 string=0x0000000000582698 ""
 *   insn=0x000000000058269C string=0x00000000005826A0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5822B0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  _BOOL4 v3; // w14
  int *v4; // x6
  __int64 v5; // x7
  __int64 v6; // x5
  __int64 v7; // x9
  __int64 v8; // x4
  _QWORD *v9; // x5
  _QWORD *i; // x1
  int *v11; // x8
  _QWORD *v12; // x1
  __int64 v13; // x13
  unsigned __int64 v14; // x9
  __int64 v15; // x10
  __int64 v16; // x12
  int *v17; // x11
  int v18; // w0
  unsigned __int64 v19; // x1
  _QWORD *v21; // x0
  _BYTE *v22; // x21
  char v23; // w20
  char *v25; // x0
  char *v26; // x0
  int v27; // w20
  char *v28; // x0
  char *v29; // x22
  unsigned __int64 v30; // x1
  unsigned __int64 v31; // x0
  unsigned __int64 v32; // x3
  unsigned __int64 v33; // x4
  __int64 v34; // x20
  __int64 v35; // x23
  unsigned __int8 v36; // w24
  unsigned int v37; // w0
  _BYTE *v38; // x21
  __int64 v39; // x2
  unsigned int *v40; // x0
  char v41; // w20
  char *v42; // x0
  char *v43; // [xsp+48h] [xbp+48h]
  unsigned int *v44; // [xsp+50h] [xbp+50h] BYREF
  unsigned __int64 v45; // [xsp+58h] [xbp+58h] BYREF
  unsigned __int64 v46[4]; // [xsp+60h] [xbp+60h] BYREF
  __int64 v47; // [xsp+80h] [xbp+80h]

  v3 = a2 > 0x2F;
  v4 = (int *)a1[2];
  v5 = *a1;
  if ( a2 > 0x2F && *(_DWORD *)(a3 + 40) )
  {
    v6 = a1[5];
    if ( a1[4] == qword_6E8A58 && v6 == qword_6FE3C8 )
    {
      v7 = qword_6FE3D0;
      v8 = 0;
      v9 = 0;
      for ( i = (_QWORD *)qword_6FE3D0; i; i = (_QWORD *)i[5] )
      {
        if ( *(_QWORD *)a3 >= *i && *(_QWORD *)a3 < i[1] )
        {
          v5 = i[2];
          v11 = (int *)i[3];
          if ( i != (_QWORD *)qword_6FE3D0 )
          {
            v9[5] = i[5];
            i[5] = v7;
            qword_6FE3D0 = (__int64)i;
          }
          goto LABEL_41;
        }
        if ( *(_OWORD *)i == 0 )
        {
          v8 = (__int64)i;
          break;
        }
        v8 = (__int64)i;
        if ( i[5] )
          v9 = i;
      }
LABEL_21:
      v13 = *((unsigned __int16 *)a1 + 12);
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v11 = 0;
      while ( --v13 != -1 )
      {
        v18 = *v4;
        if ( *v4 == 1 )
        {
          v19 = v5 + *((_QWORD *)v4 + 2);
          if ( *(_QWORD *)a3 >= v19 && *(_QWORD *)a3 < v19 + *((_QWORD *)v4 + 5) )
          {
            v14 = v19 + *((_QWORD *)v4 + 5);
            v15 = v5 + *((_QWORD *)v4 + 2);
            v16 = 1;
          }
        }
        else if ( v18 == 1685382480 )
        {
          v11 = v4;
        }
        else if ( v18 == 2 )
        {
          v17 = v4;
        }
        v4 += 14;
      }
      if ( !v16 )
        return 0;
      if ( v3 )
      {
        if ( v9 && v8 )
        {
          v9[5] = *(_QWORD *)(v8 + 40);
          *(_QWORD *)(v8 + 40) = qword_6FE3D0;
          qword_6FE3D0 = v8;
        }
        v21 = (_QWORD *)qword_6FE3D0;
        *(_QWORD *)(qword_6FE3D0 + 16) = v5;
        v21[3] = v11;
        v21[4] = v17;
        *v21 = v15;
        v21[1] = v14;
      }
LABEL_41:
      if ( !v11 )
        return 0;
      v22 = (_BYTE *)(v5 + *((_QWORD *)v11 + 2));
      if ( *v22 != 1 )
        return 1;
      v23 = v22[1];
      v25 = (char *)sub_581E64(v23, a3);
      v26 = sub_581EC4(v23, v25, v22 + 4, (unsigned __int64 *)&v44);
      v27 = (unsigned __int8)v22[2];
      if ( v27 != 255 && v22[3] == 59 )
      {
        v43 = v26;
        v28 = (char *)sub_581E64(v27, a3);
        v29 = sub_581EC4(v27, v28, v43, &v45);
        if ( !v45 )
          return 1;
        if ( ((unsigned __int8)v29 & 3) == 0 )
        {
          v30 = *(_QWORD *)a3;
          if ( *(_QWORD *)a3 >= (unsigned __int64)&v22[*(int *)v29] )
          {
            v31 = v45 - 1;
            if ( v30 < (unsigned __int64)&v22[*(int *)&v29[8 * v45 - 8]] )
            {
              v32 = v45 - 1;
              v33 = 0;
              do
              {
                while ( 1 )
                {
                  if ( v33 >= v32 )
                    abort();
                  v31 = (v32 + v33) >> 1;
                  if ( v30 >= (unsigned __int64)&v22[*(int *)&v29[8 * v31]] )
                    break;
                  v32 = (v32 + v33) >> 1;
                }
                v33 = v31 + 1;
              }
              while ( v30 >= (unsigned __int64)&v22[*(int *)&v29[8 * v31 + 8]] );
            }
            v34 = 8 * v31;
            v35 = (__int64)&v22[*(int *)&v29[8 * v31 + 4]];
            v36 = sub_5822A0(v35);
            v37 = sub_581DA4(v36);
            sub_581EC4(v36 & 0xF, 0, (char *)(v35 + v37 + 8), v46);
            v38 = &v22[*(int *)&v29[v34]];
            if ( *(_QWORD *)a3 < (unsigned __int64)&v38[v46[0]] )
              *(_QWORD *)(a3 + 32) = v35;
            *(_QWORD *)(a3 + 24) = v38;
          }
          return 1;
        }
      }
      v46[1] = *(_QWORD *)(a3 + 8);
      v46[2] = *(_QWORD *)(a3 + 16);
      v47 = 0;
      v39 = *(_QWORD *)a3;
      LOBYTE(v47) = 4;
      v46[0] = 0;
      v46[3] = (unsigned __int64)v44;
      v40 = sub_582140((__int64)v46, v44, v39);
      *(_QWORD *)(a3 + 32) = v40;
      if ( v40 )
      {
        v41 = sub_5822A0((__int64)v40);
        v42 = (char *)sub_581E64(v41, a3);
        sub_581EC4(v41, v42, (char *)(*(_QWORD *)(a3 + 32) + 8LL), &v45);
        *(_QWORD *)(a3 + 24) = v45;
      }
      return 1;
    }
    qword_6E8A58 = a1[4];
    v12 = &unk_6FE408;
    qword_6FE3C8 = v6;
    do
    {
      *(v12 - 6) = 0;
      *(v12 - 5) = 0;
      *(v12 - 1) = v12;
      v12 += 6;
    }
    while ( v12 != (_QWORD *)&unk_6FE588 );
    qword_6FE550 = 0;
    qword_6FE3D0 = (__int64)&unk_6FE3D8;
    *(_DWORD *)(a3 + 40) = 0;
LABEL_19:
    v8 = 0;
    v9 = 0;
    goto LABEL_21;
  }
  if ( a2 > 0x19 )
    goto LABEL_19;
  return 0xFFFFFFFFLL;
}

