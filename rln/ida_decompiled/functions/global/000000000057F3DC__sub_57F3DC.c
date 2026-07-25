/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057F3DC
 * Mangled: sub_57F3DC
 * Demangled: sub_57F3DC
 *
 * Callers: 2
 *   0x000000000057F820  __cxa_demangle
 *   0x000000000057F97C  __gcclibcxx_demangle_callback
 *
 * Callees: 8
 *   0x00000000002010D0  .strncmp
 *   0x0000000000203230  .strlen
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000571FA0  sub_571FA0
 *   0x0000000000572470  sub_572470
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576FE0  sub_576FE0
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Referenced strings: 65
 *   insn=0x000000000057F40C string=0x00000000005A0650 "_GLOBAL_"
 *   insn=0x000000000057F410 string=0x000000000057F414 "!@"
 *   insn=0x000000000057F41C string=0x000000000057F420 ","
 *   insn=0x000000000057F420 string=0x000000000057F424 "@"
 *   insn=0x000000000057F428 string=0x000000000057F42C "?|"
 *   insn=0x000000000057F430 string=0x000000000057F434 "?"
 *   insn=0x000000000057F438 string=0x000000000057F43C "@"
 *   insn=0x000000000057F43C string=0x000000000057F440 " "
 *   insn=0x000000000057F440 string=0x000000000057F444 "?"
 *   insn=0x000000000057F450 string=0x000000000057F454 "w"
 *   insn=0x000000000057F460 string=0x000000000057F464 "a|@"
 *   insn=0x000000000057F468 string=0x000000000057F46C "%"
 *   insn=0x000000000057F474 string=0x000000000057F478 "BX"
 *   insn=0x000000000057F478 string=0x000000000057F47C "!@"
 *   insn=0x000000000057F47C string=0x000000000057F480 "B"
 *   insn=0x000000000057F484 string=0x000000000057F488 "!"
 *   insn=0x000000000057F490 string=0x000000000057F494 "?`""
 *   insn=0x000000000057F4D0 string=0x000000000057F4D4 " "
 *   insn=0x000000000057F4E4 string=0x000000000057F4E8 "w"
 *   insn=0x000000000057F510 string=0x000000000057F514 "G"
 *   insn=0x000000000057F534 string=0x000000000057F538 "r"
 *   insn=0x000000000057F538 string=0x0000000000571F00 "$"
 *   insn=0x000000000057F544 string=0x000000000057F548 ":"
 *   insn=0x000000000057F554 string=0x000000000057F558 "@\n"
 *   insn=0x000000000057F558 string=0x000000000057F55C "6\n"
 *   insn=0x000000000057F5C0 string=0x000000000057F5C4 "!"
 *   insn=0x000000000057F5C8 string=0x000000000057F5CC "d||"
 *   insn=0x000000000057F5CC string=0x000000000057F5D0 "c|"
 *   insn=0x000000000057F5DC string=0x000000000057F5E0 "c||"
 *   insn=0x000000000057F5E4 string=0x000000000057F5E8 "c@"
 *   insn=0x000000000057F5F8 string=0x000000000057F5FC ";"
 *   insn=0x000000000057F614 string=0x000000000057F618 "`"
 *   insn=0x000000000057F66C string=0x000000000057F670 "?"
 *   insn=0x000000000057F670 string=0x000000000057F674 "`"
 *   insn=0x000000000057F674 string=0x000000000057F678 "W"
 *   insn=0x000000000057F67C string=0x000000000057F680 "s"
 *   insn=0x000000000057F68C string=0x000000000057F690 "7"
 *   insn=0x000000000057F690 string=0x000000000057F694 "n"
 *   insn=0x000000000057F698 string=0x000000000057F69C " "
 *   insn=0x000000000057F6D8 string=0x000000000057F6DC "A"
 *   insn=0x000000000057F6EC string=0x000000000057F6F0 " "
 *   insn=0x000000000057F6F8 string=0x000000000057F6FC " "
 *   insn=0x000000000057F700 string=0x000000000057F704 "B"
 *   insn=0x000000000057F704 string=0x000000000057F708 "_d"
 *   insn=0x000000000057F70C string=0x000000000057F7C4 ""@9#"
 *   insn=0x000000000057F724 string=0x000000000057F728 """
 *   insn=0x000000000057F72C string=0x000000000057F730 "_"
 *   insn=0x000000000057F730 string=0x000000000057F734 "a"
 *   insn=0x000000000057F734 string=0x000000000057F738 "`"
 *   insn=0x000000000057F734 string=0x000000000057F780 "b"
 *   insn=0x000000000057F748 string=0x000000000057F74C "b@9c"
 *   insn=0x000000000057F74C string=0x000000000057F750 "c"
 *   insn=0x000000000057F750 string=0x000000000057F754 "@"
 *   insn=0x000000000057F760 string=0x000000000057F764 "b"
 *   insn=0x000000000057F764 string=0x000000000057F768 "@"
 *   insn=0x000000000057F774 string=0x000000000057F778 "_"
 *   insn=0x000000000057F7BC string=0x000000000057F7C0 "f"
 *   insn=0x000000000057F7C4 string=0x000000000057F7C8 "#"
 *   insn=0x000000000057F7C8 string=0x000000000057F7CC "@"
 *   insn=0x000000000057F7D8 string=0x000000000057F7DC "b"
 *   insn=0x000000000057F7D8 string=0x000000000057F7F0 "_|"
 *   insn=0x000000000057F7DC string=0x000000000057F7E0 "@"
 *   insn=0x000000000057F7F0 string=0x000000000057F7F4 "@"
 *   insn=0x000000000057F800 string=0x000000000057F804 "U"
 *   insn=0x000000000057F818 string=0x000000000057F81C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_57F3DC(char *a1, void (__fastcall *a2)(_BYTE *), __int64 a3)
{
  unsigned int v5; // w24
  int v7; // w23
  int v8; // w1
  size_t v9; // x0
  int v10; // w0
  int v11; // w23
  int v12; // w0
  __int64 v13; // x0
  __int64 v14; // x0
  const char *v15; // x23
  unsigned int *v16; // x22
  int v17; // w0
  void (__fastcall *v18)(_BYTE *); // x3
  int v20; // w0
  const char *v21; // x1
  int v22; // w0
  int v23; // w2
  const char *v24; // x3
  int v25; // w2
  int v26; // t1
  __int64 v27; // x0
  int v28; // t1
  __int64 v29; // [xsp+0h] [xbp+0h] BYREF
  char *v30; // [xsp+48h] [xbp+48h]
  _QWORD v31[2]; // [xsp+58h] [xbp+58h] BYREF
  int v32; // [xsp+68h] [xbp+68h]
  const char *v33; // [xsp+70h] [xbp+70h]
  __int64 *v34; // [xsp+78h] [xbp+78h]
  int v35; // [xsp+80h] [xbp+80h]
  int v36; // [xsp+84h] [xbp+84h]
  __int64 *v37; // [xsp+88h] [xbp+88h]
  int v38; // [xsp+90h] [xbp+90h]
  int v39; // [xsp+94h] [xbp+94h]
  int v40; // [xsp+98h] [xbp+98h]
  __int64 v41; // [xsp+A0h] [xbp+A0h]
  int v42; // [xsp+A8h] [xbp+A8h]
  int v43; // [xsp+ACh] [xbp+ACh]
  int v44; // [xsp+B0h] [xbp+B0h]
  _BYTE v45[256]; // [xsp+B8h] [xbp+B8h] BYREF
  __int64 v46; // [xsp+1B8h] [xbp+1B8h]
  char v47; // [xsp+1C0h] [xbp+1C0h]
  void (__fastcall *v48)(_BYTE *); // [xsp+1C8h] [xbp+1C8h]
  __int64 v49; // [xsp+1D0h] [xbp+1D0h]
  __int64 v50; // [xsp+1D8h] [xbp+1D8h]
  __int64 v51; // [xsp+1E0h] [xbp+1E0h]
  int v52; // [xsp+1E8h] [xbp+1E8h]
  int v53; // [xsp+1ECh] [xbp+1ECh]
  __int64 v54; // [xsp+1F0h] [xbp+1F0h]
  __int64 *v55; // [xsp+1F8h] [xbp+1F8h]
  int v56; // [xsp+200h] [xbp+200h]
  int v57; // [xsp+204h] [xbp+204h] BYREF
  __int64 *v58; // [xsp+208h] [xbp+208h]
  int v59; // [xsp+210h] [xbp+210h]
  int v60; // [xsp+214h] [xbp+214h] BYREF
  __int64 v61; // [xsp+218h] [xbp+218h]

  v5 = (unsigned __int8)*a1;
  if ( __PAIR64__((unsigned __int8)a1[1], v5) == 0x5A0000005FLL )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( !strncmp(a1, "_GLOBAL_", 8u) )
    {
      v8 = (unsigned __int8)a1[8];
      if ( v8 == 95 || v8 == 46 || v8 == 36 )
      {
        v20 = (unsigned __int8)a1[9];
        if ( v20 == 73 || (v7 = 0, v20 == 68) )
        {
          v7 = 0;
          if ( a1[10] == 95 )
          {
            if ( v20 == 73 )
              v7 = 2;
            else
              v7 = 3;
          }
        }
      }
    }
  }
  v9 = strlen(a1);
  v31[1] = &a1[v9];
  v32 = 17;
  v31[0] = a1;
  v33 = a1;
  v37 = &v29;
  v36 = 2 * v9;
  v35 = 0;
  v39 = v9;
  v38 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v34 = &v29;
  if ( v7 == 1 )
  {
    if ( v5 != 95 || a1[1] != 90 )
      return 0;
    v33 = a1 + 2;
    v16 = (unsigned int *)sub_576FE0((__int64)v31, 1);
    if ( (v32 & 1) == 0 )
    {
LABEL_44:
      v17 = *(unsigned __int8 *)v33;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v21 = v33;
      v17 = *(unsigned __int8 *)v33;
      if ( v17 != 46 )
        goto LABEL_14;
      v22 = *((unsigned __int8 *)v33 + 1);
      if ( (unsigned __int8)(v22 - 97) <= 0x19u || v22 == 95 )
        break;
      if ( (unsigned __int8)(v22 - 48) > 9u )
        goto LABEL_44;
      v23 = *(unsigned __int8 *)v33;
      v24 = v33;
LABEL_33:
      if ( v23 == 46 )
      {
        do
        {
          if ( (unsigned __int8)(v24[1] - 48) > 9u )
            break;
          v23 = *((unsigned __int8 *)v24 + 2);
          v24 += 2;
          if ( (unsigned __int8)(v23 - 48) > 9u )
            goto LABEL_33;
          do
          {
            v26 = *(unsigned __int8 *)++v24;
            v25 = v26;
          }
          while ( (unsigned __int8)(v26 - 48) <= 9u );
        }
        while ( v25 == 46 );
      }
      v33 = v24;
      v27 = sub_571FA0((__int64)v31, (__int64)v21, (int)v24 - (int)v21);
      v16 = (unsigned int *)sub_571F00((__int64)v31, 76, (__int64)v16, v27);
    }
    v23 = *((unsigned __int8 *)v33 + 2);
    v24 = v33 + 2;
    if ( (unsigned __int8)(v23 - 97) > 0x19u )
      goto LABEL_42;
    while ( 1 )
    {
      do
      {
        v28 = *(unsigned __int8 *)++v24;
        v23 = v28;
      }
      while ( (unsigned __int8)(v28 - 97) <= 0x19u );
LABEL_42:
      if ( v23 != 95 )
        goto LABEL_33;
    }
  }
  if ( v7 )
  {
    v10 = (unsigned __int8)a1[11];
    if ( v7 == 2 )
      v11 = 67;
    else
      v11 = 68;
    v33 = a1 + 11;
    if ( v10 == 95 && a1[12] == 90 )
    {
      v33 = a1 + 13;
      v13 = sub_576FE0((__int64)v31, 0);
    }
    else
    {
      v30 = a1 + 11;
      v12 = strlen(a1 + 11);
      v13 = sub_571FA0((__int64)v31, (__int64)v30, v12);
    }
    v14 = sub_571F00((__int64)v31, v11, v13, 0);
    v15 = v33;
    v16 = (unsigned int *)v14;
    v33 = &v15[strlen(v33)];
    v17 = *(unsigned __int8 *)v33;
  }
  else
  {
    v16 = (unsigned int *)sub_574B04((__int64)v31);
    v17 = *(unsigned __int8 *)v33;
  }
LABEL_14:
  if ( !v17 && v16 )
  {
    v48 = a2;
    v49 = a3;
    v46 = 0;
    v47 = 0;
    v50 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v52 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    sub_572470((__int64)&v60, &v57, (__int64)v16);
    v61 = 0;
    v60 *= v57;
    v55 = &v29;
    v58 = &v29;
    sub_57A6E8((__int64)v45, 0x11u, v16);
    v18 = v48;
    v45[v46] = 0;
    v18(v45);
    return v52 == 0;
  }
  return 0;
}

