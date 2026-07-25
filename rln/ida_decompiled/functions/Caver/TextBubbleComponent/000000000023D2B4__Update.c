/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023D2B4
 * Mangled: _ZN5Caver19TextBubbleComponent6UpdateEf
 * Demangled: Caver::TextBubbleComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3E00  Caver::GUITextBubble::Update(float)
 *
 * Referenced strings: 7
 *   insn=0x000000000023D2B4 string=0x000000000023D2B8 "("
 *   insn=0x000000000023D2B8 string=0x000000000058493C "fff?"
 *   insn=0x000000000023D2C4 string=0x000000000023D2C8 "!(""
 *   insn=0x000000000023D2CC string=0x000000000023D2D0 "!X""
 *   insn=0x000000000023D2D0 string=0x000000000023D2D4 "  #"
 *   insn=0x000000000023D2E0 string=0x000000000023D2E4 "@"
 *   insn=0x000000000023D2E8 string=0x00000000001F3E00 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextBubbleComponent::Update(__int64 this, float a2)
{
  float v2; // s1

  v2 = fminf((float)(a2 * 5.0) + *(float *)(this + 112), 1.0);
  *(float *)(this + 112) = v2;
  if ( v2 > 0.9 )
  {
    this = *(_QWORD *)(this + 120);
    if ( this )
      return Caver::GUITextBubble::Update((Caver::GUITextBubble *)this, a2);
  }
  return this;
}

