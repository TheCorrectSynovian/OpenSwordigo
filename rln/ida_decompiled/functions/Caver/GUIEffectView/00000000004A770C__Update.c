/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A770C
 * Mangled: _ZN5Caver13GUIEffectView6UpdateEf
 * Demangled: Caver::GUIEffectView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8550  Caver::GUIEffect::Update(float)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 6
 *   insn=0x00000000004A771C string=0x00000000004A7720 "t"
 *   insn=0x00000000004A7724 string=0x00000000004A7728 ""
 *   insn=0x00000000004A772C string=0x00000000004A7730 "h"
 *   insn=0x00000000004A772C string=0x00000000001F8550 "0'"
 *   insn=0x00000000004A773C string=0x00000000004A7740 "h"
 *   insn=0x00000000004A7744 string=0x00000000004A7748 "=@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIEffectView::Update(Caver::GUIEffectView *this, float a2)
{
  _BYTE *v3; // x20

  v3 = (char *)this + 240;
  Caver::GUIEffect::Update((Caver::GUIEffectView *)((char *)this + 240), a2);
  if ( *((_BYTE *)this + 352) && *v3 )
    (*(void (__fastcall **)(Caver::GUIEffectView *))(*(_QWORD *)this + 120LL))(this);
  return Caver::GUIView::Update(this, a2);
}

