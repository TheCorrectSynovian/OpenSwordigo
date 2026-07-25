/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EF598
 * Mangled: sub_4EF598
 * Demangled: sub_4EF598
 *
 * Callers: 1
 *   0x00000000004ECC2C  sub_4ECC2C
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203230  .strlen
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004EF720  sub_4EF720
 *   0x00000000004EF820  sub_4EF820
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F356C  sub_4F356C
 *   0x000000000050072C  sub_50072C
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500968  sub_500968
 *   0x00000000005009E0  sub_5009E0
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 27
 *   insn=0x00000000004EF5AC string=0x00000000004EF5B0 "V"
 *   insn=0x00000000004EF5FC string=0x00000000004EF600 "H"
 *   insn=0x00000000004EF60C string=0x00000000004EF610 "\t"
 *   insn=0x00000000004EF618 string=0x00000000004EF61C "\t"
 *   insn=0x00000000004EF61C string=0x00000000004EF620 ")"
 *   insn=0x00000000004EF620 string=0x00000000004EF624 "*="
 *   insn=0x00000000004EF624 string=0x00000000004EF628 "_%"
 *   insn=0x00000000004EF628 string=0x00000000004EF62C "\t"
 *   insn=0x00000000004EF630 string=0x00000000004EF634 "A"
 *   insn=0x00000000004EF634 string=0x000000000059A00A "chunk has too many syntax levels"
 *   insn=0x00000000004EF640 string=0x00000000004EF644 "WD"
 *   insn=0x00000000004EF64C string=0x00000000004EF650 "5"
 *   insn=0x00000000004EF654 string=0x00000000004EF658 "\t"
 *   insn=0x00000000004EF658 string=0x00000000004EF65C "?m"
 *   insn=0x00000000004EF664 string=0x00000000004EF668 "?"
 *   insn=0x00000000004EF680 string=0x00000000004EF684 "a"
 *   insn=0x00000000004EF690 string=0x00000000004EF694 "\t)A9\t="
 *   insn=0x00000000004EF694 string=0x00000000004EF698 "\t="
 *   insn=0x00000000004EF6A8 string=0x00000000004EF6AC "i"
 *   insn=0x00000000004EF6AC string=0x00000000004EF6B0 ")"
 *   insn=0x00000000004EF6B0 string=0x00000000004EF6B4 "i"
 *   insn=0x00000000004EF6C4 string=0x00000000004EF6C8 "A"
 *   insn=0x00000000004EF6C8 string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004EF6CC string=0x00000000004EF6D0 "!"
 *   insn=0x00000000004EF6D4 string=0x00000000004EF6D8 "?"
 *   insn=0x00000000004EF6E8 string=0x00000000004EF6EC "M"
 *   insn=0x00000000004EF71C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EF598(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  size_t v7; // x0
  __int64 v8; // x0
  unsigned int v9; // w10
  int v10; // w8
  int v11; // w19
  _QWORD *v12; // x19
  const char *v13; // x0
  __int64 v14; // x0
  _BYTE v16[16]; // [xsp+0h] [xbp-2F0h] BYREF
  int v17; // [xsp+10h] [xbp-2E0h]
  __int64 v18; // [xsp+30h] [xbp-2C0h]
  __int64 v19; // [xsp+38h] [xbp-2B8h]
  __int64 v20; // [xsp+48h] [xbp-2A8h]
  _QWORD v21[76]; // [xsp+60h] [xbp-290h] BYREF

  v21[75] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v20 = a3;
  v7 = strlen(a4);
  v8 = sub_4F356C(a1, a4, v7);
  sub_5009E0(a1, v16, a2, v8);
  sub_4EF720(v16, v21);
  *(_BYTE *)(v21[0] + 114LL) = 2;
  sub_500A74(v16);
  v9 = (unsigned __int16)++*(_WORD *)(v19 + 96);
  if ( v9 >= 0xC9 )
    sub_5007A0(v16, "chunk has too many syntax levels", 0);
  while ( 1 )
  {
    v10 = v17;
    if ( (unsigned int)(v17 - 260) <= 0x1B && ((1 << (v17 - 4)) & 0x8010007) != 0 )
      break;
    v11 = sub_4EFACC(v16);
    if ( v17 == 59 )
      sub_500A74(v16);
    *(_DWORD *)(v18 + 60) = *(unsigned __int8 *)(v18 + 74);
    if ( v11 )
    {
      v10 = v17;
      break;
    }
  }
  v12 = (_QWORD *)v19;
  --*(_WORD *)(v19 + 96);
  if ( v10 != 287 )
  {
    v13 = (const char *)sub_50072C((int)v16, 287);
    v14 = sub_4EF3D4(v12, "'%s' expected", v13);
    sub_500968(v16, v14);
  }
  sub_4EF820(v16);
  return v21[0];
}

