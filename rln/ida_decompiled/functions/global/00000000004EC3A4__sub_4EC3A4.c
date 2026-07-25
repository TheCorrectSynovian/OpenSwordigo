/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EC3A4
 * Mangled: sub_4EC3A4
 * Demangled: sub_4EC3A4
 *
 * Callers: 3
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EC700  lua_resume(lua_State *,int)
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EBA24  sub_4EBA24
 *   0x00000000004EBBD4  sub_4EBBD4
 *
 * Referenced strings: 82
 *   insn=0x00000000004EC3C0 string=0x00000000004EC3C4 "T"
 *   insn=0x00000000004EC3D0 string=0x00000000004EC3D4 "h"
 *   insn=0x00000000004EC3D4 string=0x00000000004EC3D8 "h"
 *   insn=0x00000000004EC3D8 string=0x00000000004EC3DC "j"
 *   insn=0x00000000004EC3D8 string=0x00000000004EC3E4 "h"@"
 *   insn=0x00000000004EC3DC string=0x00000000004EC3E0 "?"
 *   insn=0x00000000004EC3E0 string=0x00000000004EC4DC "H"
 *   insn=0x00000000004EC3EC string=0x00000000004EC3F0 "5"
 *   insn=0x00000000004EC3F8 string=0x00000000004EC3FC "j"
 *   insn=0x00000000004EC3FC string=0x00000000004EC400 "H"
 *   insn=0x00000000004EC400 string=0x00000000004EC404 ""
 *   insn=0x00000000004EC404 string=0x00000000004EC408 ")@9H"
 *   insn=0x00000000004EC408 string=0x00000000004EC40C "H"
 *   insn=0x00000000004EC40C string=0x00000000004EC410 "h"
 *   insn=0x00000000004EC40C string=0x00000000004EC4D4 "h"@"
 *   insn=0x00000000004EC410 string=0x00000000004EC414 ""
 *   insn=0x00000000004EC420 string=0x00000000004EC424 "I%@"
 *   insn=0x00000000004EC424 string=0x00000000004EC428 "+"
 *   insn=0x00000000004EC428 string=0x00000000004EC42C "K%"
 *   insn=0x00000000004EC42C string=0x00000000004EC430 ")"
 *   insn=0x00000000004EC430 string=0x00000000004EC434 "y:@"
 *   insn=0x00000000004EC438 string=0x00000000004EC43C "i"
 *   insn=0x00000000004EC440 string=0x00000000004EC444 "h\n@"
 *   insn=0x00000000004EC444 string=0x00000000004EC448 "k"
 *   insn=0x00000000004EC448 string=0x00000000004EC44C "J\t@"
 *   insn=0x00000000004EC458 string=0x00000000004EC45C "h"
 *   insn=0x00000000004EC460 string=0x00000000004EC464 "["
 *   insn=0x00000000004EC468 string=0x00000000004EC46C ","
 *   insn=0x00000000004EC46C string=0x00000000004EC470 "hZ@"
 *   insn=0x00000000004EC46C string=0x00000000004EC490 "h\n@"
 *   insn=0x00000000004EC474 string=0x00000000004EC478 "j"
 *   insn=0x00000000004EC488 string=0x00000000004EC48C "f"
 *   insn=0x00000000004EC490 string=0x00000000004EC494 "i"
 *   insn=0x00000000004EC49C string=0x00000000004EC4A0 ""
 *   insn=0x00000000004EC4A0 string=0x00000000004EC4A4 "(\t"
 *   insn=0x00000000004EC4A8 string=0x00000000004EC4AC " "
 *   insn=0x00000000004EC4AC string=0x00000000004EC4B0 "i"@"
 *   insn=0x00000000004EC4B0 string=0x00000000004EC4B4 "j"
 *   insn=0x00000000004EC4B4 string=0x00000000004EC4B8 "x"
 *   insn=0x00000000004EC4B8 string=0x00000000004EC4BC "("
 *   insn=0x00000000004EC4BC string=0x00000000004EC4C0 "H\t"
 *   insn=0x00000000004EC4C0 string=0x00000000004EC4C4 "h"
 *   insn=0x00000000004EC4C4 string=0x00000000004EC4C8 ")"
 *   insn=0x00000000004EC4C8 string=0x00000000004EC4CC "i\n"
 *   insn=0x00000000004EC4DC string=0x00000000004EC4E0 "h"
 *   insn=0x00000000004EC4E0 string=0x00000000004EC4E4 "K"
 *   insn=0x00000000004EC4E4 string=0x00000000004EC4E8 "I"
 *   insn=0x00000000004EC4E8 string=0x00000000004EC4EC "H!@"
 *   insn=0x00000000004EC4EC string=0x00000000004EC4F0 "k"
 *   insn=0x00000000004EC4F0 string=0x00000000004EC4F4 "J"
 *   insn=0x00000000004EC4F4 string=0x00000000004EC4F8 "j"
 *   insn=0x00000000004EC4F8 string=0x00000000004EC4FC "("
 *   insn=0x00000000004EC4FC string=0x00000000004EC600 "i\n"
 *   insn=0x00000000004EC504 string=0x00000000004EC508 ""
 *   insn=0x00000000004EC50C string=0x00000000004EC510 "o\n@"
 *   insn=0x00000000004EC510 string=0x00000000004EC514 "."
 *   insn=0x00000000004EC520 string=0x00000000004EC524 "0"
 *   insn=0x00000000004EC534 string=0x00000000004EC538 "k"
 *   insn=0x00000000004EC538 string=0x00000000004EC53C "JA"
 *   insn=0x00000000004EC540 string=0x00000000004EC544 "a"
 *   insn=0x00000000004EC544 string=0x00000000004EC548 ")"
 *   insn=0x00000000004EC548 string=0x00000000004EC54C "-"
 *   insn=0x00000000004EC554 string=0x00000000004EC558 "."
 *   insn=0x00000000004EC558 string=0x00000000004EC55C "K"
 *   insn=0x00000000004EC570 string=0x00000000004EC574 "?\n"
 *   insn=0x00000000004EC580 string=0x00000000004EC5E0 "j"
 *   insn=0x00000000004EC5A0 string=0x00000000004EC5A4 "0"
 *   insn=0x00000000004EC5A8 string=0x00000000004EC5AC "k"
 *   insn=0x00000000004EC5B4 string=0x00000000004EC5B8 ")"
 *   insn=0x00000000004EC5B8 string=0x00000000004EC5BC ")"
 *   insn=0x00000000004EC5C0 string=0x00000000004EC5C4 ")A"
 *   insn=0x00000000004EC5C4 string=0x00000000004EC5C8 "\n"
 *   insn=0x00000000004EC5D0 string=0x00000000004EC5D4 "J\t"
 *   insn=0x00000000004EC5D8 string=0x00000000004EC5DC "/"
 *   insn=0x00000000004EC5E4 string=0x00000000004EC5E8 "iA"
 *   insn=0x00000000004EC5E8 string=0x00000000004EC5EC "J"
 *   insn=0x00000000004EC5EC string=0x00000000004EC5F0 "_"
 *   insn=0x00000000004EC5F8 string=0x00000000004EC5FC "l"
 *   insn=0x00000000004EC608 string=0x00000000004EC60C "?"
 *   insn=0x00000000004EC60C string=0x00000000004EC610 "A"
 *   insn=0x00000000004EC610 string=0x00000000004EC638 "&'"
 *   insn=0x00000000004EC638 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EC3A4(__int64 a1, __int64 a2)
{
  __int64 v3; // x10
  __int64 v4; // x21
  char v5; // w8
  int v6; // w9
  void (__fastcall *v7)(__int64, _DWORD *); // x25
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x11
  __int64 v11; // x10
  __int64 v12; // x26
  __int64 v13; // x27
  int v14; // w8
  int v15; // w1
  __int64 v16; // x9
  __int64 v17; // x9
  int v18; // w8
  __int64 v19; // x10
  int v20; // w12
  int v21; // w13
  int v22; // w11
  __int64 v23; // x14
  __int64 v24; // x16
  int v25; // w11
  int v26; // w15
  __int64 v27; // x15
  int v28; // w17
  __int64 v29; // x12
  _BOOL4 v30; // w15
  __int64 v31; // x13
  _DWORD *v32; // x14
  __int64 v33; // x10
  int v34; // w10
  __int64 v35; // x11
  _DWORD v37[30]; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v38; // [xsp+78h] [xbp-58h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (*(_BYTE *)(a1 + 100) & 2) != 0 )
  {
    v4 = a2 - *(_QWORD *)(a1 + 64);
    sub_4EBBD4(a1, 1, -1);
    v3 = *(_QWORD *)(a1 + 40);
    if ( !*(_BYTE *)(**(_QWORD **)(v3 + 8) + 10LL) )
    {
      v5 = *(_BYTE *)(a1 + 100);
      while ( (v5 & 2) != 0 )
      {
        v6 = *(_DWORD *)(v3 + 36);
        *(_DWORD *)(v3 + 36) = v6 - 1;
        if ( !v6 )
          break;
        v7 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 112);
        if ( v7 && *(_BYTE *)(a1 + 101) )
        {
          v8 = *(_QWORD *)(a1 + 16);
          v10 = *(_QWORD *)(a1 + 56);
          v9 = *(_QWORD *)(a1 + 64);
          v11 = *(_QWORD *)(v3 + 16);
          v37[0] = 4;
          v37[10] = -1;
          v12 = v8 - v9;
          v13 = v11 - v9;
          v37[29] = 0;
          if ( v10 - v8 <= 320 )
          {
            v14 = *(_DWORD *)(a1 + 88);
            if ( v14 >= 20 )
              v15 = 2 * v14;
            else
              v15 = v14 + 20;
            sub_4EBA24(a1, v15);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) = *(_QWORD *)(a1 + 16) + 320LL;
          *(_BYTE *)(a1 + 101) = 0;
          v7(a1, v37);
          v16 = *(_QWORD *)(a1 + 64);
          v3 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 101) = 1;
          *(_QWORD *)(v3 + 16) = v16 + v13;
          v5 = *(_BYTE *)(a1 + 100);
          *(_QWORD *)(a1 + 16) = v16 + v12;
        }
      }
    }
    a2 = *(_QWORD *)(a1 + 64) + v4;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
  }
  *(_QWORD *)(a1 + 40) = v3 - 40;
  v17 = *(_QWORD *)(v3 + 8);
  v18 = *(_DWORD *)(v3 + 32);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v3 - 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(v3 - 16);
  if ( v18 )
  {
    v19 = 0;
    v20 = ~v18;
    v21 = v18 + 1;
    v22 = -v18;
    while ( 1 )
    {
      v23 = a2 + v19;
      if ( (unsigned __int64)(a2 + v19) >= *(_QWORD *)(a1 + 16) )
        break;
      v24 = v17 + v19;
      ++v20;
      --v21;
      *(_QWORD *)v24 = *(_QWORD *)v23;
      ++v22;
      v19 += 16;
      *(_DWORD *)(v24 + 8) = *(_DWORD *)(v23 + 8);
      if ( !v22 )
      {
        v17 += v19;
        goto LABEL_35;
      }
    }
    v25 = -v22;
    if ( v25 < 1 )
    {
      v17 += v19;
      goto LABEL_35;
    }
    if ( v20 <= -2 )
      v26 = -2;
    else
      v26 = v20;
    v27 = (unsigned int)(v26 + v21);
    v28 = v27 + 1;
    if ( (unsigned __int64)(v27 + 1) < 2 )
    {
      v17 += v19;
LABEL_33:
      v34 = v25 + 1;
      v35 = v17;
      do
      {
        v17 = v35 + 16;
        --v34;
        *(_DWORD *)(v35 + 8) = 0;
        v35 += 16;
      }
      while ( v34 > 1 );
      goto LABEL_35;
    }
    if ( v20 <= -2 )
      v20 = -2;
    v29 = (unsigned int)(v20 + v21);
    v30 = (v27 & 1) == 0;
    v31 = ((_BYTE)v29 + 1) & 1;
    v25 -= v28 - v30;
    v32 = (_DWORD *)(v17 + v19 + 24);
    v17 += 16 * (v29 - v31) + v19 + 16;
    v33 = v29 + 1 - v31;
    do
    {
      *(v32 - 4) = 0;
      *v32 = 0;
      v32 += 8;
      v33 -= 2;
    }
    while ( v33 );
    if ( v30 )
      goto LABEL_33;
  }
LABEL_35:
  *(_QWORD *)(a1 + 16) = v17;
  return (unsigned int)(v18 + 1);
}

