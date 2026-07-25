/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2DDC
 * Mangled: _ZN5Caver4Font8AddGlyphERKNS0_5GlyphE
 * Demangled: Caver::Font::AddGlyph(Caver::Font::Glyph const&)
 *
 * Callers: 2
 *   0x00000000001FDE50  Caver::Font::AddGlyph(Caver::Font::Glyph const&)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Callees: 4
 *   0x00000000001F4E30  std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Font::Glyph*,std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>>,Caver::Font::Glyph const&)
 *   0x00000000001F57C0  std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC4A0  std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *
 * Referenced strings: 35
 *   insn=0x00000000004C2DEC string=0x00000000004C2DF0 "V"
 *   insn=0x00000000004C2DF8 string=0x00000000004C2DFC "jt"
 *   insn=0x00000000004C2E04 string=0x00000000004C2E08 "\t"
 *   insn=0x00000000004C2E0C string=0x00000000004C2E10 ""
 *   insn=0x00000000004C2E10 string=0x00000000004C2E14 "\t"
 *   insn=0x00000000004C2E14 string=0x00000000004C2E18 ")"
 *   insn=0x00000000004C2E18 string=0x00000000004C2E1C "4}\n"
 *   insn=0x00000000004C2E20 string=0x00000000004C2E24 "\t@"
 *   insn=0x00000000004C2E24 string=0x00000000004C2E28 "?"
 *   insn=0x00000000004C2E30 string=0x00000000004C2E34 "\t"
 *   insn=0x00000000004C2E48 string=0x00000000004C2E4C "\t)"
 *   insn=0x00000000004C2E4C string=0x00000000004C2E50 "h"
 *   insn=0x00000000004C2E50 string=0x00000000004C2E54 ""
 *   insn=0x00000000004C2E54 string=0x00000000004C2E58 "h"
 *   insn=0x00000000004C2E68 string=0x00000000004C2E6C "h"
 *   insn=0x00000000004C2E68 string=0x00000000001F4E30 "P'"
 *   insn=0x00000000004C2E80 string=0x00000000004C2E84 ")"
 *   insn=0x00000000004C2E84 string=0x00000000004C2E88 ")"
 *   insn=0x00000000004C2E88 string=0x00000000004C2E8C "?"
 *   insn=0x00000000004C2E90 string=0x00000000004C2EA0 "*"
 *   insn=0x00000000004C2E94 string=0x00000000004C2E98 "Iy("
 *   insn=0x00000000004C2EA0 string=0x00000000004C2EA4 "_"
 *   insn=0x00000000004C2EA4 string=0x00000000004C2EA8 "H"
 *   insn=0x00000000004C2EA8 string=0x00000000004C2EAC "\n"
 *   insn=0x00000000004C2EA8 string=0x00000000004C2ED0 "h"
 *   insn=0x00000000004C2EAC string=0x00000000004C2EB0 "?"
 *   insn=0x00000000004C2EC4 string=0x00000000004C2EC8 ">"
 *   insn=0x00000000004C2EC8 string=0x00000000004C2ECC "a"
 *   insn=0x00000000004C2EC8 string=0x00000000001F57C0 "P'"
 *   insn=0x00000000004C2ED0 string=0x00000000004C2ED4 "?"
 *   insn=0x00000000004C2EDC string=0x00000000004C2EE0 "(D"
 *   insn=0x00000000004C2EE0 string=0x00000000004C2EE4 "a"
 *   insn=0x00000000004C2EF0 string=0x00000000004C2EF4 "k"
 *   insn=0x00000000004C2EF4 string=0x00000000001FC4A0 "0'"
 *   insn=0x00000000004C2F1C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Font::AddGlyph(Caver::Font *this, const Glyph *a2)
{
  __int64 result; // x0
  __int64 v4; // t1
  __int64 v6; // x8
  int v7; // w20
  __int64 v8; // x8
  unsigned __int64 v9; // x8
  __int64 v10; // x10
  _DWORD *v11; // x1
  unsigned __int64 v12; // x9

  _ReadStatusReg(TPIDR_EL0);
  v4 = *((_QWORD *)this + 2);
  result = (__int64)this + 16;
  v6 = *(_QWORD *)(result + 8);
  v7 = -1171354717 * ((unsigned __int64)(v6 - v4) >> 2);
  if ( *(_QWORD *)(result + 16) == v6 )
  {
    result = std::vector<Caver::Font::Glyph>::_M_insert_aux();
    v8 = *((_QWORD *)this + 3);
  }
  else
  {
    *(_QWORD *)v6 = *a2;
    *(_OWORD *)(v6 + 8) = *(_OWORD *)(a2 + 1);
    *(_OWORD *)(v6 + 24) = *(_OWORD *)(a2 + 3);
    *(_DWORD *)(v6 + 40) = *((_DWORD *)a2 + 10);
    v8 = *((_QWORD *)this + 3) + 44LL;
    *((_QWORD *)this + 3) = v8;
  }
  *(_DWORD *)(v8 - 44) = v7;
  v9 = *((int *)a2 + 1);
  v10 = *((_QWORD *)this + 5);
  v11 = (_DWORD *)*((_QWORD *)this + 6);
  v12 = ((__int64)v11 - v10) >> 2;
  if ( v12 <= v9 )
  {
    if ( v12 + 1 <= v9 && v12 < v9 )
    {
      result = std::vector<int>::_M_fill_insert((int)this + 40, v11);
      v11 = (_DWORD *)*((_QWORD *)this + 6);
    }
    if ( v11 == *((_DWORD **)this + 7) )
    {
      return std::vector<int>::_M_insert_aux((int)this + 40, v11);
    }
    else
    {
      *v11 = v7;
      *((_QWORD *)this + 6) = v11 + 1;
    }
  }
  else
  {
    *(_DWORD *)(v10 + 4 * v9) = v7;
  }
  return result;
}

