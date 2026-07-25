/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B03D4
 * Mangled: _ZN5Caver7Polygon11SetVerticesEiPKNS_7Vector2E
 * Demangled: Caver::Polygon::SetVertices(int,Caver::Vector2 const*)
 *
 * Callers: 2
 *   0x00000000001FEFD0  Caver::Polygon::SetVertices(int,Caver::Vector2 const*)
 *   0x00000000004B02F8  Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7DF0  std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::Vector2*,std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>>,ulong,Caver::Vector2 const&)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 23
 *   insn=0x00000000004B03E4 string=0x00000000004B03E8 "V"
 *   insn=0x00000000004B03FC string=0x00000000004B0400 "h"
 *   insn=0x00000000004B0404 string=0x00000000004B0408 "`"
 *   insn=0x00000000004B0408 string=0x00000000004B040C "u"
 *   insn=0x00000000004B0408 string=0x00000000004B0454 "4"
 *   insn=0x00000000004B0410 string=0x00000000004B0414 ""
 *   insn=0x00000000004B0414 string=0x00000000004B0418 "a\n@"
 *   insn=0x00000000004B041C string=0x00000000004B0420 ")"
 *   insn=0x00000000004B0420 string=0x00000000004B0424 "*"
 *   insn=0x00000000004B0424 string=0x00000000004B0428 "J"
 *   insn=0x00000000004B0428 string=0x00000000004B042C "_"
 *   insn=0x00000000004B0430 string=0x00000000004B0434 """
 *   insn=0x00000000004B0430 string=0x00000000004B0448 "i"
 *   insn=0x00000000004B0438 string=0x00000000004B043C "m"
 *   insn=0x00000000004B043C string=0x00000000001F7DF0 "0'"
 *   insn=0x00000000004B0440 string=0x00000000004B0444 ""
 *   insn=0x00000000004B0440 string=0x00000000004B0458 "`"
 *   insn=0x00000000004B0448 string=0x00000000004B044C "\t"
 *   insn=0x00000000004B044C string=0x00000000004B0450 "h\n"
 *   insn=0x00000000004B0468 string=0x00000000004B046C "h"
 *   insn=0x00000000004B046C string=0x00000000004B0470 "\t"
 *   insn=0x00000000004B0470 string=0x00000000004B0474 "\ti5"
 *   insn=0x00000000004B049C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::Polygon::SetVertices(_DWORD *this, int a2, const Caver::Vector2 *a3)
{
  _DWORD *v3; // x19
  __int64 v6; // x8
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x10
  size_t v9; // x21

  v3 = this;
  _ReadStatusReg(TPIDR_EL0);
  if ( *this == a2 )
  {
LABEL_7:
    if ( !a3 )
      return this;
    goto LABEL_8;
  }
  *this = a2;
  this += 2;
  v6 = *((_QWORD *)v3 + 1);
  v7 = a2 + 1LL;
  v8 = (*((_QWORD *)v3 + 2) - v6) >> 3;
  if ( v8 >= v7 )
  {
    if ( v8 > v7 )
      *((_QWORD *)v3 + 2) = v6 + 8 * v7;
    goto LABEL_7;
  }
  this = (_DWORD *)std::vector<Caver::Vector2>::_M_fill_insert();
  if ( a3 )
  {
LABEL_8:
    v9 = 8LL * a2;
    this = memcpy(*((void **)v3 + 1), a3, v9);
    *(_QWORD *)(*((_QWORD *)v3 + 1) + v9) = **((_QWORD **)v3 + 1);
  }
  return this;
}

