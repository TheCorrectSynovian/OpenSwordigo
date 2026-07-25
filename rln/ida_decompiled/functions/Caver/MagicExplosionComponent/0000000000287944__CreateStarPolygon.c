/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000287944
 * Mangled: _ZN5Caver23MagicExplosionComponent17CreateStarPolygonEv
 * Demangled: Caver::MagicExplosionComponent::CreateStarPolygon(void)
 *
 * Callers: 1
 *   0x0000000000200840  Caver::MagicExplosionComponent::CreateStarPolygon(void)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F67A0  Caver::MagicExplosionComponent::UpdateStarPolygonColor(void)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 53
 *   insn=0x0000000000287958 string=0x000000000028795C "h"
 *   insn=0x0000000000287958 string=0x00000000001F8570 "0'"
 *   insn=0x000000000028795C string=0x0000000000287960 "`"
 *   insn=0x0000000000287968 string=0x000000000028796C "}"
 *   insn=0x000000000028796C string=0x0000000000287970 "`"
 *   insn=0x000000000028796C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000287980 string=0x0000000000287988 "\t"
 *   insn=0x0000000000287988 string=0x0000000000588BF8 "o"
 *   insn=0x0000000000287994 string=0x0000000000287998 " "
 *   insn=0x0000000000287998 string=0x000000000028799C ""
 *   insn=0x000000000028799C string=0x0000000000588C00 "o"
 *   insn=0x00000000002879AC string=0x00000000002879B0 ""
 *   insn=0x00000000002879D0 string=0x00000000002879D4 " q@"
 *   insn=0x00000000002879D4 string=0x00000000002879D8 "\t"
 *   insn=0x00000000002879E4 string=0x00000000002879E8 " \tF"
 *   insn=0x00000000002879F0 string=0x00000000002879F4 "P"
 *   insn=0x00000000002879F8 string=0x00000000002879FC "@"
 *   insn=0x00000000002879FC string=0x0000000000287A00 "tz"
 *   insn=0x0000000000287A04 string=0x0000000000287A08 "h"
 *   insn=0x0000000000287A08 string=0x0000000000287A0C "`"
 *   insn=0x0000000000287A14 string=0x0000000000287A18 "R"
 *   insn=0x0000000000287A18 string=0x0000000000287A1C "`"
 *   insn=0x0000000000287A20 string=0x0000000000287A24 "h"
 *   insn=0x0000000000287A30 string=0x0000000000287A34 "\t"
 *   insn=0x0000000000287A34 string=0x0000000000287A38 "h"
 *   insn=0x0000000000287A40 string=0x0000000000287A44 "\n\t"
 *   insn=0x0000000000287A44 string=0x0000000000287A48 "h"
 *   insn=0x0000000000287A48 string=0x0000000000287A4C "\n"
 *   insn=0x0000000000287A4C string=0x0000000000287A50 "h"
 *   insn=0x0000000000287A50 string=0x0000000000287A54 ""
 *   insn=0x0000000000287A54 string=0x0000000000287A58 "h"
 *   insn=0x0000000000287A5C string=0x0000000000287A60 "h"
 *   insn=0x0000000000287A64 string=0x0000000000287A68 "h"
 *   insn=0x0000000000287A6C string=0x0000000000287A70 "h"
 *   insn=0x0000000000287A70 string=0x0000000000287A74 "\t!"
 *   insn=0x0000000000287A74 string=0x0000000000287A78 "h"
 *   insn=0x0000000000287A78 string=0x0000000000287A7C "\t%"
 *   insn=0x0000000000287A7C string=0x0000000000287A80 "h"
 *   insn=0x0000000000287A84 string=0x0000000000287A88 "\t)"
 *   insn=0x0000000000287A88 string=0x0000000000287A8C "h"
 *   insn=0x0000000000287A90 string=0x0000000000287A94 "\n-"
 *   insn=0x0000000000287A94 string=0x0000000000287A98 "h"
 *   insn=0x0000000000287A98 string=0x0000000000287A9C "\n1"
 *   insn=0x0000000000287A9C string=0x0000000000287AA0 "h"
 *   insn=0x0000000000287AA4 string=0x0000000000287AA8 "h"
 *   insn=0x0000000000287AA8 string=0x0000000000287AAC "9"
 *   insn=0x0000000000287AAC string=0x0000000000287AB0 "h"
 *   insn=0x0000000000287AB0 string=0x0000000000287AB4 "="
 *   insn=0x0000000000287AB4 string=0x0000000000287AB8 "h"
 *   insn=0x0000000000287AB8 string=0x0000000000287ABC "\tA"
 *   insn=0x0000000000287ABC string=0x0000000000287AC0 "h"
 *   insn=0x0000000000287ACC string=0x0000000000287AD0 "4"
 *   insn=0x0000000000287AD0 string=0x00000000001F67A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicExplosionComponent::CreateStarPolygon(Caver::MagicExplosionComponent *this)
{
  int32x2_t *v2; // x0
  void *v3; // x8
  _BYTE *v4; // x0
  void *v5; // x8

  v2 = (int32x2_t *)operator new[](0x80u);
  v3 = (void *)*((_QWORD *)this + 45);
  *((_QWORD *)this + 45) = v2;
  if ( v3 )
  {
    operator delete[](v3);
    v2 = (int32x2_t *)*((_QWORD *)this + 45);
  }
  v2->n64_u64[0] = vdup_n_s32(0xBD83126F).n64_u64[0];
  v2[4].n64_u64[0] = vdup_n_s32(0x3D83126Fu).n64_u64[0];
  v2[1].n64_u32[0] = 0;
  v2[2].n64_u64[0] = 0xBD83126F3D83126FLL;
  v2[3].n64_u32[0] = 0;
  v2[5].n64_u32[0] = 0;
  v2[6].n64_u64[0] = 0x3D83126FBD83126FLL;
  v2[7].n64_u32[0] = 0;
  v2[9].n64_u32[0] = 0;
  v2[8].n64_u64[0] = 0xBF80000000000000LL;
  v2[10].n64_u32[1] = 0;
  v2[11].n64_u32[0] = 0;
  v2[13].n64_u32[0] = 0;
  v2[12].n64_u64[0] = 0x3F80000000000000LL;
  v2[15].n64_u32[0] = 0;
  v2[10].n64_u32[0] = 1065353216;
  v2[14].n64_u64[0] = 3212836864LL;
  *((_DWORD *)this + 94) = 6;
  v4 = (_BYTE *)operator new[](0x12u);
  v5 = (void *)*((_QWORD *)this + 46);
  *((_QWORD *)this + 46) = v4;
  if ( v5 )
  {
    operator delete[](v5);
    v4 = (_BYTE *)*((_QWORD *)this + 46);
  }
  *v4 = 0;
  *(_BYTE *)(*((_QWORD *)this + 46) + 1LL) = 1;
  *(_BYTE *)(*((_QWORD *)this + 46) + 2LL) = 2;
  *(_BYTE *)(*((_QWORD *)this + 46) + 3LL) = 2;
  *(_BYTE *)(*((_QWORD *)this + 46) + 4LL) = 3;
  *(_BYTE *)(*((_QWORD *)this + 46) + 5LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 46) + 6LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 46) + 7LL) = 4;
  *(_BYTE *)(*((_QWORD *)this + 46) + 8LL) = 1;
  *(_BYTE *)(*((_QWORD *)this + 46) + 9LL) = 1;
  *(_BYTE *)(*((_QWORD *)this + 46) + 10LL) = 5;
  *(_BYTE *)(*((_QWORD *)this + 46) + 11LL) = 2;
  *(_BYTE *)(*((_QWORD *)this + 46) + 12LL) = 2;
  *(_BYTE *)(*((_QWORD *)this + 46) + 13LL) = 6;
  *(_BYTE *)(*((_QWORD *)this + 46) + 14LL) = 3;
  *(_BYTE *)(*((_QWORD *)this + 46) + 15LL) = 3;
  *(_BYTE *)(*((_QWORD *)this + 46) + 16LL) = 7;
  *(_BYTE *)(*((_QWORD *)this + 46) + 17LL) = 0;
  return Caver::MagicExplosionComponent::UpdateStarPolygonColor(this);
}

