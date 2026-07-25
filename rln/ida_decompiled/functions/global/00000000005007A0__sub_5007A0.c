/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005007A0
 * Mangled: sub_5007A0
 * Demangled: sub_5007A0
 *
 * Callers: 13
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F0E8C  sub_4F0E8C
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F1F24  sub_4F1F24
 *   0x00000000004F21A8  sub_4F21A8
 *   0x00000000004F2614  sub_4F2614
 *   0x00000000004F2CCC  sub_4F2CCC
 *   0x0000000000500968  sub_500968
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501C4C  sub_501C4C
 *
 * Callees: 6
 *   0x00000000001FA100  .iscntrl
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004EF46C  sub_4EF46C
 *
 * Referenced strings: 43
 *   insn=0x00000000005007B4 string=0x00000000005007B8 "W"
 *   insn=0x00000000005007CC string=0x00000000005007D0 "h*@"
 *   insn=0x00000000005007DC string=0x00000000005007E0 "#"
 *   insn=0x00000000005007E0 string=0x00000000005007E4 "`"
 *   insn=0x00000000005007E4 string=0x00000000005007E8 "c"
 *   insn=0x00000000005007EC string=0x0000000000599A32 "%s:%d: %s"
 *   insn=0x0000000000500800 string=0x0000000000500804 "v\t"
 *   insn=0x0000000000500804 string=0x0000000000500808 "u"
 *   insn=0x0000000000500804 string=0x0000000000500930 "`"
 *   insn=0x0000000000500810 string=0x0000000000500814 "("
 *   insn=0x0000000000500814 string=0x0000000000500818 "x&@"
 *   insn=0x0000000000500818 string=0x000000000050081C ""
 *   insn=0x000000000050081C string=0x0000000000500820 "\t"
 *   insn=0x0000000000500820 string=0x0000000000500824 "?"
 *   insn=0x0000000000500824 string=0x0000000000500828 "i"
 *   insn=0x000000000050082C string=0x0000000000500830 "_"
 *   insn=0x0000000000500834 string=0x0000000000500838 "c"
 *   insn=0x0000000000500838 string=0x000000000050083C "h*@"
 *   insn=0x0000000000500838 string=0x0000000000500884 "V"
 *   insn=0x0000000000500848 string=0x000000000050084C ""
 *   insn=0x000000000050084C string=0x0000000000500850 "`"
 *   insn=0x0000000000500850 string=0x0000000000500854 "c"
 *   insn=0x000000000050085C string=0x0000000000500860 "!"
 *   insn=0x000000000050085C string=0x000000000059B30B "lexical element too long"
 *   insn=0x000000000050086C string=0x0000000000500870 "`"
 *   insn=0x000000000050087C string=0x0000000000500880 "`"
 *   insn=0x0000000000500888 string=0x000000000050088C "!"
 *   insn=0x000000000050088C string=0x0000000000500890 "T"
 *   insn=0x0000000000500894 string=0x00000000005008FC "@"
 *   insn=0x00000000005008A4 string=0x00000000001FA100 "0'"
 *   insn=0x00000000005008A8 string=0x000000000059B2F5 "char(%d)"
 *   insn=0x00000000005008AC string=0x00000000005008B0 ""
 *   insn=0x00000000005008AC string=0x000000000059859D "%c"
 *   insn=0x00000000005008B0 string=0x00000000005008B4 ")u"
 *   insn=0x00000000005008B8 string=0x00000000005008BC "!"
 *   insn=0x00000000005008D4 string=0x00000000005008D8 ""
 *   insn=0x00000000005008D8 string=0x000000000050090C "\t"
 *   insn=0x00000000005008DC string=0x00000000005008E4 ""
 *   insn=0x00000000005008E4 string=0x00000000005008E8 "! "
 *   insn=0x00000000005008E8 string=0x00000000005008EC ""
 *   insn=0x0000000000500904 string=0x0000000000500908 "\t"
 *   insn=0x0000000000500910 string=0x0000000000500914 "h&@"
 *   insn=0x000000000050091C string=0x000000000059B2FE "%s near '%s'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_5007A0(__int64 a1, const char *a2, int a3)
{
  const char *v6; // x20
  _QWORD *v7; // x21
  __int64 *v8; // x24
  unsigned __int64 v9; // x2
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x0
  __int64 v13; // x22
  __int64 v14; // x0
  const char *v15; // x3
  __int64 v16; // x0
  const char **v17; // x8
  char v18[80]; // [xsp+8h] [xbp-D8h] BYREF
  char v19[80]; // [xsp+58h] [xbp-88h] BYREF
  __int64 v20; // [xsp+A8h] [xbp-38h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_4EF46C(v18, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
  v6 = (const char *)sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v18, *(_DWORD *)(a1 + 4), a2);
  if ( !a3 )
LABEL_19:
    sub_4EB814(*(_QWORD *)(a1 + 56), 3);
  v7 = *(_QWORD **)(a1 + 56);
  if ( (unsigned int)(a3 - 284) > 2 )
  {
    if ( a3 <= 256 )
    {
      if ( iscntrl(a3) )
        v14 = sub_4EF3D4(v7, "char(%d)", (unsigned int)a3);
      else
        v14 = sub_4EF3D4(v7, "%c", (unsigned int)a3);
      v15 = (const char *)v14;
      goto LABEL_18;
    }
    v17 = (const char **)(&off_6D8C98 + a3 - 257);
  }
  else
  {
    v8 = *(__int64 **)(a1 + 72);
    v10 = v8[1];
    v9 = v8[2];
    v11 = v10 + 1;
    if ( v10 + 1 <= v9 )
    {
      v16 = *v8;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 56);
      if ( v9 >= 0x7FFFFFFFFFFFFFFELL )
      {
        sub_4EF46C(v19, (char *)(*(_QWORD *)(a1 + 80) + 24LL), 0x50u);
        sub_4EF3D4(*(_QWORD **)(a1 + 56), "%s:%d: %s", v19, *(_DWORD *)(a1 + 4), "lexical element too long");
        sub_4EB814(*(_QWORD *)(a1 + 56), 3);
      }
      v13 = 2 * v9;
      if ( 2 * v9 == -2 )
        sub_4EEDE0(v12);
      v16 = sub_4EED74(v12, *v8, v9, 2 * v9);
      v10 = v8[1];
      *v8 = v16;
      v8[2] = v13;
      v11 = v10 + 1;
    }
    v8[1] = v11;
    *(_BYTE *)(v16 + v10) = 0;
    v17 = *(const char ***)(a1 + 72);
  }
  v15 = *v17;
LABEL_18:
  sub_4EF3D4(v7, "%s near '%s'", v6, v15);
  goto LABEL_19;
}

