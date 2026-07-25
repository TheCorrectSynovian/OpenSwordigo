/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042794C
 * Mangled: _ZN5Caver7MapView14SetNodePressedEmb
 * Demangled: Caver::MapView::SetNodePressed(ulong,bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD280  Caver::MapView::UpdateNodesSprite(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000427950 string=0x0000000000427954 "H"
 *   insn=0x0000000000427958 string=0x000000000042795C "\t`O9"
 *   insn=0x0000000000427960 string=0x0000000000427964 "A"
 *   insn=0x000000000042796C string=0x0000000000427970 "`"
 *   insn=0x0000000000427970 string=0x0000000000427974 "CV"
 *   insn=0x0000000000427974 string=0x00000000001FD280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::SetNodePressed(__int64 this, __int64 a2, char a3)
{
  if ( *(_QWORD *)(this + 992) != a2 || (a3 & 1) != *(_BYTE *)(this + 984) )
  {
    *(_QWORD *)(this + 992) = a2;
    *(_BYTE *)(this + 984) = a3 & 1;
    return Caver::MapView::UpdateNodesSprite((Caver::MapView *)this);
  }
  return this;
}

