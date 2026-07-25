/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034FAF4
 * Mangled: _ZN5Caver13GameSceneView31SetSkillToggleButtonHighlightedEb
 * Demangled: Caver::GameSceneView::SetSkillToggleButtonHighlighted(bool)
 *
 * Callers: 1
 *   0x00000000001F9FF0  Caver::GameSceneView::SetSkillToggleButtonHighlighted(bool)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x000000000034FAF4 string=0x000000000034FAF8 "\t"
 *   insn=0x000000000034FAF8 string=0x000000000034FAFC "("
 *   insn=0x000000000034FAFC string=0x000000000034FB00 "*aG9"
 *   insn=0x000000000034FB08 string=0x000000000034FB0C "(a9"
 *   insn=0x000000000034FB08 string=0x000000000034FB24 "\tx@"
 *   insn=0x000000000034FB14 string=0x000000000034FB18 "?"
 *   insn=0x000000000034FB24 string=0x000000000034FB28 ")"
 *   insn=0x000000000034FB28 string=0x000000000034FB2C "(e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::SetSkillToggleButtonHighlighted(__int64 this, char a2)
{
  __int64 v2; // x9
  char v3; // w8

  v2 = *(_QWORD *)(*(_QWORD *)(this + 256) + 440LL);
  v3 = a2 & 1;
  if ( (a2 & 1) != *(_BYTE *)(v2 + 472) )
  {
    *(_BYTE *)(v2 + 472) = v3;
    if ( (a2 & 1) != 0 )
    {
      v3 = 1;
      *(_QWORD *)(v2 + 464) = 0;
    }
    else
    {
      v3 = 0;
    }
  }
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this + 240) + 8LL) + 409LL) = v3;
  return this;
}

