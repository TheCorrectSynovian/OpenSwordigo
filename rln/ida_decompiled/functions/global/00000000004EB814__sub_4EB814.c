/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB814
 * Mangled: sub_4EB814
 * Demangled: sub_4EB814
 *
 * Callers: 12
 *   0x00000000004EB6DC  sub_4EB6DC
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004EEC70  sub_4EEC70
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004F4F30  sub_4F4F30
 *   0x00000000004F5064  sub_4F5064
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501D18  sub_501D18
 *   0x0000000000501F70  sub_501F70
 *   0x0000000000502624  sub_502624
 *
 * Callees: 6
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FA7C0  .exit
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x00000000004ED5F4  sub_4ED5F4
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004F356C  sub_4F356C
 *
 * Referenced strings: 52
 *   insn=0x00000000004EB834 string=0x00000000004EB838 "h"
 *   insn=0x00000000004EB838 string=0x00000000004EB83C "t*"
 *   insn=0x00000000004EB83C string=0x00000000004EB840 "M@"
 *   insn=0x00000000004EB840 string=0x00000000004EB844 "h\n"
 *   insn=0x00000000004EB844 string=0x00000000004EB848 "h*@"
 *   insn=0x00000000004EB84C string=0x00000000004EB850 "h"
 *   insn=0x00000000004EB854 string=0x00000000004EB858 "a"
 *   insn=0x00000000004EB858 string=0x00000000004EB85C "f"
 *   insn=0x00000000004EB85C string=0x00000000004EB860 "v"
 *   insn=0x00000000004EB868 string=0x00000000004EB86C "C"
 *   insn=0x00000000004EB86C string=0x00000000004EB8B4 "h\n@"
 *   insn=0x00000000004EB874 string=0x00000000004EB8C8 "a"
 *   insn=0x00000000004EB878 string=0x00000000004EB87C "a"
 *   insn=0x00000000004EB87C string=0x00000000004EB880 "a"
 *   insn=0x00000000004EB87C string=0x00000000004EB8E8 "h^"
 *   insn=0x00000000004EB880 string=0x00000000004EB888 """
 *   insn=0x00000000004EB880 string=0x0000000000599A3C "not enough memory"
 *   insn=0x00000000004EB898 string=0x00000000001F9460 "0'"
 *   insn=0x00000000004EB8A4 string=0x00000000004EB8A8 ""
 *   insn=0x00000000004EB8A8 string=0x00000000004EB8AC "!0A"
 *   insn=0x00000000004EB8B0 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000004EB8B4 string=0x00000000004EB8B8 "\t"
 *   insn=0x00000000004EB8BC string=0x00000000004EB8C0 ""
 *   insn=0x00000000004EB8C0 string=0x00000000004EB8C4 ""
 *   insn=0x00000000004EB8C8 string=0x0000000000599A4E "error in error handling"
 *   insn=0x00000000004EB8D4 string=0x00000000004EB8D8 "%"
 *   insn=0x00000000004EB8E8 string=0x00000000004EB8EC "j"
 *   insn=0x00000000004EB8EC string=0x00000000004EB8F0 ","
 *   insn=0x00000000004EB8FC string=0x00000000004EB900 "i\n"
 *   insn=0x00000000004EB900 string=0x00000000004EB904 "j"
 *   insn=0x00000000004EB904 string=0x00000000004EB908 "k"
 *   insn=0x00000000004EB90C string=0x00000000004EB910 "i"
 *   insn=0x00000000004EB910 string=0x00000000004EB914 "t*@"
 *   insn=0x00000000004EB918 string=0x00000000004EB920 ")"
 *   insn=0x00000000004EB920 string=0x00000000004EB924 ")"
 *   insn=0x00000000004EB924 string=0x00000000004EB928 ")}\n"
 *   insn=0x00000000004EB92C string=0x00000000004EB930 "?"
 *   insn=0x00000000004EB930 string=0x00000000004EB934 "L"
 *   insn=0x00000000004EB934 string=0x00000000004EB938 "\t"
 *   insn=0x00000000004EB94C string=0x00000000004EB950 "\t"
 *   insn=0x00000000004EB950 string=0x00000000004EB954 "h"
 *   insn=0x00000000004EB954 string=0x00000000004EB958 "\t"
 *   insn=0x00000000004EB958 string=0x00000000004EB960 "\t"
 *   insn=0x00000000004EB960 string=0x00000000004EB964 ""
 *   insn=0x00000000004EB964 string=0x00000000004EB968 "i"
 *   insn=0x00000000004EB968 string=0x00000000004EB96C "\t"
 *   insn=0x00000000004EB96C string=0x00000000004EB970 ""
 *   insn=0x00000000004EB970 string=0x00000000004EB974 "i^"
 *   insn=0x00000000004EB974 string=0x00000000004EB978 "h"
 *   insn=0x00000000004EB97C string=0x00000000004EB980 "h"
 *   insn=0x00000000004EB984 string=0x00000000004EB988 "M@"
 *   insn=0x00000000004EB994 string=0x00000000001FA7C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_4EB814(__int64 a1, int a2)
{
  __int64 v3; // x8
  _QWORD *v4; // x21
  __int64 v6; // x8
  _QWORD *v7; // x8
  __int64 v8; // x22
  char *v9; // x1
  size_t v10; // x2
  _QWORD *exception; // x0
  __int64 v12; // x8
  int v13; // w8
  __int64 v14; // x8
  __int16 v15; // w10
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x8

  v4 = (_QWORD *)(a1 + 168);
  v3 = *(_QWORD *)(a1 + 168);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 12) = a2;
    exception = __cxa_allocate_exception(8u);
    *exception = *v4;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'lua_longjmp *, 0);
  }
  v6 = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(a1 + 10) = a2;
  if ( !*(_QWORD *)(v6 + 152) )
LABEL_16:
    exit(1);
  v7 = *(_QWORD **)(a1 + 80);
  *(_QWORD *)(a1 + 40) = v7;
  *(_QWORD *)(a1 + 24) = *v7;
  sub_4ED5F4(a1);
  v8 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)(a2 - 2) < 2 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)v8 = *(_QWORD *)(v12 - 16);
    v13 = *(_DWORD *)(v12 - 8);
  }
  else
  {
    if ( a2 == 5 )
    {
      v9 = "error in error handling";
      v10 = 23;
    }
    else
    {
      if ( a2 != 4 )
      {
LABEL_12:
        v14 = *(int *)(a1 + 92);
        v15 = *(_WORD *)(a1 + 98);
        *(_QWORD *)(a1 + 16) = v8 + 16;
        *(_WORD *)(a1 + 96) = v15;
        *(_BYTE *)(a1 + 101) = 1;
        if ( (int)v14 >= 20001 )
        {
          v16 = *(_QWORD *)(a1 + 80);
          if ( (int)(-858993459 * ((unsigned __int64)(*(_QWORD *)(a1 + 40) - v16) >> 3)) <= 19998 )
          {
            v17 = sub_4EED74(a1, *(_QWORD *)(a1 + 80), 40 * v14, 800000);
            v18 = *(_QWORD *)(a1 + 40) - v16;
            *(_QWORD *)(a1 + 72) = v17 + 799960;
            *(_QWORD *)(a1 + 80) = v17;
            *(_DWORD *)(a1 + 92) = 20000;
            *(_QWORD *)(a1 + 40) = v17 + v18;
          }
        }
        *v4 = 0;
        v4[1] = 0;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 152LL))(a1);
        goto LABEL_16;
      }
      v9 = "not enough memory";
      v10 = 17;
    }
    *(_QWORD *)v8 = sub_4F356C(a1, v9, v10);
    v13 = 4;
  }
  *(_DWORD *)(v8 + 8) = v13;
  goto LABEL_12;
}

