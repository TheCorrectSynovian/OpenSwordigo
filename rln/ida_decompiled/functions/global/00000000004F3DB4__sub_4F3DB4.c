/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3DB4
 * Mangled: sub_4F3DB4
 * Demangled: sub_4F3DB4
 *
 * Callers: 6
 *   0x00000000004E8DB4  lua_createtable(lua_State *,int,int)
 *   0x00000000004EA630  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EF720  sub_4EF720
 *   0x00000000004F3230  sub_4F3230
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 4
 *   0x00000000004EE48C  sub_4EE48C
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004F3EC8  sub_4F3EC8
 *
 * Referenced strings: 14
 *   insn=0x00000000004F3DF0 string=0x00000000004F3DF4 ")"
 *   insn=0x00000000004F3DF0 string=0x00000000004EE48C ""
 *   insn=0x00000000004F3DF8 string=0x00000000004F3DFC ")"
 *   insn=0x00000000004F3E48 string=0x00000000004F3E4C "\n"
 *   insn=0x00000000004F3E4C string=0x00000000004F3E50 "_\t"
 *   insn=0x00000000004F3E58 string=0x00000000004F3E5C "K"
 *   insn=0x00000000004F3E58 string=0x00000000004F3E88 ""
 *   insn=0x00000000004F3E5C string=0x00000000004F3E60 ""
 *   insn=0x00000000004F3E60 string=0x00000000004F3E64 "i"
 *   insn=0x00000000004F3E7C string=0x00000000004F3E80 "_"
 *   insn=0x00000000004F3E88 string=0x00000000004F3E8C "\t"
 *   insn=0x00000000004F3E8C string=0x00000000004F3E90 ")!"
 *   insn=0x00000000004F3E90 string=0x00000000004F3E94 ""
 *   insn=0x00000000004F3E94 string=0x00000000004F3E98 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3DB4(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x12
  unsigned __int64 v9; // x10
  __int64 v10; // x9
  _DWORD *v11; // x12
  unsigned __int64 v12; // x13
  __int64 v13; // x8
  _DWORD *v14; // x9

  v6 = sub_4EED74(a1, 0, 0, 64);
  sub_4EE48C(a1, v6, 5);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_WORD *)(v6 + 10) = 255;
  *(_QWORD *)(v6 + 32) = &unk_59A2A0;
  if ( a2 < -1 )
    sub_4EEDE0(a1);
  v7 = sub_4EED74(a1, 0, 0, 16LL * a2);
  v8 = *(int *)(v6 + 56);
  *(_QWORD *)(v6 + 24) = v7;
  if ( (int)v8 < a2 )
  {
    v9 = a2 - v8;
    v10 = v8;
    if ( v9 < 2 )
      goto LABEL_9;
    v10 = (v9 & 0xFFFFFFFFFFFFFFFELL) + v8;
    v11 = (_DWORD *)(v7 + 16 * v8 + 24);
    v12 = v9 & 0xFFFFFFFFFFFFFFFELL;
    do
    {
      *(v11 - 4) = 0;
      *v11 = 0;
      v11 += 8;
      v12 -= 2LL;
    }
    while ( v12 );
    if ( v9 != (v9 & 0xFFFFFFFFFFFFFFFELL) )
    {
LABEL_9:
      v13 = a2 - v10;
      v14 = (_DWORD *)(v7 + 16 * v10 + 8);
      do
      {
        --v13;
        *v14 = 0;
        v14 += 4;
      }
      while ( v13 );
    }
  }
  *(_DWORD *)(v6 + 56) = a2;
  sub_4F3EC8(a1, v6, a3);
  return v6;
}

