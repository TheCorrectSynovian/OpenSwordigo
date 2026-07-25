/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000459F58
 * Mangled: _ZN5Caver12LightOverlay8SetFrameERKNS_9RectangleE
 * Demangled: Caver::LightOverlay::SetFrame(Caver::Rectangle const&)
 *
 * Callers: 2
 *   0x00000000001FA2B0  Caver::LightOverlay::SetFrame(Caver::Rectangle const&)
 *   0x0000000000459F04  Caver::LightOverlay::LightOverlay(void)
 *
 * Callees: 1
 *   0x00000000001F52B0  Caver::LightOverlay::CreateVertices(void)
 *
 * Referenced strings: 42
 *   insn=0x0000000000459F5C string=0x0000000000459F60 "H\t"
 *   insn=0x0000000000459F60 string=0x0000000000583944 "\n"
 *   insn=0x0000000000459F64 string=0x0000000000459F68 "!8""
 *   insn=0x0000000000459F68 string=0x0000000000459F6C "!"
 *   insn=0x0000000000459F6C string=0x0000000000459F70 "   "
 *   insn=0x0000000000459F70 string=0x0000000000459F74 "h"
 *   insn=0x0000000000459F74 string=0x0000000000459FC0 " "
 *   insn=0x0000000000459F78 string=0x0000000000459F7C """
 *   insn=0x0000000000459F7C string=0x0000000000459F80 "A8!"
 *   insn=0x0000000000459F80 string=0x0000000000459F84 "!"
 *   insn=0x0000000000459F84 string=0x0000000000459F88 "   "
 *   insn=0x0000000000459F8C string=0x0000000000459F90 "!@"
 *   insn=0x0000000000459F94 string=0x0000000000459F98 "!8""
 *   insn=0x0000000000459F98 string=0x0000000000459F9C "!"
 *   insn=0x0000000000459F9C string=0x0000000000459FA0 "   "
 *   insn=0x0000000000459FA8 string=0x0000000000459FAC """
 *   insn=0x0000000000459FAC string=0x0000000000459FB0 "A8!"
 *   insn=0x0000000000459FB0 string=0x0000000000459FB4 "!"
 *   insn=0x0000000000459FB4 string=0x0000000000459FB8 "   "
 *   insn=0x0000000000459FC0 string=0x0000000000459FC4 "k"
 *   insn=0x0000000000459FC4 string=0x0000000000459FC8 "H"
 *   insn=0x0000000000459FCC string=0x0000000000459FD0 " "
 *   insn=0x0000000000459FDC string=0x0000000000459FE0 ")"
 *   insn=0x0000000000459FE8 string=0x0000000000459FEC "*"
 *   insn=0x0000000000459FEC string=0x0000000000459FF0 "K}"
 *   insn=0x0000000000459FF4 string=0x0000000000459FF8 "$"
 *   insn=0x0000000000459FFC string=0x000000000045A000 "H"
 *   insn=0x000000000045A000 string=0x000000000045A004 "\t"
 *   insn=0x000000000045A004 string=0x000000000045A008 "a"
 *   insn=0x000000000045A010 string=0x000000000045A014 "*"
 *   insn=0x000000000045A014 string=0x000000000045A018 "k}\n"
 *   insn=0x000000000045A01C string=0x000000000045A020 ""
 *   insn=0x000000000045A020 string=0x000000000045A024 ""
 *   insn=0x000000000045A024 string=0x000000000045A028 "$"
 *   insn=0x000000000045A02C string=0x000000000045A030 ")"
 *   insn=0x000000000045A030 string=0x000000000045A034 ""
 *   insn=0x000000000045A034 string=0x000000000045A038 """
 *   insn=0x000000000045A040 string=0x000000000045A044 "!"
 *   insn=0x000000000045A044 string=0x000000000045A048 ""
 *   insn=0x000000000045A048 string=0x000000000045A04C ")"
 *   insn=0x000000000045A04C string=0x000000000045A050 "\t "
 *   insn=0x000000000045A054 string=0x00000000001F52B0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LightOverlay::SetFrame(__int64 this, const Caver::Rectangle *a2)
{
  int v2; // w8
  float v3; // s0
  unsigned int v4; // w9
  unsigned int v5; // w10
  int v6; // w11
  float v7; // s1
  unsigned int v8; // w8

  if ( fabsf(*(float *)a2 - *(float *)this) > 0.01
    || fabsf(*((float *)a2 + 1) - *(float *)(this + 4)) > 0.01
    || fabsf(*((float *)a2 + 2) - *(float *)(this + 8)) > 0.01
    || fabsf(*((float *)a2 + 3) - *(float *)(this + 12)) > 0.01 )
  {
    v2 = 10;
    *(_OWORD *)this = *(_OWORD *)a2;
    v3 = *((float *)a2 + 2) / *((float *)a2 + 3);
    v4 = llroundf(v3 * 10.0);
    v5 = llroundf(v3 * 11.0);
    *(_DWORD *)(this + 16) = 10;
    *(_DWORD *)(this + 20) = v4;
    if ( (int)(11 * v5) <= 450 )
    {
      v2 = 10;
      do
      {
        v4 = v5;
        v5 = llroundf(v3 * (float)(v2 + 2));
        v6 = (v2 + 2) * v5;
        ++v2;
      }
      while ( v6 < 451 );
      *(_DWORD *)(this + 16) = v2;
      *(_DWORD *)(this + 20) = v4;
    }
    v7 = *(float *)(this + 12) / (float)(v2 - 1);
    v8 = vcvtps_s32_f32(*(float *)(this + 8) / (float)(int)(v4 - 1));
    *(_DWORD *)(this + 24) = vcvtps_s32_f32(v7);
    *(_DWORD *)(this + 28) = v8;
    return Caver::LightOverlay::CreateVertices((Caver::LightOverlay *)this);
  }
  return this;
}

