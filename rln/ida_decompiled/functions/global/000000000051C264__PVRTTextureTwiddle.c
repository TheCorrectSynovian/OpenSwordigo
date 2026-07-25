/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051C264
 * Mangled: _Z18PVRTTextureTwiddleRjjj
 * Demangled: PVRTTextureTwiddle(uint &,uint,uint)
 *
 * Callers: 1
 *   0x00000000001FDE20  PVRTTextureTwiddle(uint &,uint,uint)
 *
 * Callees: 0
 *
 * Referenced strings: 74
 *   insn=0x000000000051C264 string=0x000000000051C268 "+|"
 *   insn=0x000000000051C268 string=0x000000000051C26C ","
 *   insn=0x000000000051C26C string=0x000000000051C270 "J|"
 *   insn=0x000000000051C270 string=0x000000000051C274 "l"
 *   insn=0x000000000051C274 string=0x000000000051C278 ")|"
 *   insn=0x000000000051C278 string=0x000000000051C27C "L"
 *   insn=0x000000000051C27C string=0x000000000051C280 "H|"
 *   insn=0x000000000051C280 string=0x000000000051C284 "+l"
 *   insn=0x000000000051C284 string=0x000000000051C288 ","
 *   insn=0x000000000051C288 string=0x000000000051C28C "Jp"
 *   insn=0x000000000051C290 string=0x000000000051C294 "k"
 *   insn=0x000000000051C294 string=0x000000000051C298 ")hSk"
 *   insn=0x000000000051C298 string=0x000000000051C29C "k"
 *   insn=0x000000000051C29C string=0x000000000051C2A0 "J"
 *   insn=0x000000000051C2A0 string=0x000000000051C2A4 "Hl"
 *   insn=0x000000000051C2A4 string=0x000000000051C2A8 "j"
 *   insn=0x000000000051C2A8 string=0x000000000051C2AC ")"
 *   insn=0x000000000051C2AC string=0x000000000051C2B0 ",d"
 *   insn=0x000000000051C2B0 string=0x000000000051C2B4 ")"
 *   insn=0x000000000051C2B4 string=0x000000000051C2B8 ""
 *   insn=0x000000000051C2B8 string=0x000000000051C2BC "KhS("
 *   insn=0x000000000051C2BC string=0x000000000051C2C0 "("
 *   insn=0x000000000051C2C4 string=0x000000000051C2C8 "*`"
 *   insn=0x000000000051C2CC string=0x000000000051C2D0 "k"
 *   insn=0x000000000051C2D0 string=0x000000000051C2D4 "Id"
 *   insn=0x000000000051C2D4 string=0x000000000051C2D8 ""
 *   insn=0x000000000051C2D8 string=0x000000000051C2DC "J"
 *   insn=0x000000000051C2DC string=0x000000000051C2E0 ",\"
 *   insn=0x000000000051C2E0 string=0x000000000051C2E4 "H"
 *   insn=0x000000000051C2E4 string=0x000000000051C2E8 ")"
 *   insn=0x000000000051C2E8 string=0x000000000051C2EC "K`"
 *   insn=0x000000000051C2EC string=0x000000000051C2F0 ""
 *   insn=0x000000000051C2F4 string=0x000000000051C2F8 "*X"
 *   insn=0x000000000051C2FC string=0x000000000051C300 "k"
 *   insn=0x000000000051C300 string=0x000000000051C304 "I\"
 *   insn=0x000000000051C304 string=0x000000000051C308 ""
 *   insn=0x000000000051C308 string=0x000000000051C30C "J"
 *   insn=0x000000000051C30C string=0x000000000051C310 ",T"
 *   insn=0x000000000051C310 string=0x000000000051C314 "H"
 *   insn=0x000000000051C314 string=0x000000000051C318 ")"
 *   insn=0x000000000051C318 string=0x000000000051C31C "KX"
 *   insn=0x000000000051C31C string=0x000000000051C320 ""
 *   insn=0x000000000051C324 string=0x000000000051C328 "*P"
 *   insn=0x000000000051C32C string=0x000000000051C330 "k"
 *   insn=0x000000000051C330 string=0x000000000051C334 "IT"
 *   insn=0x000000000051C334 string=0x000000000051C338 ""
 *   insn=0x000000000051C338 string=0x000000000051C33C "J"
 *   insn=0x000000000051C33C string=0x000000000051C340 ",L"
 *   insn=0x000000000051C340 string=0x000000000051C344 "H"
 *   insn=0x000000000051C344 string=0x000000000051C348 ")"
 *   insn=0x000000000051C348 string=0x000000000051C34C "KP"
 *   insn=0x000000000051C34C string=0x000000000051C350 ""
 *   insn=0x000000000051C354 string=0x000000000051C358 "*H"
 *   insn=0x000000000051C35C string=0x000000000051C360 "k"
 *   insn=0x000000000051C360 string=0x000000000051C364 "IL"
 *   insn=0x000000000051C364 string=0x000000000051C368 ""
 *   insn=0x000000000051C368 string=0x000000000051C36C "J"
 *   insn=0x000000000051C36C string=0x000000000051C370 ",D"
 *   insn=0x000000000051C370 string=0x000000000051C374 "H"
 *   insn=0x000000000051C374 string=0x000000000051C378 ")"
 *   insn=0x000000000051C378 string=0x000000000051C37C "KH"
 *   insn=0x000000000051C37C string=0x000000000051C380 ""
 *   insn=0x000000000051C384 string=0x000000000051C388 "*@"
 *   insn=0x000000000051C388 string=0x000000000051C38C "k"
 *   insn=0x000000000051C390 string=0x000000000051C394 "ID"
 *   insn=0x000000000051C394 string=0x000000000051C398 "J"
 *   insn=0x000000000051C398 string=0x000000000051C39C ""
 *   insn=0x000000000051C39C string=0x000000000051C3A0 "-<"
 *   insn=0x000000000051C3A0 string=0x000000000051C3A4 ")"
 *   insn=0x000000000051C3A4 string=0x000000000051C3A8 "H"
 *   insn=0x000000000051C3A8 string=0x000000000051C3AC "N@"
 *   insn=0x000000000051C3B0 string=0x000000000051C3B4 ""
 *   insn=0x000000000051C3BC string=0x000000000051C3C0 ""
 *   insn=0x000000000051C3C0 string=0x000000000051C3C4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall PVRTTextureTwiddle(unsigned int *result, unsigned int a2, unsigned int a3)
{
  *result = (a2 << 16) & 0x80000000
          | (a2 << 15) & 0x20000000
          | (a2 << 14) & 0x8000000
          | (a2 << 13) & 0x2000000
          | (a2 << 12) & 0x800000
          | (a2 << 11) & 0x200000
          | (a2 << 10) & 0x80000
          | (a2 << 9) & 0x20000
          | (a2 << 8) & 0x8000
          | (a2 << 7) & 0x2000
          | (a2 << 6) & 0x800
          | (32 * a2) & 0x200
          | (16 * a2) & 0x80
          | a3 & 1
          | (2 * (a2 & 1)) & 0xC3
          | (8 * ((a2 >> 1) & 1)) & 0xFFFFFFCF
          | (4 * ((a3 >> 1) & 1)) & 0xFFFFFFCF
          | (32 * ((a2 >> 2) & 1))
          | (16 * ((a3 >> 2) & 1))
          | (8 * a3) & 0x40
          | (16 * a3) & 0x100
          | (32 * a3) & 0x400
          | (a3 << 6) & 0x1000
          | (a3 << 7) & 0x4000
          | (a3 << 8) & 0x10000
          | (a3 << 9) & 0x40000
          | (a3 << 10) & 0x100000
          | (a3 << 11) & 0x400000
          | (a3 << 12) & 0x1000000
          | (a3 << 13) & 0x4000000
          | (a3 << 14) & 0x10000000
          | (a3 << 15) & 0x40000000;
  return result;
}

