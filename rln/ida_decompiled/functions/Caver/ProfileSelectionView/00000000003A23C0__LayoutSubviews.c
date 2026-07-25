/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A23C0
 * Mangled: _ZN5Caver20ProfileSelectionView14LayoutSubviewsEv
 * Demangled: Caver::ProfileSelectionView::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 22
 *   insn=0x00000000003A23CC string=0x00000000003A23D0 "T"
 *   insn=0x00000000003A23E0 string=0x00000000003A23E4 "`B"
 *   insn=0x00000000003A23E8 string=0x00000000003A23EC "`"
 *   insn=0x00000000003A23EC string=0x00000000003A23F0 "`c"
 *   insn=0x00000000003A23F0 string=0x00000000003A23F4 "h"
 *   insn=0x00000000003A23F0 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003A23F4 string=0x00000000003A23F8 "\t"
 *   insn=0x00000000003A23F8 string=0x00000000003A23FC ""EI"
 *   insn=0x00000000003A23F8 string=0x0000000000583944 "\n"
 *   insn=0x00000000003A2410 string=0x00000000003A2414 "!(#"
 *   insn=0x00000000003A2418 string=0x00000000003A241C "!8$"
 *   insn=0x00000000003A241C string=0x00000000003A2420 "c"
 *   insn=0x00000000003A2420 string=0x00000000003A2424 "` ""
 *   insn=0x00000000003A2424 string=0x00000000003A2428 "!@!"
 *   insn=0x00000000003A2428 string=0x00000000003A242C "M"
 *   insn=0x00000000003A2438 string=0x00000000003A243C "\t"
 *   insn=0x00000000003A2440 string=0x00000000003A2444 "#8#"
 *   insn=0x00000000003A2444 string=0x00000000003A2448 "c"
 *   insn=0x00000000003A2448 string=0x00000000003A244C "` ""
 *   insn=0x00000000003A244C string=0x00000000003A2450 "M"
 *   insn=0x00000000003A2450 string=0x00000000003A2458 "\t"
 *   insn=0x00000000003A2488 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionView::LayoutSubviews(Caver::ProfileSelectionView *this)
{
  __int64 result; // x0
  __int64 v3; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s3
  __int128 v7; // [xsp+0h] [xbp-30h] BYREF
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_OWORD *)((char *)this + 132);
  result = Caver::GUIView::SetFrame(*((Caver::GUIView **)this + 32), (const Caver::Rectangle *)&v7);
  v3 = *((_QWORD *)this + 32);
  v4 = -*(float *)(v3 + 236);
  v5 = -(float)((float)(*(float *)(v3 + 240) + *(float *)(v3 + 248)) - *(float *)(v3 + 144));
  if ( fabsf(v4 - *(float *)(v3 + 264)) > 0.01 )
    *(_DWORD *)(v3 + 292) = 0;
  v6 = *(float *)(v3 + 308);
  *(_BYTE *)(v3 + 260) = 1;
  *(float *)(v3 + 264) = v4;
  if ( fabsf(v5 - v6) > 0.01 )
    *(_DWORD *)(v3 + 336) = 0;
  *(_BYTE *)(v3 + 304) = 1;
  *(float *)(v3 + 308) = v5;
  *(float *)(v3 + 256) = v4;
  *(float *)(v3 + 300) = v5;
  return result;
}

