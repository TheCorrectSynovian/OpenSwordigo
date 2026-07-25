/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046D71C
 * Mangled: _ZN5Caver14SceneGridEntryD2Ev
 * Demangled: Caver::SceneGridEntry::~SceneGridEntry()
 *
 * Callers: 1
 *   0x00000000001FD250  Caver::SceneGridEntry::~SceneGridEntry()
 *
 * Callees: 1
 *   0x0000000000202E70  Caver::SceneGridLayer::RemoveObject(Caver::SceneGridEntry *)
 *
 * Referenced strings: 1
 *   insn=0x000000000046D720 string=0x000000000046D724 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneGridEntry::~SceneGridEntry(Caver::SceneGridLayer **this)
{
  Caver::SceneGridLayer *v2; // x0

  v2 = *this;
  if ( v2 )
    Caver::SceneGridLayer::RemoveObject(v2, (Caver::SceneGridEntry *)this);
}

