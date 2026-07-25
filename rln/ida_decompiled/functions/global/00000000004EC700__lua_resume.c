/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EC700
 * Mangled: _Z10lua_resumeP9lua_Statei
 * Demangled: lua_resume(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FB600  lua_resume(lua_State *,int)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000004EBA24  sub_4EBA24
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EC3A4  sub_4EC3A4
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Referenced strings: 75
 *   insn=0x00000000004EC710 string=0x00000000004EC714 "U"
 *   insn=0x00000000004EC720 string=0x00000000004EC724 "h*@9"
 *   insn=0x00000000004EC728 string=0x00000000004EC73C "i"
 *   insn=0x00000000004EC730 string=0x00000000004EC734 "i"
 *   insn=0x00000000004EC730 string=0x00000000004EC760 "i"
 *   insn=0x00000000004EC738 string=0x00000000004EC74C "4"
 *   insn=0x00000000004EC73C string=0x00000000004EC740 "j*@"
 *   insn=0x00000000004EC740 string=0x00000000004EC744 "?"
 *   insn=0x00000000004EC74C string=0x00000000004EC750 "a"
 *   insn=0x00000000004EC750 string=0x0000000000599A77 "cannot resume non-suspended coroutine"
 *   insn=0x00000000004EC758 string=0x00000000004EC75C "\t"
 *   insn=0x00000000004EC760 string=0x00000000004EC764 "?!"
 *   insn=0x00000000004EC768 string=0x00000000004EC76C "h"
 *   insn=0x00000000004EC768 string=0x00000000004EC7C0 ")"
 *   insn=0x00000000004EC76C string=0x00000000004EC770 "a"
 *   insn=0x00000000004EC770 string=0x0000000000599A66 "C stack overflow"
 *   insn=0x00000000004EC780 string=0x00000000004EC784 "t\n"
 *   insn=0x00000000004EC784 string=0x00000000004EC788 "y"
 *   insn=0x00000000004EC794 string=0x00000000004EC798 "h"
 *   insn=0x00000000004EC798 string=0x00000000004EC79C "i\n@"
 *   insn=0x00000000004EC79C string=0x00000000004EC7A0 ""
 *   insn=0x00000000004EC7A4 string=0x00000000004EC7A8 ","
 *   insn=0x00000000004EC7A8 string=0x00000000004EC7AC "hZ@"
 *   insn=0x00000000004EC7A8 string=0x00000000004EC82C "h\n@"
 *   insn=0x00000000004EC7B0 string=0x00000000004EC7B4 "k"
 *   insn=0x00000000004EC7C0 string=0x00000000004EC7C4 "j\n@"
 *   insn=0x00000000004EC7C4 string=0x00000000004EC7C8 "i"
 *   insn=0x00000000004EC7C8 string=0x00000000004EC7CC "i"
 *   insn=0x00000000004EC7D0 string=0x00000000004EC7D4 "iV@"
 *   insn=0x00000000004EC7D8 string=0x00000000004EC7DC "A"
 *   insn=0x00000000004EC7E0 string=0x00000000004EC7E4 "kV"
 *   insn=0x00000000004EC7E8 string=0x00000000004EC7EC "h"
 *   insn=0x00000000004EC7E8 string=0x00000000004EC840 "!@"
 *   insn=0x00000000004EC7F0 string=0x00000000004EC7F4 "\t"
 *   insn=0x00000000004EC7F4 string=0x00000000004EC7F8 ")"
 *   insn=0x00000000004EC7F8 string=0x00000000004EC7FC "))@9"
 *   insn=0x00000000004EC800 string=0x00000000004EC858 ""
 *   insn=0x00000000004EC80C string=0x00000000004EC810 "h"
 *   insn=0x00000000004EC80C string=0x00000000004EC860 "h"
 *   insn=0x00000000004EC810 string=0x00000000004EC814 "\t@"
 *   insn=0x00000000004EC814 string=0x00000000004EC818 "h\n"
 *   insn=0x00000000004EC830 string=0x00000000004EC834 "A"
 *   insn=0x00000000004EC834 string=0x00000000004EC838 "h\n"
 *   insn=0x00000000004EC838 string=0x00000000004EC83C "8"
 *   insn=0x00000000004EC848 string=0x00000000004EC84C "*"
 *   insn=0x00000000004EC858 string=0x00000000004EC85C "h"
 *   insn=0x00000000004EC860 string=0x00000000004EC864 "i*@"
 *   insn=0x00000000004EC864 string=0x00000000004EC868 ""
 *   insn=0x00000000004EC86C string=0x00000000004EC870 ""
 *   insn=0x00000000004EC884 string=0x00000000004EC888 "hV"
 *   insn=0x00000000004EC890 string=0x00000000004EC894 "v\n@"
 *   insn=0x00000000004EC890 string=0x00000000004EC8C8 "t*@9"
 *   insn=0x00000000004EC89C string=0x00000000004EC8A0 "t*"
 *   insn=0x00000000004EC8A0 string=0x00000000004EC8A4 "c"
 *   insn=0x00000000004EC8AC string=0x00000000004EC8E0 "a"
 *   insn=0x00000000004EC8B0 string=0x00000000004EC8B4 "a"
 *   insn=0x00000000004EC8B4 string=0x00000000004EC8B8 "a"
 *   insn=0x00000000004EC8B4 string=0x00000000004EC900 "h"
 *   insn=0x00000000004EC8B8 string=0x00000000004EC8C0 """
 *   insn=0x00000000004EC8B8 string=0x0000000000599A3C "not enough memory"
 *   insn=0x00000000004EC8C0 string=0x00000000004EC8C4 "\n"
 *   insn=0x00000000004EC8CC string=0x00000000004EC910 "h"
 *   insn=0x00000000004EC8D8 string=0x00000000004EC8DC ""
 *   insn=0x00000000004EC8E0 string=0x0000000000599A4E "error in error handling"
 *   insn=0x00000000004EC904 string=0x00000000004EC908 "i\n"
 *   insn=0x00000000004EC908 string=0x00000000004EC90C "\t\t"
 *   insn=0x00000000004EC910 string=0x00000000004EC914 ""
 *   insn=0x00000000004EC914 string=0x00000000004EC918 "h"
 *   insn=0x00000000004EC928 string=0x00000000004EC944 "c&"
 *   insn=0x00000000004EC944 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004EC948 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004EC94C string=0x00000000004EC950 "h"
 *   insn=0x00000000004EC950 string=0x00000000004EC954 ""
 *   insn=0x00000000004EC950 string=0x00000000004EC95C "C"
 *   insn=0x00000000004EC95C string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_resume(__int64 a1, int a2)
{
  int v3; // w8
  __int64 *v4; // x9
  __int64 v5; // x20
  char *v6; // x1
  size_t v7; // x2
  unsigned int v8; // w9
  int v9; // w8
  int v10; // w1
  __int16 v11; // w9
  __int64 v12; // x10
  __int64 v13; // x1
  __int64 v14; // x8
  unsigned int v15; // w20
  __int64 v16; // x22
  char *v17; // x1
  size_t v18; // x2
  int v19; // w8
  __int64 v20; // x8
  __int64 v22; // [xsp+8h] [xbp-38h] BYREF
  unsigned int v23; // [xsp+14h] [xbp-2Ch]
  __int64 v24; // [xsp+18h] [xbp-28h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(unsigned __int8 *)(a1 + 10);
  if ( !*(_BYTE *)(a1 + 10) )
  {
    v4 = *(__int64 **)(a1 + 40);
    if ( v4 != *(__int64 **)(a1 + 80) )
      goto LABEL_5;
LABEL_6:
    v8 = *(unsigned __int16 *)(a1 + 96);
    if ( v8 >= 0xC8 )
    {
      v6 = "C stack overflow";
      v7 = 16;
      v5 = **(_QWORD **)(a1 + 40);
      goto LABEL_8;
    }
    v11 = v8 + 1;
    v12 = *(_QWORD *)(a1 + 16);
    *(_WORD *)(a1 + 96) = v11;
    *(_WORD *)(a1 + 98) = v11;
    v23 = 0;
    v13 = v12 - 16LL * a2;
    v22 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 168) = &v22;
    if ( v3 )
    {
      v14 = *(_QWORD *)(a1 + 40);
      *(_BYTE *)(a1 + 10) = 0;
      if ( *(_BYTE *)(**(_QWORD **)(v14 + 8) + 10LL) )
      {
        if ( (unsigned int)sub_4EC3A4(a1, v13) )
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
      }
      else
      {
        *(_QWORD *)(a1 + 24) = *(_QWORD *)v14;
      }
    }
    else if ( (unsigned int)sub_4EBCF4(a1, v13 - 16, -1) )
    {
      goto LABEL_22;
    }
    sub_4F6B64(a1, -858993459 * (unsigned int)((*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 80)) >> 3));
LABEL_22:
    *(_QWORD *)(a1 + 168) = v22;
    v15 = v23;
    if ( !v23 )
    {
      v15 = *(unsigned __int8 *)(a1 + 10);
LABEL_33:
      --*(_WORD *)(a1 + 96);
      return v15;
    }
    v16 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 10) = v23;
    if ( v15 - 2 < 2 )
    {
      v19 = *(_DWORD *)(v16 - 8);
      *(_QWORD *)v16 = *(_QWORD *)(v16 - 16);
    }
    else
    {
      if ( v15 == 5 )
      {
        v17 = "error in error handling";
        v18 = 23;
      }
      else
      {
        if ( v15 != 4 )
        {
LABEL_32:
          v20 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 16) = v16 + 16;
          *(_QWORD *)(v20 + 16) = v16 + 16;
          goto LABEL_33;
        }
        v17 = "not enough memory";
        v18 = 17;
      }
      *(_QWORD *)v16 = sub_4F356C(a1, v17, v18);
      v19 = 4;
    }
    *(_DWORD *)(v16 + 8) = v19;
    goto LABEL_32;
  }
  if ( v3 == 1 )
    goto LABEL_6;
  v4 = *(__int64 **)(a1 + 40);
LABEL_5:
  v5 = *v4;
  v6 = "cannot resume non-suspended coroutine";
  v7 = 37;
LABEL_8:
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)v5 = sub_4F356C(a1, v6, v7);
  *(_DWORD *)(v5 + 8) = 4;
  if ( (__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 16)) <= 16 )
  {
    v9 = *(_DWORD *)(a1 + 88);
    if ( v9 < 1 )
      v10 = v9 + 1;
    else
      v10 = 2 * v9;
    sub_4EBA24(a1, v10);
  }
  v15 = 2;
  *(_QWORD *)(a1 + 16) += 16LL;
  return v15;
}

