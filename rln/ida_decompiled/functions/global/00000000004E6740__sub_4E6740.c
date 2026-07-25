/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6740
 * Mangled: sub_4E6740
 * Demangled: sub_4E6740
 *
 * Callers: 2
 *   0x00000000004E673C  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *   0x00000000004EA408  lua_getlocal(lua_State *,lua_Debug const*,int)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004E6740 string=0x00000000004E6744 ")"
 *   insn=0x00000000004E6744 string=0x00000000004E6748 "\t"
 *   insn=0x00000000004E6748 string=0x00000000004E674C ")@"
 *   insn=0x00000000004E674C string=0x00000000004E6750 "\t\t"
 *   insn=0x00000000004E6750 string=0x00000000004E6754 "@"
 *   insn=0x00000000004E6754 string=0x00000000004E6758 "A"
 *   insn=0x00000000004E6758 string=0x00000000004E675C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4E6740(__int64 result, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(result + 16);
  *(_QWORD *)v2 = *(_QWORD *)a2;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(result + 16) += 16LL;
  return result;
}

