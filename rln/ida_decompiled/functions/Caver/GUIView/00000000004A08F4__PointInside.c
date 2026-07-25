/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A08F4
 * Mangled: _ZNK5Caver7GUIView11PointInsideERKNS_7Vector2E
 * Demangled: Caver::GUIView::PointInside(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Referenced strings: 12
 *   insn=0x00000000004A0900 string=0x00000000004A0904 "S"
 *   insn=0x00000000004A0904 string=0x00000000004A0908 "h"
 *   insn=0x00000000004A0908 string=0x00000000004A090C "\t"
 *   insn=0x00000000004A090C string=0x00000000004A0910 "!5G"
 *   insn=0x00000000004A090C string=0x0000000000583734 "o"
 *   insn=0x00000000004A0910 string=0x00000000004A0914 "\t"
 *   insn=0x00000000004A091C string=0x00000000004A0920 "P"
 *   insn=0x00000000004A0928 string=0x00000000004A092C ""
 *   insn=0x00000000004A0934 string=0x00000000004A0938 "2"
 *   insn=0x00000000004A0938 string=0x00000000004A093C "h"
 *   insn=0x00000000004A0948 string=0x00000000004A0960 "\V"
 *   insn=0x00000000004A0960 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::PointInside(Caver::GUIView *this, const Caver::Vector2 *a2)
{
  char *v2; // x8
  __int128 v4; // [xsp+0h] [xbp-30h] BYREF
  __int64 v5; // [xsp+18h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (char *)this + 148;
  if ( *((float *)this + 39) <= 0.001 )
    v2 = (char *)this + 132;
  v4 = *(_OWORD *)v2;
  return Caver::Rectangle::PointInside((Caver::Rectangle *)&v4, a2) & 1;
}

