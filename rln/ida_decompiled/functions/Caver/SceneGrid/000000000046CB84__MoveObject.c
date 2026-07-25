/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046CB84
 * Mangled: _ZN5Caver9SceneGrid10MoveObjectEPNS_14SceneGridEntryERKNS_9RectangleEf
 * Demangled: Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000001F9890  Caver::SceneGrid::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Callees: 3
 *   0x00000000001FD4D0  Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *   0x0000000000200110  Caver::SceneGridLayer::MoveObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *   0x0000000000202E70  Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry *)
 *
 * Referenced strings: 14
 *   insn=0x000000000046CB90 string=0x000000000046CB94 ""
 *   insn=0x000000000046CB94 string=0x000000000046CB98 "\t"
 *   insn=0x000000000046CBA4 string=0x000000000046CBA8 "k"
 *   insn=0x000000000046CBA8 string=0x000000000046CBD4 "("
 *   insn=0x000000000046CBB0 string=0x000000000046CBB4 "u"
 *   insn=0x000000000046CBB8 string=0x000000000046CBBC "   "
 *   insn=0x000000000046CBC0 string=0x000000000046CBC4 "J"
 *   insn=0x000000000046CBC4 string=0x000000000046CBC8 "_"
 *   insn=0x000000000046CBC8 string=0x000000000046CBCC "kA"
 *   insn=0x000000000046CBCC string=0x000000000046CBD0 "+"
 *   insn=0x000000000046CBE0 string=0x000000000046CBE4 "@"
 *   insn=0x000000000046CC04 string=0x000000000046CC08 "2B"
 *   insn=0x000000000046CC08 string=0x00000000001FD4D0 "0'"
 *   insn=0x000000000046CC20 string=0x000000000046CC24 ";M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGrid::MoveObject(
        Caver::SceneGrid *this,
        Caver::SceneGridEntry *a2,
        const Caver::Rectangle *a3,
        float a4)
{
  __int64 v4; // x8
  __int64 v7; // x10
  Caver::SceneGridLayer **v8; // x11
  Caver::SceneGridLayer *v9; // x21

  v4 = *(int *)this;
  if ( (int)v4 < 1 )
  {
LABEL_5:
    v9 = *(Caver::SceneGridLayer **)(*((_QWORD *)this + 1) + 16 * v4 - 16);
  }
  else
  {
    v7 = 0;
    v8 = (Caver::SceneGridLayer **)*((_QWORD *)this + 1);
    while ( 1 )
    {
      v9 = *v8;
      if ( *(float *)*v8 < a4 )
        break;
      ++v7;
      v8 += 2;
      if ( v7 >= v4 )
        goto LABEL_5;
    }
  }
  if ( v9 == *(Caver::SceneGridLayer **)a2 )
    return Caver::SceneGridLayer::MoveObject(v9, a2, a3);
  Caver::SceneGridLayer::RemoveObject(*(Caver::SceneGridLayer **)a2, a2);
  return Caver::SceneGridLayer::AddObject(v9, a2, a3);
}

