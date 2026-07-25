/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEFD8
 * Mangled: sub_4EEFD8
 * Demangled: sub_4EEFD8
 *
 * Callers: 4
 *   0x00000000004E86A8  lua_pushvfstring(lua_State *,char const*,std::__va_list)
 *   0x00000000004E8734  lua_pushfstring(lua_State *,char const*,...)
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EF3D4  sub_4EF3D4
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA030  .strchr
 *   0x0000000000203230  .strlen
 *   0x0000000000203240  .sprintf
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F67EC  sub_4F67EC
 *
 * Referenced strings: 112
 *   insn=0x00000000004EEFF4 string=0x00000000004EEFF8 "Y"
 *   insn=0x00000000004EEFF8 string=0x00000000004EEFFC "("
 *   insn=0x00000000004EF00C string=0x00000000004EF010 "u\n@"
 *   insn=0x00000000004EF014 string=0x00000000004EF018 "!"
 *   insn=0x00000000004EF01C string=0x00000000004EF020 "S"
 *   insn=0x00000000004EF02C string=0x00000000004EF030 "i"
 *   insn=0x00000000004EF030 string=0x00000000004EF034 "h\n@"
 *   insn=0x00000000004EF034 string=0x00000000004EF038 ")"
 *   insn=0x00000000004EF038 string=0x00000000004EF03C "?A"
 *   insn=0x00000000004EF040 string=0x00000000004EF054 "A"
 *   insn=0x00000000004EF04C string=0x00000000004EF050 "h\n@"
 *   insn=0x00000000004EF04C string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004EF05C string=0x00000000004EF060 "{\n"
 *   insn=0x00000000004EF064 string=0x00000000001FA030 "0'"
 *   insn=0x00000000004EF070 string=0x00000000004EF074 "U"
 *   insn=0x00000000004EF088 string=0x00000000004EF08C "("
 *   insn=0x00000000004EF08C string=0x00000000004EF090 "."
 *   insn=0x00000000004EF090 string=0x00000000004EF148 ""
 *   insn=0x00000000004EF094 string=0x00000000004EF098 "("
 *   insn=0x00000000004EF098 string=0x00000000004EF09C "M"
 *   insn=0x00000000004EF09C string=0x00000000004EF1D0 ""
 *   insn=0x00000000004EF0A0 string=0x00000000004EF0A4 "("
 *   insn=0x00000000004EF0A4 string=0x00000000004EF0A8 "b"
 *   insn=0x00000000004EF0A8 string=0x00000000004EF230 ""
 *   insn=0x00000000004EF0AC string=0x00000000004EF0B0 "("
 *   insn=0x00000000004EF0B0 string=0x00000000004EF0B4 "l"
 *   insn=0x00000000004EF0B8 string=0x00000000004EF0BC "("
 *   insn=0x00000000004EF0BC string=0x00000000004EF0C0 "x"
 *   insn=0x00000000004EF0CC string=0x00000000004EF0D0 "'"
 *   insn=0x00000000004EF0D0 string=0x00000000004EF0D4 "`"
 *   insn=0x00000000004EF0D4 string=0x00000000004EF0D8 "|"
 *   insn=0x00000000004EF0D8 string=0x00000000004EF0DC "h"
 *   insn=0x00000000004EF0DC string=0x00000000004EF0E0 "x\n@"
 *   insn=0x00000000004EF0E0 string=0x00000000004EF0E4 ""
 *   insn=0x00000000004EF0EC string=0x00000000004EF100 "C"
 *   insn=0x00000000004EF0F8 string=0x00000000004EF0FC "x\n@"
 *   insn=0x00000000004EF100 string=0x00000000004EF104 "h\n"
 *   insn=0x00000000004EF108 string=0x00000000004EF10C "\t"
 *   insn=0x00000000004EF10C string=0x00000000004EF110 "?A"
 *   insn=0x00000000004EF110 string=0x00000000004EF114 "("
 *   insn=0x00000000004EF118 string=0x00000000004EF11C ")"
 *   insn=0x00000000004EF11C string=0x00000000004EF120 " "
 *   insn=0x00000000004EF120 string=0x00000000004EF174 ""
 *   insn=0x00000000004EF128 string=0x00000000004EF12C "\t!"
 *   insn=0x00000000004EF12C string=0x00000000004EF130 "?"
 *   insn=0x00000000004EF13C string=0x00000000004EF140 "\t!"
 *   insn=0x00000000004EF150 string=0x00000000004EF154 "X"
 *   insn=0x00000000004EF154 string=0x00000000004EF2B4 "x\n@"
 *   insn=0x00000000004EF160 string=0x0000000000590C08 "%"
 *   insn=0x00000000004EF168 string=0x00000000004EF16C "! 0"
 *   insn=0x00000000004EF16C string=0x00000000004EF170 ""
 *   insn=0x00000000004EF188 string=0x00000000004EF18C ")P"
 *   insn=0x00000000004EF1A4 string=0x00000000004EF1A8 "L"
 *   insn=0x00000000004EF1A8 string=0x00000000004EF2D8 "i"
 *   insn=0x00000000004EF1B0 string=0x00000000004EF1B4 "\t!"
 *   insn=0x00000000004EF1B4 string=0x00000000004EF1B8 "?"
 *   insn=0x00000000004EF1C4 string=0x00000000004EF1C8 "\t!"
 *   insn=0x00000000004EF1D0 string=0x00000000004EF1D4 "I"
 *   insn=0x00000000004EF1D4 string=0x00000000004EF1D8 "{\n@"
 *   insn=0x00000000004EF1D4 string=0x0000000000599CD8 "(null)"
 *   insn=0x00000000004EF1D8 string=0x00000000004EF1DC ")a3"
 *   insn=0x00000000004EF1E0 string=0x00000000004EF1E4 "8"
 *   insn=0x00000000004EF1FC string=0x00000000004EF200 "`"
 *   insn=0x00000000004EF200 string=0x00000000004EF204 "|"
 *   insn=0x00000000004EF204 string=0x00000000004EF208 "4"
 *   insn=0x00000000004EF210 string=0x00000000004EF214 "\tA"
 *   insn=0x00000000004EF214 string=0x00000000004EF218 "?"
 *   insn=0x00000000004EF21C string=0x00000000004EF220 ""
 *   insn=0x00000000004EF224 string=0x00000000004EF228 "\t!"
 *   insn=0x00000000004EF234 string=0x00000000004EF238 ""
 *   insn=0x00000000004EF238 string=0x00000000004EF23C "'"
 *   insn=0x00000000004EF244 string=0x00000000004EF248 "\t!"
 *   insn=0x00000000004EF248 string=0x00000000004EF24C "?"
 *   insn=0x00000000004EF258 string=0x00000000004EF25C "\t!"
 *   insn=0x00000000004EF280 string=0x00000000004EF284 "\t!"
 *   insn=0x00000000004EF284 string=0x00000000004EF288 "?"
 *   insn=0x00000000004EF28C string=0x00000000004EF290 "M"
 *   insn=0x00000000004EF294 string=0x00000000004EF298 "\t!"
 *   insn=0x00000000004EF2A0 string=0x00000000004EF2A4 "A"
 *   insn=0x00000000004EF2A4 string=0x000000000059A92D "%p"
 *   insn=0x00000000004EF2A8 string=0x00000000004EF2AC "!"
 *   insn=0x00000000004EF2D8 string=0x00000000004EF2DC "h\n@"
 *   insn=0x00000000004EF2DC string=0x00000000004EF2E0 ")"
 *   insn=0x00000000004EF2E0 string=0x00000000004EF2E4 "?A"
 *   insn=0x00000000004EF2F0 string=0x00000000004EF2F4 "1"
 *   insn=0x00000000004EF2F4 string=0x00000000004EF2F8 "h\n@"
 *   insn=0x00000000004EF2FC string=0x00000000004EF300 "A"
 *   insn=0x00000000004EF308 string=0x00000000004EF30C "{\n"
 *   insn=0x00000000004EF30C string=0x00000000004EF310 "Z"
 *   insn=0x00000000004EF310 string=0x00000000004EF314 "G+"
 *   insn=0x00000000004EF318 string=0x00000000004EF31C "V"
 *   insn=0x00000000004EF338 string=0x00000000004EF33C "`"
 *   insn=0x00000000004EF33C string=0x00000000004EF340 "h"
 *   insn=0x00000000004EF340 string=0x00000000004EF344 "i"
 *   insn=0x00000000004EF344 string=0x00000000004EF348 "h\n@"
 *   insn=0x00000000004EF348 string=0x00000000004EF34C ")"
 *   insn=0x00000000004EF34C string=0x00000000004EF350 "?A"
 *   insn=0x00000000004EF354 string=0x00000000004EF368 "i"
 *   insn=0x00000000004EF360 string=0x00000000004EF364 "h\n@"
 *   insn=0x00000000004EF368 string=0x00000000004EF36C "A"
 *   insn=0x00000000004EF36C string=0x00000000004EF370 "h\n"
 *   insn=0x00000000004EF370 string=0x00000000004EF374 "A"
 *   insn=0x00000000004EF374 string=0x00000000004EF378 ""
 *   insn=0x00000000004EF378 string=0x00000000004EF37C ""
 *   insn=0x00000000004EF388 string=0x00000000004EF38C "h\n@"
 *   insn=0x00000000004EF38C string=0x00000000004EF390 ""
 *   insn=0x00000000004EF390 string=0x00000000004EF394 "h\n"
 *   insn=0x00000000004EF394 string=0x00000000004EF398 ""
 *   insn=0x00000000004EF398 string=0x00000000004EF39C ")"
 *   insn=0x00000000004EF3A0 string=0x00000000004EF3A4 "?"
 *   insn=0x00000000004EF3A4 string=0x00000000004EF3A8 "A"
 *   insn=0x00000000004EF3D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EEFD8(_QWORD *a1, char *a2, __int64 a3)
{
  __int64 v5; // x21
  __int64 v7; // x8
  __int64 v8; // x27
  int v9; // w26
  char *v10; // x22
  const void **v11; // x8
  const void **v12; // x8
  const void **v13; // x8
  const void **v14; // x8
  const void **v15; // x8
  __int64 v16; // x24
  int v17; // w8
  __int64 v18; // x8
  int v19; // w8
  size_t v20; // x2
  int v21; // w0
  char *v22; // x1
  __int64 v23; // x8
  char *v24; // x8
  __int64 v25; // x27
  char *v26; // x24
  size_t v27; // x0
  __int64 v28; // x8
  const void *v29; // x8
  __int64 v30; // x8
  int v31; // s0
  __int64 v32; // x8
  __int64 v33; // x24
  size_t v34; // x0
  __int64 v35; // x8
  size_t v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  __int64 v39; // x8
  __int64 v40; // x8
  char v42; // [xsp+0h] [xbp-80h] BYREF
  char v43; // [xsp+1h] [xbp-7Fh]
  char v44; // [xsp+2h] [xbp-7Eh]
  __int64 v45; // [xsp+28h] [xbp-58h]

  v45 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = a1[2];
  *(_QWORD *)v5 = sub_4F356C((int)a1, "", 0);
  *(_DWORD *)(v5 + 8) = 4;
  v7 = a1[2];
  if ( a1[7] - v7 <= 16 )
  {
    sub_4EBBB8((__int64)a1, 1);
    v7 = a1[2];
  }
  v8 = v7 + 16;
  a1[2] = v7 + 16;
  v9 = 1;
  v10 = strchr(a2, 37);
  if ( v10 )
  {
    while ( 2 )
    {
      *(_QWORD *)v8 = sub_4F356C((int)a1, a2, v10 - a2);
      *(_DWORD *)(v8 + 8) = 4;
      v16 = a1[2];
      if ( a1[7] - v16 <= 16 )
      {
        sub_4EBBB8((__int64)a1, 1);
        v16 = a1[2];
      }
      a1[2] = v16 + 16;
      v17 = v10[1];
      switch ( v10[1] )
      {
        case 'c':
          v18 = *(int *)(a3 + 24);
          if ( (v18 & 0x80000000) != 0 && (*(_DWORD *)(a3 + 24) = v18 + 8, (int)v18 + 8 <= 0) )
          {
            v11 = (const void **)(*(_QWORD *)(a3 + 8) + v18);
          }
          else
          {
            v11 = *(const void ***)a3;
            *(_QWORD *)a3 += 8LL;
          }
          v19 = *(_DWORD *)v11;
          v43 = 0;
          v42 = v19;
          goto LABEL_40;
        case 'd':
          v30 = *(int *)(a3 + 24);
          if ( (v30 & 0x80000000) != 0 && (*(_DWORD *)(a3 + 24) = v30 + 8, (int)v30 + 8 <= 0) )
          {
            v14 = (const void **)(*(_QWORD *)(a3 + 8) + v30);
          }
          else
          {
            v14 = *(const void ***)a3;
            *(_QWORD *)a3 += 8LL;
          }
          v31 = *(_DWORD *)v14;
          *(_DWORD *)(v16 + 24) = 3;
          *(double *)(v16 + 16) = (double)v31;
          goto LABEL_41;
        case 'e':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'q':
        case 'r':
          goto LABEL_19;
        case 'f':
          v28 = *(int *)(a3 + 28);
          if ( (v28 & 0x80000000) != 0 && (*(_DWORD *)(a3 + 28) = v28 + 16, (int)v28 + 16 <= 0) )
          {
            v13 = (const void **)(*(_QWORD *)(a3 + 16) + v28);
          }
          else
          {
            v13 = *(const void ***)a3;
            *(_QWORD *)a3 += 8LL;
          }
          v29 = *v13;
          *(_DWORD *)(v16 + 24) = 3;
          *(_QWORD *)(v16 + 16) = v29;
          goto LABEL_41;
        case 'p':
          v32 = *(int *)(a3 + 24);
          if ( (v32 & 0x80000000) != 0 && (*(_DWORD *)(a3 + 24) = v32 + 8, (int)v32 + 8 <= 0) )
          {
            v15 = (const void **)(*(_QWORD *)(a3 + 8) + v32);
          }
          else
          {
            v15 = *(const void ***)a3;
            *(_QWORD *)a3 += 8LL;
          }
          sprintf(&v42, "%p", *v15);
LABEL_40:
          v33 = a1[2];
          v34 = strlen(&v42);
          *(_QWORD *)v33 = sub_4F356C((int)a1, &v42, v34);
          *(_DWORD *)(v33 + 8) = 4;
          goto LABEL_41;
        case 's':
          v23 = *(int *)(a3 + 24);
          if ( (v23 & 0x80000000) != 0 && (*(_DWORD *)(a3 + 24) = v23 + 8, (int)v23 + 8 <= 0) )
          {
            v12 = (const void **)(*(_QWORD *)(a3 + 8) + v23);
          }
          else
          {
            v12 = *(const void ***)a3;
            *(_QWORD *)a3 += 8LL;
          }
          v24 = (char *)*v12;
          v25 = a1[2];
          if ( v24 )
            v26 = v24;
          else
            v26 = "(null)";
          v27 = strlen(v26);
          *(_QWORD *)v25 = sub_4F356C((int)a1, v26, v27);
          *(_DWORD *)(v25 + 8) = 4;
          goto LABEL_41;
        default:
          if ( v17 == 37 )
          {
            v20 = 1;
            v21 = (int)a1;
            v22 = "%";
          }
          else
          {
LABEL_19:
            v42 = 37;
            v43 = v17;
            v44 = 0;
            v20 = strlen(&v42);
            v22 = &v42;
            v21 = (int)a1;
          }
          *(_QWORD *)(v16 + 16) = sub_4F356C(v21, v22, v20);
          *(_DWORD *)(v16 + 24) = 4;
LABEL_41:
          v35 = a1[2];
          if ( a1[7] - v35 <= 16 )
          {
            sub_4EBBB8((__int64)a1, 1);
            v35 = a1[2];
          }
          a2 = v10 + 2;
          v8 = v35 + 16;
          a1[2] = v35 + 16;
          v9 += 2;
          v10 = strchr(v10 + 2, 37);
          if ( !v10 )
            break;
          continue;
      }
      break;
    }
  }
  v36 = strlen(a2);
  *(_QWORD *)v8 = sub_4F356C((int)a1, a2, v36);
  *(_DWORD *)(v8 + 8) = 4;
  v37 = a1[2];
  if ( a1[7] - v37 <= 16 )
  {
    sub_4EBBB8((__int64)a1, 1);
    v37 = a1[2];
  }
  v38 = a1[3];
  v39 = v37 + 16;
  a1[2] = v39;
  sub_4F67EC(a1, (unsigned int)(v9 + 1), (unsigned int)((unsigned __int64)(v39 - v38) >> 4) - 1);
  v40 = a1[2] - 16LL * v9;
  a1[2] = v40;
  return *(_QWORD *)(v40 - 16) + 24LL;
}

