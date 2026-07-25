/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049CCD8
 * Mangled: _ZN5Caver9GUISlider6UpdateEf
 * Demangled: Caver::GUISlider::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 12
 *   insn=0x000000000049CCD8 string=0x000000000049CCDC "("
 *   insn=0x000000000049CCDC string=0x0000000000583734 "o"
 *   insn=0x000000000049CCE0 string=0x000000000049CCE4 "#"
 *   insn=0x000000000049CCE4 string=0x000000000049CCE8 "` ""
 *   insn=0x000000000049CCF4 string=0x000000000049CCF8 "! "
 *   insn=0x000000000049CCF8 string=0x000000000049CCFC "%"
 *   insn=0x000000000049CD00 string=0x000000000049CD04 "D8#"
 *   insn=0x000000000049CD0C string=0x000000000049CD10 ""
 *   insn=0x000000000049CD14 string=0x000000000049CD2C "!(""
 *   insn=0x000000000049CD24 string=0x000000000049CD28 "f"
 *   insn=0x000000000049CD34 string=0x000000000049CD38 ""
 *   insn=0x000000000049CD38 string=0x000000000049CD3C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISlider::Update(Caver::GUIView *this, float a2)
{
  float v2; // s1
  float v3; // s2
  float v4; // s3
  float v5; // s1

  v2 = *((float *)this + 75);
  if ( fabsf(v2) <= 0.001 )
  {
    *((_BYTE *)this + 304) = 0;
  }
  else
  {
    v3 = *((float *)this + 74);
    v4 = *((float *)this + 73);
    v5 = v2 * a2;
    *((_BYTE *)this + 304) = 1;
    if ( fabsf(v3 - v4) >= fabsf(v5) )
    {
      *((float *)this + 74) = v5 + v3;
    }
    else
    {
      *((float *)this + 74) = v4;
      *((_DWORD *)this + 75) = 0;
    }
    *((_BYTE *)this + 352) = 1;
  }
  return Caver::GUIView::Update(this, a2);
}

