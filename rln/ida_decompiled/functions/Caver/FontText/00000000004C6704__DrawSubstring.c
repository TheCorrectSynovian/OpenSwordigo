/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C6704
 * Mangled: _ZNK5Caver8FontText13DrawSubstringEPNS_16RenderingContextEmm
 * Demangled: Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *
 * Callers: 1
 *   0x00000000001FE140  Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *
 * Callees: 5
 *   0x00000000001F5580  Caver::Sprite::DrawTriangles(Caver::RenderingContext *,int,int)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000002012D0  Caver::RenderingContext::SetBlendFunc(uint,uint)
 *
 * Referenced strings: 25
 *   insn=0x00000000004C6728 string=0x00000000004C672C "("
 *   insn=0x00000000004C672C string=0x00000000004C6730 ")"
 *   insn=0x00000000004C6730 string=0x00000000004C673C ""
 *   insn=0x00000000004C673C string=0x00000000004C6740 "\t"
 *   insn=0x00000000004C6740 string=0x00000000004C6744 "}\t"
 *   insn=0x00000000004C6748 string=0x00000000004C674C "I"
 *   insn=0x00000000004C6754 string=0x00000000004C6758 ">"
 *   insn=0x00000000004C6758 string=0x00000000004C675C "A`"
 *   insn=0x00000000004C6758 string=0x00000000001FC450 "0'"
 *   insn=0x00000000004C675C string=0x00000000004C6760 "b`"
 *   insn=0x00000000004C6774 string=0x00000000001F5ED0 "P'"
 *   insn=0x00000000004C6778 string=0x00000000004C677C "+"
 *   insn=0x00000000004C677C string=0x00000000004C6788 "J"
 *   insn=0x00000000004C6788 string=0x00000000004C678C "J"
 *   insn=0x00000000004C678C string=0x00000000004C6790 ""
 *   insn=0x00000000004C6794 string=0x00000000004C6798 "J}"
 *   insn=0x00000000004C6798 string=0x00000000004C679C "?"
 *   insn=0x00000000004C679C string=0x00000000004C67A0 """
 *   insn=0x00000000004C67A8 string=0x00000000004C67AC "(!\n"
 *   insn=0x00000000004C67AC string=0x00000000004C67B0 "b9@y9@y"
 *   insn=0x00000000004C67B0 string=0x00000000004C67B4 "9@y"
 *   insn=0x00000000004C67CC string=0x00000000004C67D0 "l"
 *   insn=0x00000000004C67D0 string=0x00000000001F5580 "P'"
 *   insn=0x00000000004C67F4 string=0x00000000004C67F8 "j"
 *   insn=0x00000000004C67F8 string=0x00000000001FCDA0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::FontText::DrawSubstring(
        _QWORD *this,
        Caver::RenderingContext *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // x20
  __int64 v8; // x8
  int v9; // w2

  v7 = this;
  if ( a4 && 0x8E38E38E38E38E39LL * ((__int64)(this[23] - this[22]) >> 2) > a3 )
  {
    Caver::RenderingContext::SetBlendingEnabled(a2, 1);
    Caver::RenderingContext::SetBlendFunc(a2, 0x302u, 0x303u);
    Caver::RenderingContext::UseProgram(a2, 3u);
    v8 = v7[22];
    if ( a4 + a3 >= 0x8E38E38E38E38E39LL * ((v7[23] - v8) >> 2) )
    {
      return (_QWORD *)Caver::Sprite::Draw((Caver::Sprite *)(v7 + 11), a2);
    }
    else
    {
      v9 = *(unsigned __int16 *)(v8 + 36 * a3 + 28);
      return (_QWORD *)Caver::Sprite::DrawTriangles(
                         (Caver::Sprite *)(v7 + 11),
                         a2,
                         v9,
                         (unsigned int)*(unsigned __int16 *)(v8 + 36 * (a4 + a3) + 28) - v9);
    }
  }
  return this;
}

