/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C6588
 * Mangled: _ZN5Caver8FontText13TranslateLineEiRKNS_7Vector2E
 * Demangled: Caver::FontText::TranslateLine(int,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F5BC0  Caver::FontText::TranslateLine(int,Caver::Vector2 const&)
 *
 * Callees: 2
 *   0x00000000001F9470  Caver::Rectangle::Translate(Caver::Vector2 const&)
 *   0x0000000000201BA0  Caver::Sprite::TranslateFaces(int,int,Caver::Vector2 const&)
 *
 * Referenced strings: 20
 *   insn=0x00000000004C659C string=0x00000000004C65A0 "hf@"
 *   insn=0x00000000004C65AC string=0x00000000004C65B0 "?"
 *   insn=0x00000000004C65B4 string=0x00000000004C65B8 "+|@"
 *   insn=0x00000000004C65BC string=0x00000000004C65C0 "j2K"
 *   insn=0x00000000004C65CC string=0x00000000004C65D0 ")"
 *   insn=0x00000000004C65D0 string=0x00000000004C65D4 ""
 *   insn=0x00000000004C65D4 string=0x00000000004C65D8 ")"
 *   insn=0x00000000004C65D8 string=0x00000000004C65E0 "a9@y"
 *   insn=0x00000000004C65E8 string=0x00000000004C65EC "\t"
 *   insn=0x00000000004C65F0 string=0x00000000004C65F4 "?"
 *   insn=0x00000000004C65F8 string=0x00000000004C660C "hR@"
 *   insn=0x00000000004C65FC string=0x00000000004C6600 ")\t"
 *   insn=0x00000000004C6600 string=0x00000000004C6604 "9@y"
 *   insn=0x00000000004C6610 string=0x00000000004C6614 "`b"
 *   insn=0x00000000004C6618 string=0x00000000004C661C "a"
 *   insn=0x00000000004C6624 string=0x00000000004C6628 "K"
 *   insn=0x00000000004C6634 string=0x00000000004C6638 "iZ@"
 *   insn=0x00000000004C6644 string=0x00000000004C6648 "%8"
 *   insn=0x00000000004C665C string=0x00000000001F9470 "0'"
 *   insn=0x00000000004C6668 string=0x00000000004C666C "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FontText::TranslateLine(__int64 this, int a2, const Caver::Vector2 *a3)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v6; // x21
  __int64 v7; // x9
  int *v8; // x21
  __int64 v9; // t1
  int *v10; // x22
  __int64 v11; // x10
  __int64 v12; // x8
  __int64 v13; // x11
  unsigned __int64 v14; // x8
  int v15; // w8
  int v16; // w23
  __int64 v17; // x8

  v3 = this;
  v4 = *(_QWORD *)(this + 200);
  v6 = v4 + 8LL * a2;
  v9 = *(int *)(v6 + 4);
  v8 = (int *)(v6 + 4);
  v7 = v9;
  if ( (int)v9 >= 1 )
  {
    v10 = (int *)(v4 + 8LL * a2);
    v11 = *(_QWORD *)(this + 176);
    v12 = *v10;
    v13 = v11 + 36 * v12;
    v14 = v12 + v7;
    if ( 0x8E38E38E38E38E39LL * ((*(_QWORD *)(this + 184) - v11) >> 2) <= v14 )
      v15 = *(_DWORD *)(this + 80);
    else
      v15 = *(unsigned __int16 *)(v11 + 36 * v14 + 28);
    this = Caver::Sprite::TranslateFaces(
             (Caver::Sprite *)(this + 88),
             *(unsigned __int16 *)(v13 + 28),
             v15 - (unsigned int)*(unsigned __int16 *)(v13 + 28),
             a3);
    if ( *v8 >= 1 )
    {
      v16 = 0;
      do
      {
        v17 = *(_QWORD *)(v3 + 176) + 36LL * (v16 + *v10);
        *(float32x2_t *)(v17 + 20) = vadd_f32(*(float32x2_t *)a3, *(float32x2_t *)(v17 + 20));
        this = Caver::Rectangle::Translate((Caver::Rectangle *)(v17 + 4), a3);
        ++v16;
      }
      while ( v16 < *v8 );
    }
  }
  return this;
}

