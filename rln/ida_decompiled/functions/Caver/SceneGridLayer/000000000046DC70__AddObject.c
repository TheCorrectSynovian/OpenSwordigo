/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046DC70
 * Mangled: _ZN5Caver14SceneGridLayer9AddObjectEPNS_14SceneGridEntryERKNS_9RectangleE
 * Demangled: Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001FD4D0  Caver::SceneGridLayer::AddObject(Caver::SceneGridEntry *,Caver::Rectangle const&)
 *
 * Callees: 2
 *   0x00000000001F4BE0  Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry *)
 *   0x00000000001F8770  Caver::SceneGridLayer::GridRectForAABB(Caver::Rectangle const&)
 *
 * Referenced strings: 13
 *   insn=0x000000000046DC88 string=0x000000000046DC8C "h"
 *   insn=0x000000000046DC94 string=0x000000000046DC98 ""
 *   insn=0x000000000046DCA0 string=0x000000000046DCA4 "t"
 *   insn=0x000000000046DCA8 string=0x000000000046DCAC "`B"
 *   insn=0x000000000046DCA8 string=0x00000000001F8770 "0'"
 *   insn=0x000000000046DCBC string=0x000000000046DCC0 "`B"
 *   insn=0x000000000046DCD8 string=0x000000000046DCDC "l"
 *   insn=0x000000000046DCEC string=0x000000000046DCF0 ""
 *   insn=0x000000000046DCF0 string=0x000000000046DCF4 " "
 *   insn=0x000000000046DCF8 string=0x000000000046DCFC "Z"
 *   insn=0x000000000046DCF8 string=0x00000000001F4BE0 "P'"
 *   insn=0x000000000046DCFC string=0x000000000046DD00 "_"
 *   insn=0x000000000046DD10 string=0x000000000046DD14 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGridLayer::AddObject(
        __int64 this,
        Caver::SceneGridEntry *a2,
        const Caver::Rectangle *a3)
{
  __int64 v5; // x20
  __int128 v6; // q0
  __int64 v7; // x21
  __int64 v8; // x22
  int v9; // w23
  int v10; // w24
  int v11; // w25
  int v12; // w26
  bool v13; // cc

  v5 = this;
  if ( !*(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = this;
    this = Caver::SceneGridLayer::GridRectForAABB((Caver::SceneGridLayer *)this, a3);
    *(_QWORD *)((char *)a2 + 36) = this;
    v6 = *(_OWORD *)a3;
    v7 = this << 16 >> 48;
    v8 = this >> 48;
    *(_OWORD *)((char *)a2 + 20) = v6;
    if ( (int)v7 <= this >> 48 )
    {
      v9 = (__int16)this;
      v10 = (int)this >> 16;
      v11 = (__int16)this - 1;
      do
      {
        v12 = v11;
        if ( v9 <= v10 )
        {
          do
          {
            this = Caver::SceneGridCell::AddEntry(
                     (Caver::SceneGridCell *)(*(_QWORD *)(v5 + 48) + 16LL * (v12 + (int)v7 * *(_DWORD *)(v5 + 40) + 1)),
                     a2);
            ++v12;
          }
          while ( v12 < v10 );
        }
        v13 = (int)v7 < (int)v8;
        LODWORD(v7) = v7 + 1;
      }
      while ( v13 );
    }
  }
  return this;
}

