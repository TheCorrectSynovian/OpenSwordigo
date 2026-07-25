/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046CB40
 * Mangled: _ZN5Caver9SceneGrid9AddObjectEPNS_14SceneGridEntryERKNS_9RectangleEf
 * Demangled: Caver::SceneGrid::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000001FF5D0  Caver::SceneGrid::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&,float)
 *
 * Callees: 1
 *   0x00000000001FD4D0  Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Referenced strings: 11
 *   insn=0x000000000046CB40 string=0x000000000046CB44 "\t"
 *   insn=0x000000000046CB48 string=0x000000000046CB4C "k"
 *   insn=0x000000000046CB4C string=0x000000000046CB78 "("
 *   insn=0x000000000046CB54 string=0x000000000046CB58 "`"
 *   insn=0x000000000046CB5C string=0x000000000046CB60 "   "
 *   insn=0x000000000046CB64 string=0x000000000046CB68 "J"
 *   insn=0x000000000046CB64 string=0x000000000046CB80 "TB"
 *   insn=0x000000000046CB68 string=0x000000000046CB6C "_"
 *   insn=0x000000000046CB6C string=0x000000000046CB70 "kA"
 *   insn=0x000000000046CB70 string=0x000000000046CB74 "+"
 *   insn=0x000000000046CB80 string=0x00000000001FD4D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGrid::AddObject(
        Caver::SceneGrid *this,
        Caver::SceneGridEntry *a2,
        const Caver::Rectangle *a3,
        float a4)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x10
  Caver::SceneGridLayer **v7; // x11
  Caver::SceneGridLayer *v8; // x0

  v4 = *(int *)this;
  v5 = *((_QWORD *)this + 1);
  if ( (int)v4 < 1 )
  {
LABEL_5:
    v8 = *(Caver::SceneGridLayer **)(v5 + 16 * v4 - 16);
  }
  else
  {
    v6 = 0;
    v7 = (Caver::SceneGridLayer **)*((_QWORD *)this + 1);
    while ( 1 )
    {
      v8 = *v7;
      if ( *(float *)*v7 < a4 )
        break;
      ++v6;
      v7 += 2;
      if ( v6 >= v4 )
        goto LABEL_5;
    }
  }
  return Caver::SceneGridLayer::AddObject(v8, a2, a3);
}

