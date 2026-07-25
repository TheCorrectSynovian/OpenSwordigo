/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F8ADC
 * Mangled: _ZN5Caver19AttributePointsView6UpdateEf
 * Demangled: Caver::AttributePointsView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FDE70  Caver::GUIAnimatedSprite::Update(float)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 7
 *   insn=0x00000000003F8AF0 string=0x00000000003F8AF4 "h"
 *   insn=0x00000000003F8AF4 string=0x00000000003F8AF8 ""
 *   insn=0x00000000003F8B04 string=0x00000000003F8B08 "t""
 *   insn=0x00000000003F8B18 string=0x00000000001FDE70 "0'"
 *   insn=0x00000000003F8B1C string=0x00000000003F8B20 "H"
 *   insn=0x00000000003F8B20 string=0x00000000003F8B24 "v"
 *   insn=0x00000000003F8B20 string=0x00000000003F8B28 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AttributePointsView::Update(Caver::AttributePointsView *this, float a2)
{
  __int64 v4; // x21
  Caver::GUIAnimatedSprite *v5; // x20

  if ( *((int *)this + 96) >= 1 )
  {
    v4 = 0;
    v5 = (Caver::AttributePointsView *)((char *)this + 392);
    do
    {
      Caver::GUIAnimatedSprite::Update(v5, a2);
      if ( *((_BYTE *)v5 + 49) )
        *((_BYTE *)this + 1344) = 1;
      ++v4;
      v5 = (Caver::GUIAnimatedSprite *)((char *)v5 + 72);
    }
    while ( v4 < *((int *)this + 96) );
  }
  return Caver::GUIView::Update(this, a2);
}

