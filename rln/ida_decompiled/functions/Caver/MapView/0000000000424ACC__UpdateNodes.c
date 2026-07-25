/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000424ACC
 * Mangled: _ZN5Caver7MapView11UpdateNodesEv
 * Demangled: Caver::MapView::UpdateNodes(void)
 *
 * Callers: 1
 *   0x00000000001FCF20  Caver::MapView::UpdateNodes(void)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001FD280  Caver::MapView::UpdateNodesSprite(void)
 *   0x0000000000202900  Caver::MapView::UpdatePathsSprite(void)
 *
 * Referenced strings: 21
 *   insn=0x0000000000424AE0 string=0x0000000000424AE4 "T"
 *   insn=0x0000000000424AF4 string=0x0000000000424AF8 "h~@"
 *   insn=0x0000000000424AF8 string=0x0000000000424AFC "\t)@"
 *   insn=0x0000000000424AFC string=0x0000000000424B00 "_"
 *   insn=0x0000000000424B04 string=0x0000000000424B78 "h"
 *   insn=0x0000000000424B10 string=0x0000000000424B14 ""
 *   insn=0x0000000000424B14 string=0x0000000000424B18 "Id"
 *   insn=0x0000000000424B18 string=0x0000000000424B1C "j"
 *   insn=0x0000000000424B1C string=0x0000000000424B20 "Jiu"
 *   insn=0x0000000000424B20 string=0x0000000000424B24 "Ka@9"
 *   insn=0x0000000000424B28 string=0x0000000000424B2C "J"
 *   insn=0x0000000000424B28 string=0x0000000000424B60 "\n-@"
 *   insn=0x0000000000424B2C string=0x0000000000424B30 "@"
 *   insn=0x0000000000424B48 string=0x0000000000424B4C "h~@"
 *   insn=0x0000000000424B48 string=0x00000000001F6E00 "0'"
 *   insn=0x0000000000424B68 string=0x0000000000424B6C "j"
 *   insn=0x0000000000424B70 string=0x0000000000424B74 "C"
 *   insn=0x0000000000424B80 string=0x0000000000424B84 "}@"
 *   insn=0x0000000000424B90 string=0x00000000001FD280 "0'"
 *   insn=0x0000000000424B94 string=0x0000000000424B98 "Zw"
 *   insn=0x0000000000424BC4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapView::UpdateNodes(Caver::MapView *this)
{
  _QWORD *v2; // x8
  __int64 v3; // x21
  char v4; // w9
  unsigned __int64 v5; // x22
  float32x2_t **v11; // x10
  __int128 v12; // [xsp+0h] [xbp-60h] BYREF
  __int128 v13; // [xsp+10h] [xbp-50h] BYREF
  __int64 v14; // [xsp+28h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v13 = 0u;
  v2 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v2[1] != *v2 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    __asm { FMOV            V8.2S, #-16.0 }
    do
    {
      v11 = *(float32x2_t ***)(*((_QWORD *)this + 35) + v3);
      if ( *((_BYTE *)v11 + 24) )
      {
        *(float32x2_t *)&v12 = vadd_f32((*v11)[1], _D8);
        *((_QWORD *)&v12 + 1) = 0x4200000042000000LL;
        if ( (v4 & 1) != 0 )
        {
          Caver::Rectangle::ExpandToincludeRectangle((Caver::Rectangle *)&v13, (const Caver::Rectangle *)&v12);
          v2 = (_QWORD *)*((_QWORD *)this + 31);
        }
        else
        {
          v13 = v12;
        }
        v4 = 1;
      }
      ++v5;
      v3 += 16;
    }
    while ( v5 < (__int64)(v2[1] - *v2) >> 4 );
  }
  (*(void (__fastcall **)(Caver::MapView *, __int128 *))(*(_QWORD *)this + 248LL))(this, &v13);
  Caver::MapView::UpdateNodesSprite(this);
  Caver::MapView::UpdatePathsSprite(this);
}

