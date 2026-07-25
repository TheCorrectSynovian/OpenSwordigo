/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005390F0
 * Mangled: sub_5390F0
 * Demangled: sub_5390F0
 *
 * Callers: 1
 *   0x0000000000539A6C  sub_539A6C
 *
 * Callees: 10
 *   0x0000000000203020  .memchr
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B4A0  sub_52B4A0
 *   0x0000000000532724  sub_532724
 *   0x0000000000532808  sub_532808
 *   0x0000000000539A6C  sub_539A6C
 *   0x000000000053CA8C  sub_53CA8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 158
 *   insn=0x0000000000539130 string=0x0000000000539134 "@\t"
 *   insn=0x0000000000539140 string=0x0000000000539144 "@D"
 *   insn=0x0000000000539148 string=0x000000000053914C "@"
 *   insn=0x0000000000539150 string=0x0000000000539154 "Z"
 *   insn=0x0000000000539180 string=0x0000000000539184 "?"
 *   insn=0x0000000000539198 string=0x000000000053919C "?"
 *   insn=0x00000000005391B8 string=0x00000000005391BC "@"
 *   insn=0x00000000005391C0 string=0x00000000005391C4 " "
 *   insn=0x00000000005391CC string=0x00000000005391D0 "?"
 *   insn=0x00000000005391D4 string=0x00000000005391D8 "!"
 *   insn=0x0000000000539208 string=0x000000000053920C "?"
 *   insn=0x0000000000539214 string=0x0000000000539218 "|"
 *   insn=0x000000000053923C string=0x00000000005392F8 "_C"
 *   insn=0x0000000000539254 string=0x000000000053974C "_+"
 *   insn=0x0000000000539268 string=0x0000000000539278 "_C"
 *   insn=0x0000000000539274 string=0x000000000053978C " "
 *   insn=0x0000000000539278 string=0x000000000053927C "@"
 *   insn=0x0000000000539280 string=0x0000000000539A18 " "
 *   insn=0x000000000053929C string=0x00000000005392A0 "?"
 *   insn=0x00000000005392A0 string=0x00000000005392A4 "b:"
 *   insn=0x00000000005392A4 string=0x00000000005392A8 "!"
 *   insn=0x00000000005392B4 string=0x00000000005392B8 "T"
 *   insn=0x00000000005392C0 string=0x00000000005392C4 "Q"
 *   insn=0x00000000005392C4 string=0x00000000005392C8 "?"
 *   insn=0x00000000005392D4 string=0x00000000005392D8 "?"
 *   insn=0x00000000005392E0 string=0x00000000005392E4 "I"
 *   insn=0x0000000000539308 string=0x000000000053930C "`"
 *   insn=0x000000000053930C string=0x0000000000539310 "X"
 *   insn=0x0000000000539334 string=0x0000000000539338 "a"
 *   insn=0x0000000000539338 string=0x000000000053933C "|7"
 *   insn=0x0000000000539338 string=0x0000000000539584 "<%"
 *   insn=0x000000000053934C string=0x0000000000539350 " "
 *   insn=0x0000000000539358 string=0x000000000053935C "H"
 *   insn=0x000000000053935C string=0x0000000000539404 "a"
 *   insn=0x000000000053936C string=0x0000000000539370 "B-"
 *   insn=0x0000000000539370 string=0x0000000000539374 "s"
 *   insn=0x0000000000539374 string=0x0000000000539378 "?"
 *   insn=0x0000000000539378 string=0x000000000053937C """
 *   insn=0x0000000000539380 string=0x0000000000539384 "6"
 *   insn=0x0000000000539390 string=0x0000000000539394 "?"
 *   insn=0x0000000000539398 string=0x000000000053939C "!"
 *   insn=0x00000000005393AC string=0x00000000005393B0 "?"
 *   insn=0x00000000005393B0 string=0x00000000005393B4 "b%"
 *   insn=0x00000000005393B4 string=0x00000000005393B8 "!"
 *   insn=0x00000000005393D0 string=0x00000000005393D4 "_"
 *   insn=0x00000000005393D4 string=0x00000000005393D8 "@"
 *   insn=0x00000000005393DC string=0x00000000005393E0 " "
 *   insn=0x00000000005393E4 string=0x00000000005393E8 "@)"
 *   insn=0x00000000005393F8 string=0x00000000005393FC "s"
 *   insn=0x00000000005393FC string=0x0000000000539400 "\t"
 *   insn=0x0000000000539404 string=0x0000000000539408 " "
 *   insn=0x0000000000539410 string=0x0000000000539414 "`"
 *   insn=0x0000000000539420 string=0x0000000000539424 "`"
 *   insn=0x0000000000539420 string=0x0000000000539830 "s^"
 *   insn=0x000000000053942C string=0x0000000000539430 "H'"
 *   insn=0x0000000000539430 string=0x0000000000539434 "?"
 *   insn=0x0000000000539434 string=0x0000000000539438 "s"
 *   insn=0x0000000000539438 string=0x000000000053943C "#"
 *   insn=0x000000000053944C string=0x0000000000539450 "t"
 *   insn=0x000000000053945C string=0x0000000000539460 "`"
 *   insn=0x000000000053946C string=0x0000000000539470 "3"
 *   insn=0x0000000000539474 string=0x0000000000539478 "_"
 *   insn=0x0000000000539484 string=0x0000000000539488 "?"
 *   insn=0x000000000053948C string=0x0000000000539490 " "
 *   insn=0x000000000053949C string=0x00000000005394A0 "!"
 *   insn=0x00000000005394A4 string=0x00000000005394A8 "<"
 *   insn=0x00000000005394AC string=0x00000000005394B0 "`"
 *   insn=0x00000000005394B0 string=0x00000000005394B4 "`"
 *   insn=0x00000000005394C4 string=0x00000000005394C8 "i "
 *   insn=0x00000000005394D8 string=0x00000000005394DC " "
 *   insn=0x00000000005394E0 string=0x00000000005394F4 "`"
 *   insn=0x00000000005394E4 string=0x00000000005394E8 " "
 *   insn=0x00000000005394EC string=0x00000000005394F0 " "
 *   insn=0x00000000005394F4 string=0x00000000005394F8 "sc"
 *   insn=0x0000000000539530 string=0x0000000000539534 "<"
 *   insn=0x0000000000539534 string=0x0000000000539538 "_C"
 *   insn=0x0000000000539538 string=0x000000000053953C "A"
 *   insn=0x0000000000539544 string=0x0000000000539548 "`"
 *   insn=0x0000000000539558 string=0x000000000053955C "A"
 *   insn=0x00000000005395A4 string=0x00000000005395A8 "@"
 *   insn=0x00000000005395A8 string=0x0000000000539690 "W"
 *   insn=0x00000000005395B0 string=0x00000000005395B4 " "
 *   insn=0x00000000005395D8 string=0x00000000005395DC "?"
 *   insn=0x00000000005395E0 string=0x00000000005397E0 "6"
 *   insn=0x00000000005395EC string=0x00000000005395F0 "?"
 *   insn=0x0000000000539600 string=0x0000000000539604 "`"
 *   insn=0x000000000053960C string=0x0000000000539610 "?"
 *   insn=0x0000000000539610 string=0x0000000000539614 "b"
 *   insn=0x0000000000539614 string=0x0000000000539618 "!"
 *   insn=0x000000000053962C string=0x0000000000539630 "?"
 *   insn=0x0000000000539634 string=0x0000000000539638 "!"
 *   insn=0x0000000000539650 string=0x0000000000539654 "_"
 *   insn=0x000000000053965C string=0x0000000000539660 " "
 *   insn=0x0000000000539678 string=0x000000000053967C "s"
 *   insn=0x000000000053967C string=0x0000000000539680 "`"
 *   insn=0x0000000000539690 string=0x0000000000539A38 "3"
 *   insn=0x00000000005396A4 string=0x00000000005396A8 "3"
 *   insn=0x00000000005396B4 string=0x00000000005396B8 "_"
 *   insn=0x00000000005396C4 string=0x00000000005396C8 "p"
 *   insn=0x00000000005396D8 string=0x00000000005396DC "a"
 *   insn=0x00000000005396E4 string=0x00000000005396E8 "!"
 *   insn=0x00000000005396F0 string=0x00000000005396F4 "_"
 *   insn=0x00000000005396F4 string=0x00000000005396F8 "@"
 *   insn=0x0000000000539720 string=0x0000000000539724 "_"
 *   insn=0x0000000000539730 string=0x0000000000539734 "?"
 *   insn=0x0000000000539738 string=0x000000000053973C " "
 *   insn=0x0000000000539758 string=0x000000000053975C "#"
 *   insn=0x000000000053975C string=0x0000000000539760 "_#"
 *   insn=0x0000000000539768 string=0x000000000053976C " "
 *   insn=0x0000000000539768 string=0x0000000000539778 " "
 *   insn=0x0000000000539794 string=0x0000000000539798 "h"
 *   insn=0x00000000005397A0 string=0x00000000005397A4 "@"
 *   insn=0x00000000005397B8 string=0x00000000005397BC "!"
 *   insn=0x00000000005397CC string=0x00000000005397D0 "<"
 *   insn=0x00000000005397D8 string=0x00000000005397DC "W"
 *   insn=0x00000000005397F4 string=0x00000000005397F8 "?"
 *   insn=0x00000000005397FC string=0x0000000000539800 " "
 *   insn=0x0000000000539814 string=0x0000000000539818 "?"
 *   insn=0x000000000053981C string=0x0000000000539820 " "
 *   insn=0x0000000000539828 string=0x000000000053982C "["
 *   insn=0x0000000000539838 string=0x000000000053983C "!(@"
 *   insn=0x000000000053983C string=0x0000000000539840 " "
 *   insn=0x0000000000539854 string=0x0000000000539858 "?"
 *   insn=0x0000000000539860 string=0x0000000000539864 "!$@"
 *   insn=0x0000000000539864 string=0x0000000000539868 " "
 *   insn=0x0000000000539870 string=0x0000000000539874 "A"
 *   insn=0x0000000000539898 string=0x000000000053989C "|"
 *   insn=0x000000000053989C string=0x000000000053CA8C "E"
 *   insn=0x00000000005398AC string=0x00000000005398B0 " "
 *   insn=0x00000000005398C4 string=0x00000000005398C8 "i"
 *   insn=0x00000000005398C8 string=0x00000000005398CC "`"
 *   insn=0x00000000005398E0 string=0x00000000005398E4 " "
 *   insn=0x00000000005398EC string=0x00000000005398F0 " "
 *   insn=0x00000000005398F8 string=0x00000000005398FC "!$@"
 *   insn=0x00000000005398FC string=0x0000000000539900 " "
 *   insn=0x0000000000539920 string=0x0000000000539924 "!(@"
 *   insn=0x0000000000539924 string=0x0000000000539928 " "
 *   insn=0x0000000000539940 string=0x0000000000539944 "?"
 *   insn=0x000000000053994C string=0x0000000000539950 "!$@"
 *   insn=0x0000000000539950 string=0x0000000000539954 " "
 *   insn=0x0000000000539964 string=0x0000000000539968 "j"
 *   insn=0x000000000053996C string=0x0000000000539970 "!$@"
 *   insn=0x0000000000539970 string=0x0000000000539974 " "
 *   insn=0x0000000000539978 string=0x000000000053997C "A"
 *   insn=0x000000000053998C string=0x0000000000539990 "!$@"
 *   insn=0x0000000000539990 string=0x0000000000539994 " "
 *   insn=0x00000000005399A0 string=0x00000000005399A4 "!"
 *   insn=0x00000000005399AC string=0x00000000005399B0 "!$@"
 *   insn=0x00000000005399B0 string=0x00000000005399B4 " "
 *   insn=0x00000000005399B8 string=0x00000000005399BC "!"
 *   insn=0x00000000005399C4 string=0x00000000005399C8 "%"
 *   insn=0x00000000005399F0 string=0x00000000005399F4 "!(@"
 *   insn=0x00000000005399F4 string=0x00000000005399F8 " "
 *   insn=0x00000000005399F8 string=0x00000000005399FC "-"
 *   insn=0x0000000000539A20 string=0x0000000000539A24 "8"
 *   insn=0x0000000000539A40 string=0x0000000000539A44 "`"
 *   insn=0x0000000000539A4C string=0x0000000000539A50 "`c"
 *   insn=0x0000000000539A54 string=0x0000000000539A58 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_5390F0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // x21
  int v9; // w20
  unsigned int v10; // w26
  int v11; // w19
  unsigned int v12; // w19
  int v13; // w1
  unsigned __int64 v14; // x1
  int v15; // w22
  unsigned int v16; // w23
  unsigned __int64 v17; // x1
  int v18; // w25
  int v19; // w28
  size_t v20; // x24
  unsigned int v21; // w25
  unsigned int v22; // w20
  int v23; // w22
  unsigned int v24; // w19
  _QWORD *v25; // x0
  unsigned __int64 v26; // x1
  unsigned __int64 v27; // x2
  unsigned __int8 *v28; // x1
  int v29; // w1
  _QWORD *v30; // x0
  int v31; // w19
  int v32; // w1
  unsigned int v33; // w20
  bool v34; // cf
  int v35; // w0
  unsigned __int8 *v36; // x1
  int v37; // w0
  int v38; // w19
  char *v39; // x27
  _QWORD *v40; // x20
  void *v42; // x0
  int v43; // w0
  unsigned int v44; // w20
  int v45; // w0
  _QWORD *v46; // x0
  unsigned __int64 v47; // x1
  unsigned __int8 *v48; // x1
  int v49; // w1
  _QWORD *v50; // x0
  int v51; // w19
  int v52; // w1
  char *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x19
  char *v56; // x0
  unsigned __int8 *v57; // x1
  int v58; // w0
  unsigned __int8 *v59; // x1
  int v60; // w0
  unsigned __int8 *v61; // x1
  int v62; // w0
  int v63; // [xsp+64h] [xbp+64h]
  int v66; // [xsp+80h] [xbp+80h]
  unsigned int v68; // [xsp+88h] [xbp+88h]
  _QWORD *v69; // [xsp+90h] [xbp+90h] BYREF
  __int64 v70; // [xsp+98h] [xbp+98h]
  _QWORD *v71; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v72; // [xsp+A8h] [xbp+A8h]
  char v73[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v74; // [xsp+C8h] [xbp+C8h] BYREF

  v71 = a2;
  v72 = a3;
  v69 = a4;
  v70 = a5;
  v8 = sub_532724((__int64)v73, (_QWORD *)(a6 + 208));
  v9 = *(_DWORD *)(a6 + 24) & 0x4A;
  if ( v9 == 64 )
  {
    v10 = 8;
  }
  else if ( v9 == 8 )
  {
    v10 = 16;
  }
  else
  {
    v10 = 10;
  }
  v11 = sub_532808((__int64)&v71);
  if ( (v11 == -1) == ((unsigned int)sub_532808((__int64)&v69) == -1) )
  {
    v12 = 0;
    v63 = 0;
  }
  else
  {
    v12 = (unsigned __int8)sub_532808((__int64)&v71);
    v63 = *(unsigned __int8 *)(v8 + 110) == v12;
    if ( *(unsigned __int8 *)(v8 + 110) != v12 && *(unsigned __int8 *)(v8 + 111) != v12 )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
    v13 = *(unsigned __int8 *)(v8 + 32);
    if ( *(_BYTE *)(v8 + 32) && *(unsigned __int8 *)(v8 + 73) == v12 )
    {
      v13 = 1;
      goto LABEL_15;
    }
    if ( *(unsigned __int8 *)(v8 + 72) == v12 )
    {
LABEL_15:
      v16 = 0;
      v68 = 0;
      while ( (!v13 || *(unsigned __int8 *)(v8 + 73) != v12) && *(unsigned __int8 *)(v8 + 72) != v12 )
      {
        if ( *(unsigned __int8 *)(v8 + 114) == v12 )
        {
          if ( (v10 == 10) >= v68 )
          {
            ++v16;
            if ( v10 == 8 || (v68 = 1, !v9) )
            {
              v16 = 0;
              v68 = 1;
              v10 = 8;
            }
            goto LABEL_26;
          }
        }
        else if ( !v68 )
        {
          break;
        }
        if ( *(unsigned __int8 *)(v8 + 112) != v12 && *(unsigned __int8 *)(v8 + 113) != v12 )
        {
          v19 = 0;
          v68 = 1;
          goto LABEL_75;
        }
        if ( v10 != 16 && v9 )
        {
          v19 = 0;
          v68 = 1;
          goto LABEL_33;
        }
        v16 = 0;
        v68 = 0;
        v10 = 16;
LABEL_26:
        if ( v71 )
        {
          v17 = v71[2];
          if ( v17 >= v71[3] )
            (*(void (__fastcall **)(_QWORD *))(*v71 + 80LL))(v71);
          else
            v71[2] = v17 + 1;
          LODWORD(v72) = -1;
        }
        v18 = sub_532808((__int64)&v71);
        if ( (v18 == -1) == ((unsigned int)sub_532808((__int64)&v69) == -1) )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 1;
          goto LABEL_75;
        }
        v12 = (unsigned __int8)sub_532808((__int64)&v71);
        v13 = *(unsigned __int8 *)(v8 + 32);
        if ( !v68 )
          break;
      }
      v19 = 0;
      if ( v10 != 16 )
        goto LABEL_33;
LABEL_76:
      v20 = 22;
      v74 = &byte_6FD2F8;
      if ( v13 )
        goto LABEL_77;
LABEL_34:
      v66 = *(unsigned __int8 *)(v8 + 136);
      v21 = 0xFFFFFFFF / v10;
      if ( !*(_BYTE *)(v8 + 136) )
        goto LABEL_35;
LABEL_78:
      if ( !v19 )
      {
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != v12 )
          {
LABEL_82:
            if ( *(unsigned __int8 *)(v8 + 72) == v12 )
              goto LABEL_147;
            v42 = memchr((const void *)(v8 + 114), v12, v20);
            if ( !v42 )
              goto LABEL_147;
            v43 = (_DWORD)v42 - (v8 + 114);
            if ( v43 >= 16 )
              v43 -= 6;
            if ( v21 < v22 )
            {
              v23 = 1;
            }
            else
            {
              v44 = v22 * v10;
              ++v16;
              v34 = ~v43 >= v44;
              v22 = v43 + v44;
              v45 = !v34;
              v23 |= v45;
            }
            goto LABEL_91;
          }
          while ( 1 )
          {
            if ( !v16 )
            {
              v38 = 1;
              goto LABEL_66;
            }
            v53 = v74;
            v54 = *((_QWORD *)v74 - 3);
            v55 = v54 + 1;
            if ( (unsigned __int64)(v54 + 1) > *((_QWORD *)v74 - 2) || *((int *)v74 - 2) > 0 )
            {
              sub_567088(&v74, v54 + 1);
              v53 = v74;
              v54 = *((_QWORD *)v74 - 3);
            }
            v53[v54] = v16;
            v16 = 0;
            v56 = v74;
            if ( v74 - 24 == (char *)&qword_6FD2E0 )
            {
LABEL_91:
              v46 = v71;
              if ( !v71 )
                goto LABEL_108;
            }
            else
            {
              *((_DWORD *)v74 - 2) = 0;
              *((_QWORD *)v56 - 3) = v55;
              v56[v55] = 0;
              v46 = v71;
              if ( !v71 )
                goto LABEL_108;
            }
            v47 = v46[2];
            if ( v47 >= v46[3] )
            {
              (*(void (__fastcall **)(_QWORD *))(*v46 + 80LL))(v46);
              v46 = v71;
              LODWORD(v72) = -1;
              if ( !v71 )
                goto LABEL_108;
              v48 = (unsigned __int8 *)v71[2];
              if ( (unsigned __int64)v48 < v71[3] )
              {
LABEL_94:
                v49 = *v48;
LABEL_95:
                v50 = v69;
                v51 = 0;
                LODWORD(v72) = v49;
                if ( !v69 )
                  goto LABEL_98;
                v52 = 0;
                if ( (_DWORD)v70 != -1 )
                  goto LABEL_97;
                goto LABEL_110;
              }
            }
            else
            {
              v46[2] = v47 + 1;
              LODWORD(v72) = -1;
              v48 = (unsigned __int8 *)v46[2];
              if ( (unsigned __int64)v48 < v46[3] )
                goto LABEL_94;
            }
            v49 = (*(__int64 (__fastcall **)(_QWORD *))(*v46 + 72LL))(v46);
            if ( v49 != -1 )
              goto LABEL_95;
            v71 = 0;
LABEL_108:
            v50 = v69;
            if ( !v69 )
              goto LABEL_65;
            v52 = 0;
            v51 = v66;
            if ( (_DWORD)v70 != -1 )
              goto LABEL_97;
LABEL_110:
            v57 = (unsigned __int8 *)v50[2];
            if ( (unsigned __int64)v57 < v50[3] )
            {
              v58 = *v57;
LABEL_112:
              LODWORD(v70) = v58;
              v52 = 0;
              goto LABEL_97;
            }
            v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v50 + 72LL))(v50);
            if ( v58 != -1 )
              goto LABEL_112;
            v69 = 0;
            v52 = v66;
LABEL_97:
            if ( v51 == v52 )
              goto LABEL_65;
LABEL_98:
            if ( !v71 )
              goto LABEL_154;
            if ( (_DWORD)v72 == -1 )
              break;
            v12 = (unsigned __int8)v72;
            if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != (unsigned __int8)v72 )
              goto LABEL_82;
          }
          v61 = (unsigned __int8 *)v71[2];
          if ( (unsigned __int64)v61 < v71[3] )
          {
            v62 = *v61;
            goto LABEL_131;
          }
          v62 = (*(__int64 (__fastcall **)(_QWORD *))(*v71 + 72LL))(v71);
          if ( v62 == -1 )
          {
            v71 = 0;
LABEL_154:
            v12 = 255;
          }
          else
          {
LABEL_131:
            LODWORD(v72) = v62;
            v12 = (unsigned __int8)v62;
          }
        }
      }
LABEL_164:
      v22 = 0;
      v23 = 0;
      v38 = 0;
      goto LABEL_66;
    }
    if ( v71 )
    {
      v14 = v71[2];
      if ( v14 >= v71[3] )
        sub_52B4A0((__int64)v71);
      else
        v71[2] = v14 + 1;
      LODWORD(v72) = -1;
    }
    v15 = sub_532808((__int64)&v71);
    if ( (v15 == -1) != ((unsigned int)sub_532808((__int64)&v69) == -1) )
    {
      v12 = (unsigned __int8)sub_532808((__int64)&v71);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 1;
  v16 = 0;
  v68 = 0;
LABEL_75:
  if ( v10 == 16 )
    goto LABEL_76;
LABEL_33:
  v20 = (int)v10;
  v74 = &byte_6FD2F8;
  if ( !v13 )
    goto LABEL_34;
LABEL_77:
  sub_567088(&v74, 32);
  v66 = *(unsigned __int8 *)(v8 + 136);
  v21 = 0xFFFFFFFF / v10;
  if ( *(_BYTE *)(v8 + 136) )
    goto LABEL_78;
LABEL_35:
  if ( v19 )
    goto LABEL_164;
  v22 = 0;
  v23 = 0;
  while ( v20 > 0xA )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(v12 - 48) <= 9u )
      {
        v24 = v12 - 48;
        goto LABEL_41;
      }
      if ( (unsigned __int8)(v12 - 97) <= 5u )
      {
        v24 = v12 - 87;
        goto LABEL_41;
      }
      if ( (unsigned __int8)(v12 - 65) > 5u )
        goto LABEL_147;
      v24 = v12 - 55;
      if ( v21 < v22 )
        goto LABEL_42;
LABEL_56:
      v33 = v22 * v10;
      ++v16;
      v34 = ~v24 >= v33;
      v22 = v24 + v33;
      v35 = !v34;
      v23 |= v35;
      v25 = v71;
      if ( v71 )
        goto LABEL_43;
LABEL_60:
      v30 = v69;
      if ( !v69 )
        goto LABEL_65;
      v31 = 1;
      v32 = 0;
      if ( (_DWORD)v70 != -1 )
        goto LABEL_48;
LABEL_62:
      v36 = (unsigned __int8 *)v30[2];
      if ( (unsigned __int64)v36 >= v30[3] )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 72LL))(v30);
        if ( v37 == -1 )
        {
          v69 = 0;
          v32 = 1;
          goto LABEL_48;
        }
      }
      else
      {
        v37 = *v36;
      }
      LODWORD(v70) = v37;
      if ( !v31 )
        goto LABEL_65;
LABEL_49:
      if ( !v71 )
        goto LABEL_146;
      if ( (_DWORD)v72 == -1 )
        break;
      v12 = (unsigned __int8)v72;
      if ( v20 <= 0xA )
        goto LABEL_38;
    }
    v59 = (unsigned __int8 *)v71[2];
    if ( (unsigned __int64)v59 < v71[3] )
    {
      v60 = *v59;
LABEL_128:
      LODWORD(v72) = v60;
      v12 = (unsigned __int8)v60;
      continue;
    }
    v60 = (*(__int64 (__fastcall **)(_QWORD *))(*v71 + 72LL))(v71);
    if ( v60 != -1 )
      goto LABEL_128;
    v71 = 0;
LABEL_146:
    v12 = 255;
  }
LABEL_38:
  if ( v12 <= 0x2F || v12 >= (unsigned __int8)(v20 + 48) )
  {
LABEL_147:
    v38 = 0;
    goto LABEL_66;
  }
  v24 = v12 - 48;
LABEL_41:
  if ( v21 >= v22 )
    goto LABEL_56;
LABEL_42:
  v25 = v71;
  v23 = 1;
  if ( !v71 )
    goto LABEL_60;
LABEL_43:
  v26 = v25[2];
  if ( v26 >= v25[3] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v25 + 80LL))(v25);
    v25 = v71;
    LODWORD(v72) = -1;
    if ( !v71 )
      goto LABEL_60;
    v28 = (unsigned __int8 *)v71[2];
    if ( (unsigned __int64)v28 < v71[3] )
      goto LABEL_45;
LABEL_135:
    v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
    if ( v29 == -1 )
    {
      v71 = 0;
      goto LABEL_60;
    }
    goto LABEL_46;
  }
  v25[2] = v26 + 1;
  v27 = v25[3];
  v28 = (unsigned __int8 *)v25[2];
  LODWORD(v72) = -1;
  if ( (unsigned __int64)v28 >= v27 )
    goto LABEL_135;
LABEL_45:
  v29 = *v28;
LABEL_46:
  v30 = v69;
  v31 = 0;
  LODWORD(v72) = v29;
  if ( !v69 )
    goto LABEL_49;
  v32 = 0;
  if ( (_DWORD)v70 == -1 )
    goto LABEL_62;
LABEL_48:
  if ( v31 != v32 )
    goto LABEL_49;
LABEL_65:
  v38 = 0;
  v19 = 1;
LABEL_66:
  v39 = v74;
  if ( *((_QWORD *)v74 - 3) )
  {
    sub_567890(&v74, v16);
    if ( !(unsigned __int8)sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), &v74) )
      *a7 = 4;
    v39 = v74;
    if ( (v16 == 0) > v68 && !*((_QWORD *)v74 - 3) )
      goto LABEL_68;
  }
  else if ( (v16 == 0) > v68 )
  {
LABEL_68:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_69;
  }
  if ( v38 )
    goto LABEL_68;
  if ( v23 )
  {
    *a8 = -1;
    *a7 = 4;
  }
  else
  {
    *a8 = (v22 ^ -v63) + v63;
  }
LABEL_69:
  if ( v19 )
    *a7 |= 2u;
  v40 = v71;
  if ( v39 - 24 != (char *)&qword_6FD2E0 )
    sub_52B45C((unsigned int *)v39 - 6);
  return v40;
}

