/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034FAB4
 * Mangled: _ZN5Caver13GameSceneView24SetMenuButtonHighlightedEb
 * Demangled: Caver::GameSceneView::SetMenuButtonHighlighted(bool)
 *
 * Callers: 1
 *   0x00000000001F4990  Caver::GameSceneView::SetMenuButtonHighlighted(bool)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x000000000034FAB4 string=0x000000000034FAB8 "\t"
 *   insn=0x000000000034FAB8 string=0x000000000034FABC "("
 *   insn=0x000000000034FABC string=0x000000000034FAC0 "*aG9"
 *   insn=0x000000000034FAC8 string=0x000000000034FACC "(a9"
 *   insn=0x000000000034FAC8 string=0x000000000034FAE4 "\tx@"
 *   insn=0x000000000034FAD4 string=0x000000000034FAD8 "?"
 *   insn=0x000000000034FAE4 string=0x000000000034FAE8 ")"
 *   insn=0x000000000034FAE8 string=0x000000000034FAEC "(a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::SetMenuButtonHighlighted(__int64 this, char a2)
{
  __int64 v2; // x9
  char v3; // w8

  v2 = *(_QWORD *)(*(_QWORD *)(this + 256) + 456LL);
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
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(this + 240) + 8LL) + 408LL) = v3;
  return this;
}

