/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023D2F0
 * Mangled: _ZThn24_N5Caver19TextBubbleComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::TextBubbleComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3E00  Caver::GUITextBubble::Update(float)
 *
 * Referenced strings: 7
 *   insn=0x000000000023D2F0 string=0x000000000023D2F4 "("
 *   insn=0x000000000023D2F4 string=0x000000000058493C "fff?"
 *   insn=0x000000000023D300 string=0x000000000023D304 "!(""
 *   insn=0x000000000023D308 string=0x000000000023D30C "!X""
 *   insn=0x000000000023D30C string=0x000000000023D310 "  #"
 *   insn=0x000000000023D31C string=0x000000000023D320 "@"
 *   insn=0x000000000023D324 string=0x00000000001F3E00 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::TextBubbleComponent::Update(__int64 this, float a2)
{
  float v2; // s1

  v2 = fminf((float)(a2 * 5.0) + *(float *)(this + 88), 1.0);
  *(float *)(this + 88) = v2;
  if ( v2 > 0.9 )
  {
    this = *(_QWORD *)(this + 96);
    if ( this )
      return Caver::GUITextBubble::Update((Caver::GUITextBubble *)this, a2);
  }
  return this;
}

