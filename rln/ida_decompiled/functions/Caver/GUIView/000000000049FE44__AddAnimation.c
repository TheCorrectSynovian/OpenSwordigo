/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049FE44
 * Mangled: _ZN5Caver7GUIView12AddAnimationERKN5boost10shared_ptrINS_12GUIAnimationEEE
 * Demangled: Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *
 * Callers: 1
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F9630  Caver::GUIAnimation::Update(float)
 *   0x000000000052A9AC  sub_52A9AC
 *
 * Referenced strings: 11
 *   insn=0x000000000049FE5C string=0x000000000049FE60 "h"
 *   insn=0x000000000049FE5C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049FE60 string=0x000000000049FE64 ""
 *   insn=0x000000000049FE64 string=0x000000000049FE68 "h"
 *   insn=0x000000000049FE68 string=0x000000000049FE6C ""
 *   insn=0x000000000049FE70 string=0x000000000049FE74 "\t"
 *   insn=0x000000000049FE74 string=0x000000000049FE78 ")"
 *   insn=0x000000000049FE78 string=0x000000000049FE7C "\t"
 *   insn=0x000000000049FE84 string=0x000000000049FE88 "`"
 *   insn=0x000000000049FE84 string=0x000000000052A9AC """
 *   insn=0x000000000049FE98 string=0x00000000001F9630 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIView::AddAnimation(__int64 a1, __int64 a2)
{
  __int64 v2; // x20
  __int64 v4; // x0
  __int64 v5; // x8

  v2 = a1 + 96;
  v4 = operator new(0x20u);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v4 + 24) = v5;
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  sub_52A9AC(v4, v2);
  Caver::GUIAnimation::Update(*(Caver::GUIAnimation **)a2, 0.0);
}

