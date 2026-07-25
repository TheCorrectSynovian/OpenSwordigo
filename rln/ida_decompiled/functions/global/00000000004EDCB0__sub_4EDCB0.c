/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EDCB0
 * Mangled: sub_4EDCB0
 * Demangled: sub_4EDCB0
 *
 * Callers: 18
 *   0x00000000004E689C  lua_newthread(lua_State *)
 *   0x00000000004E7CE0  lua_tolstring(lua_State *,int,ulong *)
 *   0x00000000004E85A0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000004E8610  lua_pushstring(lua_State *,char const*)
 *   0x00000000004E86A8  lua_pushvfstring(lua_State *,char const*,std::__va_list)
 *   0x00000000004E8734  lua_pushfstring(lua_State *,char const*,...)
 *   0x00000000004E880C  lua_pushcclosure(lua_State *,int (*)(lua_State *),int)
 *   0x00000000004E8DB4  lua_createtable(lua_State *,int,int)
 *   0x00000000004E9C58  lua_gc(lua_State *,int,int)
 *   0x00000000004E9E70  lua_concat(lua_State *,int)
 *   0x00000000004E9F4C  lua_newuserdata(lua_State *,ulong)
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004ECC2C  sub_4ECC2C
 *   0x00000000004F6B64  sub_4F6B64
 *   0x0000000000500970  sub_500970
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501F70  sub_501F70
 *
 * Callees: 1
 *   0x00000000004EDD78  sub_4EDD78
 *
 * Referenced strings: 16
 *   insn=0x00000000004EDCC0 string=0x00000000004EDCC4 "t"
 *   insn=0x00000000004EDCD4 string=0x00000000004EDCD8 "\ty"
 *   insn=0x00000000004EDCD8 string=0x00000000004EDCDC "y"
 *   insn=0x00000000004EDCDC string=0x00000000004EDCE0 "I"
 *   insn=0x00000000004EDCE4 string=0x00000000004EDCE8 ")"
 *   insn=0x00000000004EDCE8 string=0x00000000004EDCEC "u"
 *   insn=0x00000000004EDCF4 string=0x00000000004EDCF8 " "
 *   insn=0x00000000004EDD08 string=0x00000000004EDD0C "L"
 *   insn=0x00000000004EDD14 string=0x00000000004EDD18 "?"
 *   insn=0x00000000004EDD20 string=0x00000000004EDD24 ""
 *   insn=0x00000000004EDD2C string=0x00000000004EDD30 "j"
 *   insn=0x00000000004EDD3C string=0x00000000004EDD40 ""
 *   insn=0x00000000004EDD44 string=0x00000000004EDD48 "}"
 *   insn=0x00000000004EDD48 string=0x00000000004EDD4C ""
 *   insn=0x00000000004EDD4C string=0x00000000004EDD50 "}\t"
 *   insn=0x00000000004EDD58 string=0x00000000004EDD5C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EDCB0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 result; // x0
  unsigned __int64 v5; // x9
  __int64 v6; // x8

  v2 = *(_QWORD *)(a1 + 32);
  if ( 10 * *(_DWORD *)(v2 + 148) )
    v3 = (unsigned int)(10 * *(_DWORD *)(v2 + 148));
  else
    v3 = 0x7FFFFFFFFFFFFFFELL;
  *(_QWORD *)(v2 + 136) += *(_QWORD *)(v2 + 120) - *(_QWORD *)(v2 + 112);
  do
  {
    result = sub_4EDD78(a1);
    if ( !*(_BYTE *)(v2 + 33) )
      break;
    v3 -= result;
  }
  while ( v3 > 0 );
  if ( *(_BYTE *)(v2 + 33) )
  {
    v5 = *(_QWORD *)(v2 + 136);
    if ( v5 > 0x3FF )
    {
      v6 = *(_QWORD *)(v2 + 120);
      *(_QWORD *)(v2 + 136) = v5 - 1024;
    }
    else
    {
      v6 = *(_QWORD *)(v2 + 120) + 1024LL;
    }
  }
  else
  {
    v6 = *(_QWORD *)(v2 + 128) / 0x64uLL * *(int *)(v2 + 144);
  }
  *(_QWORD *)(v2 + 112) = v6;
  return result;
}

