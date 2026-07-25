/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EEE84
 * Mangled: sub_4EEE84
 * Demangled: sub_4EEE84
 *
 * Callers: 6
 *   0x00000000004E737C  lua_rawequal(lua_State *,int,int)
 *   0x00000000004F3794  sub_4F3794
 *   0x00000000004F4118  sub_4F4118
 *   0x00000000004F63FC  sub_4F63FC
 *   0x00000000004F6604  sub_4F6604
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000004EEE84 string=0x00000000004EEE88 ")@"
 *   insn=0x00000000004EEE98 string=0x00000000004EEE9C "I"
 *   insn=0x00000000004EEE98 string=0x00000000004EEED4 ""
 *   insn=0x00000000004EEEA0 string=0x00000000004EEEA4 ")"
 *   insn=0x00000000004EEEA4 string=0x00000000004EEEA8 "(y"
 *   insn=0x00000000004EEEA8 string=0x00000000004EEEAC "\t"
 *   insn=0x00000000004EEEB0 string=0x00000000004EEEB4 " "
 *   insn=0x00000000004EEEB4 string=0x00000000004EEEB8 ""
 *   insn=0x00000000004EEEB8 string=0x00000000004EEEBC ")"
 *   insn=0x00000000004EEEC0 string=0x00000000004EEEC4 ""
 *   insn=0x00000000004EEED4 string=0x00000000004EEED8 ")"
 *   insn=0x00000000004EEEE4 string=0x00000000004EEEE8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_4EEE84(_DWORD *a1, _DWORD *a2)
{
  return a1[2] == a2[2] && *a1 == *a2;
}

