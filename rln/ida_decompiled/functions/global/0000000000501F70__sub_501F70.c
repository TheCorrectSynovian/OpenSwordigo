/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000501F70
 * Mangled: sub_501F70
 * Demangled: sub_501F70
 *
 * Callers: 1
 *   0x0000000000500AC8  sub_500AC8
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA100  .iscntrl
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004EF46C  sub_4EF46C
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F4ADC  sub_4F4ADC
 *   0x00000000004F8650  sub_4F8650
 *   0x0000000000501C4C  sub_501C4C
 *   0x0000000000501D18  sub_501D18
 *
 * Referenced strings: 159
 *   insn=0x0000000000501F8C string=0x0000000000501F90 "H"
 *   insn=0x0000000000501F94 string=0x0000000000501F98 ""
 *   insn=0x0000000000501FA0 string=0x0000000000501FA4 "J"
 *   insn=0x0000000000501FBC string=0x0000000000501FC0 "\t"
 *   insn=0x0000000000501FC0 string=0x0000000000501FC4 "?"
 *   insn=0x0000000000501FC8 string=0x0000000000501FCC "_"
 *   insn=0x0000000000501FE0 string=0x0000000000501FE4 """
 *   insn=0x0000000000501FF0 string=0x0000000000599A32 "%s:%d: %s"
 *   insn=0x0000000000501FF4 string=0x0000000000501FF8 "!"
 *   insn=0x0000000000501FF4 string=0x000000000059B30B "lexical element too long"
 *   insn=0x000000000050202C string=0x0000000000502030 "V"
 *   insn=0x0000000000502034 string=0x0000000000502038 "a"
 *   insn=0x0000000000502038 string=0x000000000050203C "i"
 *   insn=0x0000000000502048 string=0x000000000050204C "J"
 *   insn=0x0000000000502058 string=0x000000000050205C "\t"
 *   insn=0x0000000000502068 string=0x000000000050206C ""
 *   insn=0x000000000050206C string=0x0000000000502070 "\t"
 *   insn=0x0000000000502070 string=0x0000000000502074 "\t"
 *   insn=0x0000000000502078 string=0x000000000050207C ""
 *   insn=0x0000000000502078 string=0x0000000000502090 "p"
 *   insn=0x000000000050207C string=0x0000000000502080 "\t"
 *   insn=0x0000000000502080 string=0x0000000000502084 "\t"
 *   insn=0x0000000000502098 string=0x000000000050209C "`"
 *   insn=0x00000000005020A0 string=0x00000000005020A4 "a"
 *   insn=0x00000000005020B0 string=0x000000000059B35B "unfinished long string"
 *   insn=0x00000000005020B4 string=0x00000000005020B8 "m"
 *   insn=0x00000000005020B4 string=0x000000000059B372 "unfinished long comment"
 *   insn=0x00000000005020B8 string=0x00000000005020BC ")"
 *   insn=0x00000000005020C8 string=0x000000000059B2FE "%s near '%s'"
 *   insn=0x00000000005020D0 string=0x00000000005020D4 "X"
 *   insn=0x00000000005020D4 string=0x00000000005020D8 ";"
 *   insn=0x00000000005020F0 string=0x00000000005020F4 "_3"
 *   insn=0x00000000005020F8 string=0x00000000005020FC "_7"
 *   insn=0x00000000005020F8 string=0x0000000000502128 "_"
 *   insn=0x0000000000502100 string=0x0000000000502104 "_o"
 *   insn=0x0000000000502104 string=0x0000000000502108 "`"
 *   insn=0x0000000000502108 string=0x000000000050210C "_w"
 *   insn=0x000000000050210C string=0x0000000000502110 "!"
 *   insn=0x000000000050212C string=0x0000000000502130 "_+"
 *   insn=0x0000000000502138 string=0x000000000050213C "H"
 *   insn=0x000000000050213C string=0x0000000000502140 "\t"
 *   insn=0x0000000000502140 string=0x0000000000502144 "?"
 *   insn=0x0000000000502148 string=0x000000000050214C "H"
 *   insn=0x0000000000502148 string=0x0000000000502244 "@"
 *   insn=0x000000000050214C string=0x0000000000502154 "_"
 *   insn=0x0000000000502154 string=0x0000000000502158 ")"
 *   insn=0x000000000050219C string=0x00000000005021A0 "\"
 *   insn=0x00000000005021A4 string=0x00000000005021A8 "a"
 *   insn=0x00000000005021A8 string=0x00000000005021AC ""
 *   insn=0x00000000005021A8 string=0x0000000000502314 "A"
 *   insn=0x00000000005021B0 string=0x0000000000502320 "H@"
 *   insn=0x00000000005021C8 string=0x00000000005021CC "H"
 *   insn=0x00000000005021CC string=0x00000000005021D0 "\t"
 *   insn=0x00000000005021D0 string=0x00000000005021D4 "?"
 *   insn=0x00000000005021D4 string=0x00000000005021D8 "\t"
 *   insn=0x00000000005021D8 string=0x00000000005021DC "H"
 *   insn=0x00000000005021D8 string=0x0000000000502358 "@"
 *   insn=0x00000000005021DC string=0x00000000005021E4 "_"
 *   insn=0x00000000005021E4 string=0x00000000005021E8 ")"
 *   insn=0x0000000000502214 string=0x0000000000502218 "o"
 *   insn=0x0000000000502220 string=0x0000000000502224 "|"
 *   insn=0x000000000050222C string=0x0000000000502230 "\"
 *   insn=0x0000000000502234 string=0x0000000000502238 "!"
 *   insn=0x0000000000502238 string=0x00000000005023BC "A"
 *   insn=0x0000000000502240 string=0x00000000005023C8 "H@"
 *   insn=0x0000000000502244 string=0x0000000000502248 ":"
 *   insn=0x0000000000502248 string=0x0000000000502330 "I"
 *   insn=0x0000000000502270 string=0x0000000000502274 "X"
 *   insn=0x000000000050227C string=0x000000000059B2EF "<eof>"
 *   insn=0x0000000000502288 string=0x000000000050228C "c"
 *   insn=0x0000000000502298 string=0x000000000050229C "("
 *   insn=0x000000000050229C string=0x00000000005022A0 "\t"
 *   insn=0x00000000005022A0 string=0x00000000005022A4 "?"
 *   insn=0x00000000005022A4 string=0x00000000005022A8 "I"
 *   insn=0x00000000005022A8 string=0x00000000005022AC "H"
 *   insn=0x00000000005022A8 string=0x0000000000502350 " "
 *   insn=0x00000000005022AC string=0x00000000005022B4 "_"
 *   insn=0x00000000005022B4 string=0x00000000005022B8 ")"
 *   insn=0x00000000005022C8 string=0x00000000005022CC "h"
 *   insn=0x00000000005022E4 string=0x00000000005022E8 ";"
 *   insn=0x00000000005022F0 string=0x00000000005022F4 "H"
 *   insn=0x00000000005022FC string=0x0000000000502300 "\"
 *   insn=0x0000000000502308 string=0x0000000000502360 "!"
 *   insn=0x0000000000502310 string=0x000000000050236C "(@"
 *   insn=0x0000000000502320 string=0x0000000000502324 "@"
 *   insn=0x0000000000502324 string=0x0000000000502328 "\"
 *   insn=0x0000000000502328 string=0x000000000050232C "\t"
 *   insn=0x0000000000502338 string=0x000000000050233C "D"
 *   insn=0x0000000000502348 string=0x000000000050234C "i"
 *   insn=0x0000000000502350 string=0x0000000000502354 "\n"
 *   insn=0x0000000000502354 string=0x000000000050237C ")"
 *   insn=0x000000000050235C string=0x00000000005023D8 "I"
 *   insn=0x000000000050236C string=0x0000000000502370 " "
 *   insn=0x0000000000502370 string=0x0000000000502374 "<"
 *   insn=0x0000000000502374 string=0x0000000000502378 "\t"
 *   insn=0x0000000000502384 string=0x0000000000502388 ""
 *   insn=0x0000000000502388 string=0x000000000050238C "\t"
 *   insn=0x000000000050238C string=0x0000000000502390 "\t"
 *   insn=0x0000000000502394 string=0x0000000000502398 ""
 *   insn=0x0000000000502398 string=0x000000000050239C "\t"
 *   insn=0x000000000050239C string=0x00000000005023A0 "\t"
 *   insn=0x00000000005023A0 string=0x00000000005023A4 ""
 *   insn=0x00000000005023A8 string=0x00000000005023AC "Q"
 *   insn=0x00000000005023B4 string=0x00000000005023B8 "N"
 *   insn=0x00000000005023C0 string=0x00000000005023C4 "l"
 *   insn=0x00000000005023C8 string=0x00000000005023CC "@"
 *   insn=0x00000000005023CC string=0x00000000005023D0 "\"
 *   insn=0x00000000005023D0 string=0x00000000005023D4 "\t"
 *   insn=0x00000000005023E0 string=0x00000000005023E4 ""
 *   insn=0x00000000005023E4 string=0x00000000005023E8 "\t"
 *   insn=0x00000000005023E8 string=0x00000000005023EC "\t"
 *   insn=0x00000000005023EC string=0x00000000005023F0 ""
 *   insn=0x00000000005023F0 string=0x00000000005023F4 ""
 *   insn=0x00000000005023F4 string=0x00000000005023F8 "\t"
 *   insn=0x00000000005023F8 string=0x00000000005023FC "\t"
 *   insn=0x0000000000502404 string=0x0000000000502408 "U"
 *   insn=0x0000000000502438 string=0x000000000059B38A "nesting of [[...]] is deprecated"
 *   insn=0x0000000000502450 string=0x0000000000502454 "`"
 *   insn=0x0000000000502454 string=0x0000000000502458 "*"
 *   insn=0x0000000000502458 string=0x00000000001FA100 "0'"
 *   insn=0x000000000050245C string=0x000000000059B2F5 "char(%d)"
 *   insn=0x0000000000502460 string=0x000000000059859D "%c"
 *   insn=0x0000000000502464 string=0x0000000000502468 ""
 *   insn=0x0000000000502468 string=0x000000000050246C ")u"
 *   insn=0x000000000050246C string=0x0000000000502470 "!"
 *   insn=0x0000000000502470 string=0x0000000000502474 "b"
 *   insn=0x000000000050249C string=0x00000000005024A0 "\t"
 *   insn=0x00000000005024A0 string=0x00000000005024A4 "?"
 *   insn=0x00000000005024A8 string=0x00000000005024AC "H"
 *   insn=0x00000000005024AC string=0x00000000005024B4 "_"
 *   insn=0x00000000005024B4 string=0x00000000005024B8 "I"
 *   insn=0x00000000005024DC string=0x00000000005024E0 "!"
 *   insn=0x0000000000502500 string=0x0000000000502504 "V"
 *   insn=0x000000000050250C string=0x0000000000502510 "4"
 *   insn=0x0000000000502518 string=0x000000000050251C ""
 *   insn=0x0000000000502534 string=0x0000000000502538 "\t"
 *   insn=0x0000000000502544 string=0x0000000000502548 ""
 *   insn=0x0000000000502548 string=0x000000000050254C "\t"
 *   insn=0x000000000050254C string=0x0000000000502550 "\t"
 *   insn=0x0000000000502550 string=0x0000000000502554 ""
 *   insn=0x0000000000502554 string=0x0000000000502558 ""
 *   insn=0x0000000000502554 string=0x0000000000502574 "7"
 *   insn=0x0000000000502558 string=0x000000000050255C "\t"
 *   insn=0x000000000050255C string=0x0000000000502560 "\t"
 *   insn=0x0000000000502588 string=0x000000000050258C "+y"
 *   insn=0x000000000050258C string=0x0000000000502590 "\n!@"
 *   insn=0x0000000000502594 string=0x0000000000502598 "A"
 *   insn=0x00000000005025B4 string=0x00000000005025B8 "I"
 *   insn=0x00000000005025B8 string=0x00000000005025BC "@"
 *   insn=0x00000000005025BC string=0x00000000005025C0 "H"
 *   insn=0x00000000005025C0 string=0x00000000005025E8 "t"
 *   insn=0x00000000005025C4 string=0x00000000005025C8 ""
 *   insn=0x00000000005025C8 string=0x00000000005025CC ""
 *   insn=0x00000000005025D0 string=0x00000000005025D4 "\t!G"
 *   insn=0x00000000005025D8 string=0x00000000005025DC "c"
 *   insn=0x00000000005025EC string=0x00000000005025F0 ""
 *   insn=0x00000000005025F8 string=0x00000000005025FC "!"
 *   insn=0x00000000005025FC string=0x0000000000502620 ","
 *   insn=0x0000000000502620 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_501F70(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v5; // x23
  int v6; // w24
  unsigned __int64 v8; // x2
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x22
  _QWORD *v14; // x0
  unsigned __int8 *v16; // x8
  int v17; // w0
  const char *v18; // x27
  int v19; // w26
  __int64 *v20; // x26
  unsigned __int64 v21; // x2
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x0
  __int64 v25; // x28
  __int64 *v26; // x26
  int v27; // w25
  unsigned __int64 v28; // x2
  __int64 v29; // x8
  __int64 v30; // x9
  __int64 v31; // x0
  __int64 v32; // x28
  __int64 v33; // x0
  __int64 *v34; // x25
  unsigned __int64 v35; // x2
  __int64 v36; // x8
  __int64 v37; // x9
  __int64 v38; // x0
  __int64 v39; // x28
  __int64 v40; // x0
  __int64 v41; // x0
  _QWORD *v42; // x0
  unsigned __int8 *v44; // x8
  _QWORD *v45; // x0
  unsigned __int8 *v47; // x8
  _QWORD *v48; // x28
  __int64 *v49; // x23
  int v50; // w24
  unsigned __int64 v51; // x2
  __int64 v52; // x8
  __int64 v53; // x9
  __int64 v54; // x0
  __int64 v55; // x22
  __int64 v56; // x0
  _QWORD *v57; // x0
  unsigned __int8 *v59; // x8
  __int64 result; // x0
  int v61; // w9
  __int64 v62; // x21
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x20
  char v66[80]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v67; // [xsp+58h] [xbp-58h]

  v67 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(__int64 **)(a1 + 72);
  v6 = *(_DWORD *)a1;
  v9 = v5[1];
  v8 = v5[2];
  v10 = v9 + 1;
  if ( v9 + 1 <= v8 )
  {
    v11 = *v5;
  }
  else
  {
    if ( v8 > 0x7FFFFFFFFFFFFFFDLL )
    {
      sub_4EF46C(v66, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
      sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v66, *(_DWORD *)(a1 + 4), "lexical element too long");
      sub_4EB814(*(_QWORD *)(a1 + 56), 3);
    }
    v12 = *(_QWORD *)(a1 + 56);
    v13 = 2 * v8;
    if ( 2 * v8 == -2 )
      sub_4EEDE0(v12);
    v11 = sub_4EED74(v12, *v5, v8, 2 * v8);
    v9 = v5[1];
    *v5 = v11;
    v5[2] = v13;
    v10 = v9 + 1;
  }
  v5[1] = v10;
  *(_BYTE *)(v11 + v9) = v6;
  v14 = *(_QWORD **)(a1 + 64);
  if ( (*v14)-- )
  {
    v16 = (unsigned __int8 *)v14[1];
    v14[1] = v16 + 1;
    v17 = *v16;
  }
  else
  {
    v17 = sub_4F8650((__int64)v14);
  }
  *(_DWORD *)a1 = v17;
  if ( v17 == 13 || v17 == 10 )
    sub_501C4C(a1);
  if ( a2 )
    v18 = "unfinished long string";
  else
    v18 = "unfinished long comment";
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = *(_DWORD *)a1;
        if ( *(int *)a1 > 12 )
          break;
        if ( v19 == -1 )
        {
          sub_4EF46C(v66, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
          sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v66, *(_DWORD *)(a1 + 4), v18);
          sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s near '%s'");
          goto LABEL_17;
        }
        if ( v19 == 10 )
        {
LABEL_26:
          v20 = *(__int64 **)(a1 + 72);
          v22 = v20[1];
          v21 = v20[2];
          v23 = v22 + 1;
          if ( v22 + 1 <= v21 )
          {
            v33 = *v20;
          }
          else
          {
            if ( v21 > 0x7FFFFFFFFFFFFFFDLL )
            {
              sub_4EF46C(v66, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
              sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v66, *(_DWORD *)(a1 + 4), "lexical element too long");
              sub_4EB814(*(_QWORD *)(a1 + 56), 3);
            }
            v24 = *(_QWORD *)(a1 + 56);
            v25 = 2 * v21;
            if ( 2 * v21 == -2 )
              sub_4EEDE0(v24);
            v33 = sub_4EED74(v24, *v20, v21, 2 * v21);
            v22 = v20[1];
            *v20 = v33;
            v20[2] = v25;
            v23 = v22 + 1;
          }
          v20[1] = v23;
          *(_BYTE *)(v33 + v22) = 10;
          sub_501C4C(a1);
          if ( !a2 )
            *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL) = 0;
        }
        else
        {
LABEL_39:
          if ( a2 )
          {
            v34 = *(__int64 **)(a1 + 72);
            v36 = v34[1];
            v35 = v34[2];
            v37 = v36 + 1;
            if ( v36 + 1 <= v35 )
            {
              v40 = *v34;
            }
            else
            {
              if ( v35 > 0x7FFFFFFFFFFFFFFDLL )
              {
                sub_4EF46C(v66, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
                sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v66, *(_DWORD *)(a1 + 4), "lexical element too long");
                sub_4EB814(*(_QWORD *)(a1 + 56), 3);
              }
              v38 = *(_QWORD *)(a1 + 56);
              v39 = 2 * v35;
              if ( 2 * v35 == -2 )
                sub_4EEDE0(v38);
              v40 = sub_4EED74(v38, *v34, v35, 2 * v35);
              v36 = v34[1];
              *v34 = v40;
              v34[2] = v39;
              v37 = v36 + 1;
            }
            v34[1] = v37;
            *(_BYTE *)(v40 + v36) = v19;
          }
          v42 = *(_QWORD **)(a1 + 64);
          if ( (*v42)-- )
          {
            v44 = (unsigned __int8 *)v42[1];
            v42[1] = v44 + 1;
            *(_DWORD *)a1 = *v44;
          }
          else
          {
            *(_DWORD *)a1 = sub_4F8650((__int64)v42);
          }
        }
      }
      if ( v19 == 13 )
        goto LABEL_26;
      if ( v19 != 91 )
        break;
      if ( (unsigned int)sub_501D18((int *)a1) == a3 )
      {
        v26 = *(__int64 **)(a1 + 72);
        v27 = *(_DWORD *)a1;
        v29 = v26[1];
        v28 = v26[2];
        v30 = v29 + 1;
        if ( v29 + 1 <= v28 )
        {
          v41 = *v26;
        }
        else
        {
          if ( v28 > 0x7FFFFFFFFFFFFFFDLL )
          {
            sub_4EF46C(v66, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
            sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v66, *(_DWORD *)(a1 + 4), "lexical element too long");
            sub_4EB814(*(_QWORD *)(a1 + 56), 3);
          }
          v31 = *(_QWORD *)(a1 + 56);
          v32 = 2 * v28;
          if ( 2 * v28 == -2 )
            sub_4EEDE0(v31);
          v41 = sub_4EED74(v31, *v26, v28, 2 * v28);
          v29 = v26[1];
          *v26 = v41;
          v26[2] = v32;
          v30 = v29 + 1;
        }
        v26[1] = v30;
        *(_BYTE *)(v41 + v29) = v27;
        v45 = *(_QWORD **)(a1 + 64);
        if ( (*v45)-- )
        {
          v47 = (unsigned __int8 *)v45[1];
          v45[1] = v47 + 1;
          *(_DWORD *)a1 = *v47;
          if ( !a3 )
            goto LABEL_60;
        }
        else
        {
          *(_DWORD *)a1 = sub_4F8650((__int64)v45);
          if ( !a3 )
          {
LABEL_60:
            sub_4EF46C(v66, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
            sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v66, *(_DWORD *)(a1 + 4), "nesting of [[...]] is deprecated");
            v48 = *(_QWORD **)(a1 + 56);
            if ( iscntrl(91) )
              sub_4EF3D4(v48, "char(%d)", 91);
            else
              sub_4EF3D4(v48, "%c", 91);
            sub_4EF3D4(v48, "%s near '%s'");
LABEL_17:
            sub_4EB814(*(_QWORD *)(a1 + 56), 3);
          }
        }
      }
    }
    if ( v19 != 93 )
      goto LABEL_39;
  }
  while ( (unsigned int)sub_501D18((int *)a1) != a3 );
  v49 = *(__int64 **)(a1 + 72);
  v50 = *(_DWORD *)a1;
  v52 = v49[1];
  v51 = v49[2];
  v53 = v52 + 1;
  if ( v52 + 1 <= v51 )
  {
    v56 = *v49;
  }
  else
  {
    if ( v51 > 0x7FFFFFFFFFFFFFFDLL )
    {
      sub_4EF46C(v66, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
      sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v66, *(_DWORD *)(a1 + 4), "lexical element too long");
      sub_4EB814(*(_QWORD *)(a1 + 56), 3);
    }
    v54 = *(_QWORD *)(a1 + 56);
    v55 = 2 * v51;
    if ( 2 * v51 == -2 )
      sub_4EEDE0(v54);
    v56 = sub_4EED74(v54, *v49, v51, 2 * v51);
    v52 = v49[1];
    *v49 = v56;
    v49[2] = v55;
    v53 = v52 + 1;
  }
  v49[1] = v53;
  *(_BYTE *)(v56 + v52) = v50;
  v57 = *(_QWORD **)(a1 + 64);
  if ( (*v57)-- )
  {
    v59 = (unsigned __int8 *)v57[1];
    v57[1] = v59 + 1;
    result = *v59;
    *(_DWORD *)a1 = result;
    if ( !a2 )
      return result;
  }
  else
  {
    result = sub_4F8650((__int64)v57);
    *(_DWORD *)a1 = result;
    if ( !a2 )
      return result;
  }
  v61 = a3 + 2;
  v62 = *(_QWORD *)(a1 + 56);
  v63 = sub_4F356C(v62, (char *)(**(_QWORD **)(a1 + 72) + v61), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL) - 2 * v61);
  v64 = *(_QWORD *)(a1 + 48);
  v65 = v63;
  result = sub_4F4ADC(v62, *(_QWORD *)(v64 + 8), v63);
  if ( !*(_DWORD *)(result + 8) )
  {
    *(_DWORD *)result = 1;
    *(_DWORD *)(result + 8) = 1;
    if ( *(_QWORD *)(*(_QWORD *)(v62 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(v62 + 32) + 112LL) )
      result = sub_4EDCB0(v62);
  }
  *a2 = v65;
  return result;
}

