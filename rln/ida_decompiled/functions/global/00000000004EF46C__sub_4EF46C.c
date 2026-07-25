/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EF46C
 * Mangled: sub_4EF46C
 * Demangled: sub_4EF46C
 *
 * Callers: 7
 *   0x00000000004EA630  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501D18  sub_501D18
 *   0x0000000000501F70  sub_501F70
 *   0x0000000000502624  sub_502624
 *
 * Callees: 5
 *   0x00000000001F4100  .strncpy
 *   0x00000000001F7790  .strncat
 *   0x00000000001FD670  .strcat
 *   0x00000000002009D0  .strcspn
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 28
 *   insn=0x00000000004EF494 string=0x00000000004EF498 "a"
 *   insn=0x00000000004EF498 string=0x00000000004EF504 "A"
 *   insn=0x00000000004EF4A4 string=0x00000000004EF4A8 "bO"
 *   insn=0x00000000004EF4A8 string=0x00000000004EF4AC ""
 *   insn=0x00000000004EF4BC string=0x00000000004EF4C0 "\O"
 *   insn=0x00000000004EF4C4 string=0x00000000004EF4CC "hj "
 *   insn=0x00000000004EF4E0 string=0x00000000004EF4E4 "c8"
 *   insn=0x00000000004EF4E4 string=0x00000000001FD670 "0'"
 *   insn=0x00000000004EF4F4 string=0x00000000004EF4F8 "h"
 *   insn=0x00000000004EF4F4 string=0x00000000001F4100 "P'"
 *   insn=0x00000000004EF4FC string=0x00000000004EF500 """
 *   insn=0x00000000004EF504 string=0x0000000000599CDF "\n"
 *   insn=0x00000000004EF50C string=0x00000000004EF510 "0E"
 *   insn=0x00000000004EF510 string=0x00000000004EF514 "I"
 *   insn=0x00000000004EF514 string=0x00000000004EF51C ")"
 *   insn=0x00000000004EF514 string=0x0000000000599CE2 "[string ""
 *   insn=0x00000000004EF528 string=0x00000000004EF52C "H"
 *   insn=0x00000000004EF52C string=0x00000000004EF530 "h"
 *   insn=0x00000000004EF530 string=0x00000000004EF534 "i"
 *   insn=0x00000000004EF538 string=0x00000000004EF53C "H"
 *   insn=0x00000000004EF548 string=0x00000000001F7790 "0'"
 *   insn=0x00000000004EF54C string=0x00000000004EF550 "8O"
 *   insn=0x00000000004EF554 string=0x00000000004EF55C "hj "
 *   insn=0x00000000004EF568 string=0x00000000004EF56C "A8"
 *   insn=0x00000000004EF570 string=0x00000000004EF574 "/O"
 *   insn=0x00000000004EF574 string=0x00000000004EF578 "h"
 *   insn=0x00000000004EF578 string=0x00000000004EF57C "I"
 *   insn=0x00000000004EF580 string=0x00000000004EF584 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EF46C(char *a1, char *a2, size_t a3)
{
  int v4; // w8
  const char *v7; // x20
  size_t v8; // x21
  size_t v9; // x0
  __int64 result; // x0
  size_t v11; // x0
  size_t v12; // x2

  v4 = (unsigned __int8)*a2;
  if ( v4 == 61 )
  {
    result = (__int64)strncpy(a1, a2 + 1, a3);
    a1[a3 - 1] = 0;
  }
  else if ( v4 == 64 )
  {
    v7 = a2 + 1;
    v8 = a3 - 8;
    v9 = strlen(a2 + 1);
    *a1 = 0;
    if ( v9 > v8 )
    {
      v7 += v9 - v8;
      *(_DWORD *)&a1[strlen(a1)] = 3026478;
    }
    return (__int64)strcat(a1, v7);
  }
  else
  {
    v11 = strcspn(a2, "\n\r");
    if ( v11 <= a3 - 17 )
      v12 = v11;
    else
      v12 = a3 - 17;
    strcpy(a1, "[string \"");
    if ( a2[v12] )
    {
      strncat(a1, a2, v12);
      *(_DWORD *)&a1[strlen(a1)] = 3026478;
    }
    else
    {
      strcat(a1, a2);
    }
    result = strlen(a1);
    strcpy(&a1[result], "\"]");
  }
  return result;
}

