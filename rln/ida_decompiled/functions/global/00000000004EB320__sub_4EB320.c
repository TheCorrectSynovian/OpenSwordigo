/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB320
 * Mangled: sub_4EB320
 * Demangled: sub_4EB320
 *
 * Callers: 19
 *   0x00000000004E6BC0  lua_replace(lua_State *,int)
 *   0x00000000004EB03C  sub_4EB03C
 *   0x00000000004EB474  sub_4EB474
 *   0x00000000004EB578  sub_4EB578
 *   0x00000000004EB684  sub_4EB684
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004EC964  lua_yield(lua_State *,int)
 *   0x00000000004EEC70  sub_4EEC70
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004F3794  sub_4F3794
 *   0x00000000004F3A60  sub_4F3A60
 *   0x00000000004F3EC8  sub_4F3EC8
 *   0x00000000004F4320  sub_4F4320
 *   0x00000000004F43C0  sub_4F43C0
 *   0x00000000004F6020  sub_4F6020
 *   0x00000000004F61E8  sub_4F61E8
 *   0x00000000004F67EC  sub_4F67EC
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EB6DC  sub_4EB6DC
 *   0x00000000004EEFD8  sub_4EEFD8
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004EF46C  sub_4EF46C
 *
 * Referenced strings: 27
 *   insn=0x00000000004EB350 string=0x00000000004EB354 "V"
 *   insn=0x00000000004EB39C string=0x00000000004EB3A0 "h"
 *   insn=0x00000000004EB3A4 string=0x00000000004EB3A8 "\t"
 *   insn=0x00000000004EB3A8 string=0x00000000004EB3AC "*\t@"
 *   insn=0x00000000004EB3AC string=0x00000000004EB3B0 "_"
 *   insn=0x00000000004EB3B0 string=0x00000000004EB3B4 "a"
 *   insn=0x00000000004EB3B4 string=0x00000000004EB3B8 "*"
 *   insn=0x00000000004EB3B8 string=0x00000000004EB3BC "J)@9\n"
 *   insn=0x00000000004EB3BC string=0x00000000004EB3C0 "\n"
 *   insn=0x00000000004EB3C0 string=0x00000000004EB3C4 "j"
 *   insn=0x00000000004EB3C4 string=0x00000000004EB3C8 "\n"
 *   insn=0x00000000004EB3C8 string=0x00000000004EB3CC "("
 *   insn=0x00000000004EB3CC string=0x00000000004EB3D0 ""
 *   insn=0x00000000004EB3D0 string=0x00000000004EB3D4 "\t@"
 *   insn=0x00000000004EB3D4 string=0x00000000004EB3D8 "I"
 *   insn=0x00000000004EB3D8 string=0x00000000004EB3DC "*"
 *   insn=0x00000000004EB3DC string=0x00000000004EB3E0 "_"
 *   insn=0x00000000004EB3E0 string=0x00000000004EB3E4 ""
 *   insn=0x00000000004EB3E4 string=0x00000000004EB3E8 "\n"
 *   insn=0x00000000004EB3E8 string=0x00000000004EB3EC "\n"
 *   insn=0x00000000004EB3F0 string=0x00000000004EB3F4 "iy\t"
 *   insn=0x00000000004EB3F4 string=0x00000000004EB3F8 ")"
 *   insn=0x00000000004EB3F8 string=0x00000000004EB3FC "Uii"
 *   insn=0x00000000004EB400 string=0x00000000004EB410 "!@"
 *   insn=0x00000000004EB420 string=0x00000000004EB424 "a"
 *   insn=0x00000000004EB424 string=0x0000000000599A32 "%s:%d: %s"
 *   insn=0x00000000004EB470 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_4EB320(__int64 a1, const char *a2, ...)
{
  __int64 v3; // x0
  __int64 v4; // x8
  const char *v5; // x20
  _DWORD *v6; // x9
  __int64 v7; // x10
  _QWORD *v8; // x8
  unsigned __int64 v9; // x9
  __int64 v10; // x10
  int v11; // w21
  gcc_va_list va1; // [xsp+C0h] [xbp-C0h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-98h] BYREF
  char v14[68]; // [xsp+10Ch] [xbp-74h] BYREF

  va_start(va, a2);
  _ReadStatusReg(TPIDR_EL0);
  va_copy(va1, va);
  v3 = sub_4EEFD8(a1, a2, va1);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = (const char *)v3;
  v6 = *(_DWORD **)(v4 + 8);
  if ( v6[2] == 6 && !*(_BYTE *)(*(_QWORD *)v6 + 10LL) )
  {
    v7 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v4 + 24) = v7;
    v8 = *(_QWORD **)(*(_QWORD *)v6 + 32LL);
    v9 = v7 - v8[3];
    if ( (int)(v9 >> 2) < 1 )
    {
      v11 = -1;
    }
    else
    {
      v10 = v8[5];
      if ( v10 )
        v11 = *(_DWORD *)(v10 + ((__int64)((v9 << 30) - 0x100000000LL) >> 30));
      else
        v11 = 0;
    }
    sub_4EF46C(v14, (char *)(v8[8] + 24LL), 0x3Cu);
    sub_4EF3D4(a1, "%s:%d: %s", v14, v11, v5);
  }
  sub_4EB6DC(a1);
}

