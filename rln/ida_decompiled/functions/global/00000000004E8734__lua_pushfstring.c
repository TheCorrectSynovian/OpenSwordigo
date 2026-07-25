/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8734
 * Mangled: _Z15lua_pushfstringP9lua_StatePKcz
 * Demangled: lua_pushfstring(lua_State *,char const*,...)
 *
 * Callers: 1
 *   0x00000000002035B0  lua_pushfstring(lua_State *,char const*,...)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004EEFD8  sub_4EEFD8
 *
 * Referenced strings: 7
 *   insn=0x00000000004E8764 string=0x00000000004E8768 "U"
 *   insn=0x00000000004E8780 string=0x00000000004E8784 "\t!G"
 *   insn=0x00000000004E8788 string=0x00000000004E878C "c"
 *   insn=0x00000000004E8790 string=0x00000000004E8794 "G"
 *   insn=0x00000000004E87B0 string=0x00000000004E87B4 ""
 *   insn=0x00000000004E87BC string=0x00000000004E87C0 ""
 *   insn=0x00000000004E8808 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 lua_pushfstring(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va1; // [xsp+C0h] [xbp-80h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-58h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 112LL) )
    sub_4EDCB0(a1);
  va_start(va, a2);
  va_copy(va1, va);
  return sub_4EEFD8(a1, a2, va1);
}

