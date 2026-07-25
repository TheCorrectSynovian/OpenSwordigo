/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000424930
 * Mangled: _ZN5Caver7MapView26RecursivelySetVisibleNodesEPNS_7MapNodeERKNS_7Vector2ES5_
 * Demangled: Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode *,Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x00000000002027A0  Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode *,Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x0000000000424930  Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode *,Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202260  Caver::Map::NodeForName(std::string const&)
 *
 * Referenced strings: 39
 *   insn=0x000000000042494C string=0x0000000000424950 "Y"
 *   insn=0x0000000000424950 string=0x0000000000424954 "("
 *   insn=0x0000000000424974 string=0x0000000000424978 "a"
 *   insn=0x0000000000424978 string=0x000000000042497C ""
 *   insn=0x000000000042497C string=0x0000000000424980 "(ih"
 *   insn=0x0000000000424988 string=0x000000000042498C "\t"
 *   insn=0x000000000042498C string=0x0000000000424990 " \t@"
 *   insn=0x00000000004249A0 string=0x00000000004249A4 " @"
 *   insn=0x00000000004249A0 string=0x0000000000424A98 "("
 *   insn=0x00000000004249A4 string=0x00000000004249A8 "a"
 *   insn=0x00000000004249BC string=0x00000000004249C0 "\te@9"
 *   insn=0x00000000004249C4 string=0x00000000004249C8 "\na"
 *   insn=0x00000000004249C8 string=0x00000000004249CC "i"
 *   insn=0x00000000004249D0 string=0x00000000004249D4 "?"
 *   insn=0x00000000004249E4 string=0x00000000004249E8 "|U"
 *   insn=0x00000000004249E8 string=0x00000000004249EC "!"
 *   insn=0x00000000004249EC string=0x0000000000424A70 "\ti{8"
 *   insn=0x00000000004249F0 string=0x00000000004249F4 ""
 *   insn=0x0000000000424A04 string=0x0000000000424A08 "8"
 *   insn=0x0000000000424A08 string=0x0000000000424A0C "@"
 *   insn=0x0000000000424A08 string=0x0000000000424A4C "w"
 *   insn=0x0000000000424A0C string=0x0000000000424A10 ""
 *   insn=0x0000000000424A10 string=0x0000000000424A14 ""
 *   insn=0x0000000000424A18 string=0x0000000000424A1C ""
 *   insn=0x0000000000424A20 string=0x0000000000424A24 "\t@"
 *   insn=0x0000000000424A28 string=0x0000000000424A2C "@"
 *   insn=0x0000000000424A2C string=0x0000000000424A30 ""
 *   insn=0x0000000000424A30 string=0x0000000000424A34 ""
 *   insn=0x0000000000424A38 string=0x0000000000424A3C ""
 *   insn=0x0000000000424A40 string=0x0000000000424A44 "@"
 *   insn=0x0000000000424A50 string=0x0000000000424A54 "("
 *   insn=0x0000000000424A78 string=0x0000000000424A7C "Z"
 *   insn=0x0000000000424A7C string=0x0000000000424A80 "{c"
 *   insn=0x0000000000424A80 string=0x0000000000424A84 ")"
 *   insn=0x0000000000424A84 string=0x0000000000424A88 ")"
 *   insn=0x0000000000424A88 string=0x0000000000424A8C ")}"
 *   insn=0x0000000000424A8C string=0x0000000000424A90 "_"
 *   insn=0x0000000000424AA0 string=0x0000000000424AA4 "!"
 *   insn=0x0000000000424AC8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MapView *__fastcall Caver::MapView::RecursivelySetVisibleNodes(
        Caver::MapView *this,
        Caver::MapNode *a2,
        const Caver::Vector2 *a3,
        const Caver::Vector2 *a4)
{
  Caver::MapView *v5; // x21
  _BYTE *v7; // x8
  int v9; // w9
  __int64 v10; // x8
  unsigned __int64 v11; // x26
  __int64 v12; // x27
  __int64 v13; // x8
  __int64 v14; // x8
  Caver::MapNode *v15; // [xsp+8h] [xbp-68h]
  _QWORD *v16; // [xsp+10h] [xbp-60h]

  v5 = this;
  _ReadStatusReg(TPIDR_EL0);
  *((_BYTE *)a2 + 92) = 1;
  v7 = *(_BYTE **)(*((_QWORD *)this + 35) + 16LL * *(_QWORD *)a2);
  if ( fabsf(*(float *)(*(_QWORD *)v7 + 8LL) - *(float *)a3) <= *(float *)a4
    && fabsf(*(float *)(*(_QWORD *)v7 + 12LL) - *((float *)a3 + 1)) <= *((float *)a4 + 1) )
  {
    v9 = (unsigned __int8)v7[25];
    v7[24] = 1;
    if ( v9 )
    {
      v10 = *((_QWORD *)a2 + 6);
      if ( *((_QWORD *)a2 + 7) != v10 )
      {
        v11 = 0;
        v12 = 16;
        do
        {
          if ( !*(_BYTE *)(v10 + v12) )
          {
            this = (Caver::MapView *)Caver::Map::NodeForName();
            if ( v16 )
            {
              v13 = v16[1] - 1LL;
              v16[1] = v13;
              if ( !v13 )
              {
                this = (Caver::MapView *)(*(__int64 (__fastcall **)())(*v16 + 16LL))();
                v14 = v16[2] - 1LL;
                v16[2] = v14;
                if ( !v14 )
                  this = (Caver::MapView *)(*(__int64 (__fastcall **)())(*v16 + 24LL))();
              }
            }
            if ( v15 )
            {
              if ( !*((_BYTE *)v15 + 92) )
                this = (Caver::MapView *)Caver::MapView::RecursivelySetVisibleNodes(v5, v15, a3, a4);
            }
          }
          v10 = *((_QWORD *)a2 + 6);
          ++v11;
          v12 += 24;
        }
        while ( v11 < 0xAAAAAAAAAAAAAAABLL * ((*((_QWORD *)a2 + 7) - v10) >> 3) );
      }
    }
  }
  return this;
}

